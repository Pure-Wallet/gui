#GUI
<h1>GUI</h1>

This gui for Pure Wallet will be written in Qt using Qt Creator. I'm an absolutebeginner in Qt, so if you're looking for a place to contribute without much coding knowledge, this is it.

Plan: 
<h2>Full Menu options:</h2>
We'd like the Menu to support all functionality of the wallet.
From the list of options below, We should add each as a MenuAction in the menu. Check out the existing menu, it should be simple copy and paste.

Including:
<ul>
<li>Keys>
	<ul>
	<li>Key Generation</li>
	<li>Listing PubKeys</li>
	<li>Check Balance</li>
	<li>Sweep PrivKey</li>
	</ul>
<li>Cryptography</li>
	<ul>
	<li>Sign Message</li>
	<li>Verify Message</li>
	<li>Sign Transaction</li>
	<li>Encrypt Message<li>
	<li>Decrypt Message</li>
	</ul>
<li>Wallet</li>
	<ul>
	<li>Import/Export Wallet</li>
	<li>Check Balance</li>
	<li>Get Xpubs</li>
	<li>Encrypt</li>
	</ul>
<li>Security</li>
	<ul>
	<li>Data Directory</li>
	<li>Encryption...</li>
	<li>Password</li>
	</ul>
</ul>

<h2>The App</h2>
Up for discussion. I was thinking big, simple buttons for the main functions we expect: Paper Wallet Generation (Simple KeyPair), Load/Generate HD Wallet, Send&Receive, and History. Maybe Block Explorer too? 
