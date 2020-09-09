{
  "targets": [
    {
      "target_name": "customModule",
      "sources": [ "customModule.cc" ],
	  "include_dirs" : ["<!(node -e \"require('nan')\")"]
    }
  ]
}