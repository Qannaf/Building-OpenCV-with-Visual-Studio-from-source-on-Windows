# Building-OpenCV-with-Visual-Studio-from-source-on-Windows
In this tutorial I will show you  we can install OpenCV on Windows for C++ and Python
# Install prerequisites
Visual Studio
-------------
Visual Studio Community 2019 could be downloaded from https://www.visualstudio.com/downloads/. During a fresh installation enable "Desktop development with C++" workload and check box "Windows 10 SDK" to enable usage of the Graphical Device Interface (GDI) useful to display images in a window thanks to vpDisplayGDI class. After a fresh installation, start Visual Studio and create an empty C++ project to install the common tools for Visual C++ 2019.

If you already have Visual Studio Community 2019, you can check if "Desktop Development with C++" workload is activated and if "Windows 10 SDK" is enabled following instructions given here that we resume:
1.1 Find the Visual Studio Installer on your computer. Select Start, and then scroll to the letter V, where it's listed as Visual Studio Installer
Click or tap to start the installer, and then choose "Modify"
1.2 From the Workloads screen, check if "Desktop Development with C++" workload is activated and if "Windows 10 SDK" is enabled like in the following image
![img-msvc16-config](https://user-images.githubusercontent.com/48203467/109415963-e3a4b680-79bb-11eb-9a2d-28a026cb3955.png)

1.3 Choose Modify again.
1.4 After the new workloads and components are installed, choose Launch.

Download the Installer
---------------------
Once you have set up Visual Studio on your system, download the installer according to the Visual Studio version you have installed.

<table style="width:100%;max-width:700px" width="700" cellpadding="10" border="1">
  <tbody><tr>
   <th scope="col" bgcolor="#303236" style="color:#fff;text-align:center">OpenCV Version</th>
    <th scope="col" bgcolor="#303236" style="color:#fff;text-align:center">Visual Studio 16</th>
    <th scope="col" bgcolor="#303236" style="color:#fff;text-align:center">Visual Studio 15</th>
    <th scope="col" bgcolor="#303236" style="color:#fff;text-align:center">Visual Studio 14</th>
  </tr>
  <tr>
    <td style="text-align:center"><strong>OpenCV-4.5.1</strong></td>
    <td style="text-align:center"><a href="https://www.dropbox.com/s/4qc90n6u2nsdv88/OpenCV-4.5.1-vc16.exe?dl=1" rel="noreferrer noopener ugc" title="Download OpenCV Installer 4.5.0 vc16" target="_blank" data-saferedirecturl="https://www.google.com/url?q=https://www.dropbox.com/s/4qc90n6u2nsdv88/OpenCV-4.5.1-vc16.exe?dl%3D1&amp;source=gmail&amp;ust=1614596789782000&amp;usg=AFQjCNE-LSPJTksVy9Zyo4Cz-8iP4SqPQw">OpenCV-4.5.1-vc16.exe</a></td>
    <td style="text-align:center"><a href="https://www.dropbox.com/s/etmoea258dzjs4k/OpenCV-4.5.1-vc15.exe?dl=1" rel="noreferrer noopener ugc" title="Download OpenCV Installer 4.5.0 vc15" target="_blank" data-saferedirecturl="https://www.google.com/url?q=https://www.dropbox.com/s/etmoea258dzjs4k/OpenCV-4.5.1-vc15.exe?dl%3D1&amp;source=gmail&amp;ust=1614596789782000&amp;usg=AFQjCNFGEkRQBkfPC-lF2Nk3G1JHU-O2Ig">OpenCV-4.5.1-vc15.exe</a></td>
    <td style="text-align:center"><a href="https://www.dropbox.com/s/342430jrw25gaq2/OpenCV-4.5.1-vc14.exe?dl=1" rel="noreferrer noopener ugc" title="Download OpenCV Installer 4.5.0 vc14" target="_blank" data-saferedirecturl="https://www.google.com/url?q=https://www.dropbox.com/s/342430jrw25gaq2/OpenCV-4.5.1-vc14.exe?dl%3D1&amp;source=gmail&amp;ust=1614596789782000&amp;usg=AFQjCNE7QztJyrECVYTacohXAty4kl7WYQ">OpenCV-4.5.1-vc14.exe</a></td>
  </tr>
  <tr>
    <td style="text-align:center"><strong>OpenCV-4.5.0</strong></td>
    <td style="text-align:center"><a href="https://www.dropbox.com/s/vm5r6y74eee0vvb/OpenCV-4.5.0-vc16.exe?dl=1" rel="noreferrer noopener ugc" title="Download OpenCV Installer 4.5.0 vc16" target="_blank" data-saferedirecturl="https://www.google.com/url?q=https://www.dropbox.com/s/vm5r6y74eee0vvb/OpenCV-4.5.0-vc16.exe?dl%3D1&amp;source=gmail&amp;ust=1614596789782000&amp;usg=AFQjCNG2cm9M2wp6SXfza4k8NXweJjMcPg">OpenCV-4.5.0-vc16.exe</a></td>
    <td style="text-align:center"><a href="https://www.dropbox.com/s/wzdzq3fc4zkc1y4/OpenCV-4.5.0-vc15.exe?dl=1" rel="noreferrer noopener ugc" title="Download OpenCV Installer 4.5.0 vc15" target="_blank" data-saferedirecturl="https://www.google.com/url?q=https://www.dropbox.com/s/wzdzq3fc4zkc1y4/OpenCV-4.5.0-vc15.exe?dl%3D1&amp;source=gmail&amp;ust=1614596789782000&amp;usg=AFQjCNH1_w1TrkgTlTs45EJVAPL2Um3O-g">OpenCV-4.5.0-vc15.exe</a></td> 
    <td style="text-align:center"><a href="https://www.dropbox.com/s/2k60nvg0q07z035/OpenCV-4.5.0-vc14.exe?dl=1" rel="noreferrer noopener ugc" title="Download OpenCV Installer 4.5.0 vc14" target="_blank" data-saferedirecturl="https://www.google.com/url?q=https://www.dropbox.com/s/2k60nvg0q07z035/OpenCV-4.5.0-vc14.exe?dl%3D1&amp;source=gmail&amp;ust=1614596789782000&amp;usg=AFQjCNHczjBkVmPWWZmIDngBXtILs7vsWA">OpenCV-4.5.0-vc14.exe</a></td>
  </tr>
  <tr>
    <td style="text-align:center"><strong>OpenCV-4.4.0</strong></td>
    <td style="text-align:center"><a href="https://www.dropbox.com/s/z4hgj7mnx6f2rjt/OpenCV-4.4.0-vc16.exe?dl=1" rel="noreferrer noopener ugc" title="Download OpenCV Installer 4.4.0 vc16" target="_blank" data-saferedirecturl="https://www.google.com/url?q=https://www.dropbox.com/s/z4hgj7mnx6f2rjt/OpenCV-4.4.0-vc16.exe?dl%3D1&amp;source=gmail&amp;ust=1614596789782000&amp;usg=AFQjCNFaOJODE-3nVRqLQ6XjvcsTn6Kk3Q">OpenCV-4.4.0-vc16.exe</a></td>
    <td style="text-align:center"><a href="https://www.dropbox.com/s/y3fhk44s0rrpm8v/OpenCV-4.4.0-vc15.exe?dl=1" rel="noreferrer noopener ugc" title="Download OpenCV Installer 4.4.0 vc15" target="_blank" data-saferedirecturl="https://www.google.com/url?q=https://www.dropbox.com/s/y3fhk44s0rrpm8v/OpenCV-4.4.0-vc15.exe?dl%3D1&amp;source=gmail&amp;ust=1614596789782000&amp;usg=AFQjCNGpApPrKLrtM-KHA-GGYbDEVeAUIw">OpenCV-4.4.0-vc15.exe</a></td>
    <td style="text-align:center"><a href="https://www.dropbox.com/s/85esvu0pe3jcc81/OpenCV-4.4.0-vc14.exe?dl=1" rel="noreferrer noopener ugc" title="Download OpenCV Installer 4.4.0 vc14" target="_blank" data-saferedirecturl="https://www.google.com/url?q=https://www.dropbox.com/s/85esvu0pe3jcc81/OpenCV-4.4.0-vc14.exe?dl%3D1&amp;source=gmail&amp;ust=1614596789782000&amp;usg=AFQjCNFHAJa3Eg9wihXwBkuDBsaGF3xvHA">OpenCV-4.4.0-vc14.exe</a></td>
  </tr>
  <tr>
    <td style="text-align:center"><strong>OpenCV-4.1.0</strong></td>
    <td style="text-align:center"><a href="https://www.dropbox.com/s/fexjsdr1ly72r71/OpenCV-4.1.0-vc16.exe?dl=1" rel="noreferrer noopener" title="Download OpenCV Installer 4.1.0 vc16" target="_blank" data-saferedirecturl="https://www.google.com/url?q=https://www.dropbox.com/s/fexjsdr1ly72r71/OpenCV-4.1.0-vc16.exe?dl%3D1&amp;source=gmail&amp;ust=1614596789783000&amp;usg=AFQjCNEl1UXMhgcTYl4MQjCNd3ITBsaLyA">OpenCV-4.1.0-vc16.exe</a></td>
    <td style="text-align:center"><a href="https://www.dropbox.com/s/cqidx60q9e76qqf/OpenCV-4.1.0-vc15.exe?dl=1" rel="noreferrer noopener ugc" title="Download OpenCV Installer 4.1.0 vc1" target="_blank" data-saferedirecturl="https://www.google.com/url?q=https://www.dropbox.com/s/cqidx60q9e76qqf/OpenCV-4.1.0-vc15.exe?dl%3D1&amp;source=gmail&amp;ust=1614596789783000&amp;usg=AFQjCNGW_fIf8A-DQS8BxG5fThveJYta1g">OpenCV-4.1.0-vc15.exe</a></td>
    <td style="text-align:center"><a href="https://www.dropbox.com/s/9zu6u6mu31bea9h/OpenCV-4.1.0-vc14.exe?dl=1" rel="noreferrer noopener ugc" title="Download OpenCV Installer 4.1.0 vc1" target="_blank" data-saferedirecturl="https://www.google.com/url?q=https://www.dropbox.com/s/9zu6u6mu31bea9h/OpenCV-4.1.0-vc14.exe?dl%3D1&amp;source=gmail&amp;ust=1614596789783000&amp;usg=AFQjCNHzF3yCQQ94Uccsbgx4_D0OV20RcA">OpenCV-4.1.0-vc14.exe</a></td>
  </tr>
</tbody></table>

Install OpenCV 
---------------
Once you download the installer, double click it to run the installer. Before the installer starts, it’ll ask you permission to run the executable. Click on More info and then on Run anyway.
![1](https://user-images.githubusercontent.com/48203467/109417045-32554f00-79c2-11eb-90f9-3c7ce72b25ac.jpg)
Click on "More Info" to get the option to run the Installer
![2](https://user-images.githubusercontent.com/48203467/109417074-5ca70c80-79c2-11eb-9fdf-4f4557447561.jpg)
Click on "Run anyway" to run the Installer
![3](https://user-images.githubusercontent.com/48203467/109417112-83fdd980-79c2-11eb-879d-11f545695dda.jpg)
Read the license and If you accept it, click on I accept the agreement and click on Next.
![4](https://user-images.githubusercontent.com/48203467/109417155-b6a7d200-79c2-11eb-990d-45957ad8a12c.jpg)
Next, it’ll ask you to choose the installation folder. You can install OpenCV anywhere on the system. The default location is C:.
![5](https://user-images.githubusercontent.com/48203467/109417193-d7702780-79c2-11eb-8694-6dd3ab1d9b87.jpg)
Finally, the installer will ask you for confirmation to install OpenCV on the system. Click on Install to continue.
![6](https://user-images.githubusercontent.com/48203467/109417214-f1aa0580-79c2-11eb-8886-4c69a56d39b3.jpg)
Confirm Install
![7](https://user-images.githubusercontent.com/48203467/109417231-071f2f80-79c3-11eb-939b-6033cb73c70b.jpg)
After OpenCV is installed, you can exit the installer.
![8](https://user-images.githubusercontent.com/48203467/109417251-17cfa580-79c3-11eb-9433-a7b00982c6ed.jpg)



