/*  These are helpful hints for setting up and understanding  GIT Repositories... from the command line interface  
	....this information comes from the book Pro Git chapter 10.2    */

#include <stdio.h>

int main(void)
{
	printf("$ git init "); //add file name to initialize repository...creates "invisible" directory .git...
	printf("$ find .git/objects"); //from within repository directory
	printf("$ git hash-object -w "); //add file name to be "-w" =stored as "hashed object" in repository....
	printf("$ find .git/objects -type f"); //provides list of hash object "files" from the objects directory
	printf("$ git cat-file -p "); //add 40 digit full hash code to get back file in original "-p"retty format....
	printf("$ cat "); // follow by file name to read contents of a text file....how awesome is that?...try $ cat git.txt
	printf("$ echo 'content' > test.txt"); //echo command allows for content creation....'>' symbol moves 'content' into file...
	printf("$ git cat-file -t "); //add 40 digit full hash to see the file "-t"ype....

	/* below represented in {{}} ..is an example command for "staging" a blob object that is NOT the current version of a file....
		'100644' means the file is "normal" two other possibilities for this option include ...
		'100755' for executable file or '120000' for symbolic link...

		- the 40 digit hash represents the 'blob' object's ...particular version of the actual file....'test.txt'

	             {{$ git update-index --add --cacheinfo 100644 83baae61804e65cc73a7201a7252750c76066a30 test.txt }}

	 ****************************************** */

	 printf("$ git update-index --add --cacheinfo 100644 "); 
	/*  soooo....add the 40-digit hash of the blob-type version you intend to "stage"
	....followed by the file name where it previously existed...... 
	...and now this "staged" item can be moved into a "tree" object....  */

	 printf("$ git update-index "); // followed by file name is all that is needed for current version...once the file is on the stage.
	 printf("$ git update-index --add "); //  followed by a different file name to "--add" present version to the stage..

	 printf("$ git write-tree");  
	 /*  this moves objects from the stage into a new "tree" object...which will be assigned it's own 40-digit hash! */

	 printf("$git read-tree --prefix=name "); 
	 /*  this command followed by the 40-digit hash of an existing tree...allows for a tree to staged as a "sub-tree"...
	 ...  the option command... --prefix=_________....allows you to name this "sub-directory" of sorts.....  */

	 printf("$ echo 'first commit' | git commit-tree ");
	 /*  this command followed by the 40-digit hash of an existing tree ...creates a "commit object"....which in turn...
	 ...will hold the "commit message" echoed in ....as well as other useful info about who, what, when and why the tree contents were created.... */

	 printf("$ git cat-file -p "); // followed by the commit's hash will present the info specified above.....

	/*  to understand all of this is to understand the the structure of git object types....
	  ....so far we have "commit" objects ...that hold "tree" objects....holding "blob" objects...
	  "blob" objects contain various versions of existing "visible" files in the "visible" directory ...
	  ...which has an "invisible" .git repository structure within......
	  ....each "invisible" git-object has a 40-digit SHA-1 hash identifier....    */ 

	 printf("$ git log --stat fa49b077972391ad58037050f2a75f74e3671e92");
	 /*  this command is run on the most recent commit object to display Git history....   */












}