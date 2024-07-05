# Slides for the gem5 bootcamp

In this directory, you will find the slides that we use during the gem5 bootcamp and gem5 tutorials.
They are written using [Marp](https://marp.app/), a Markdown-based slide design tool.

We chose to use Markdown for slides to make it easier for us to update the code in the slides as gem5 changes and for the participants to copy-paste code.

To use Marp, we encourage you to install the [VS Code extension](https://marketplace.visualstudio.com/items?itemName=marp-team.marp-vscode), which should be automatically installed if you're using the codespaces devcontainer.
With the VS Code extension installed, when you open one of the slide decks (e.g., [Getting started](02-Using gem5/00-getting-started.md)), you can click on the preview button in the upper right to view the slides.
Also, you can use the Marp extension to save the slides as HTML or PDF.

For using the Marp command line, you can use the following command (pass in the file to convert).
Note: The local paths for the css file and the markdown don't work great. YMMV.

```sh
docker run --rm -v $PWD:/home/marp/app/ -e MARP_USER=$UID:$GID -e LANG=$LANG marpteam/marp-cli <markdown file>
```
