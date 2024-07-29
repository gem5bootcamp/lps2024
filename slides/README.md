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

## Style rules

- INSTALL THE [MARKDOWN LINT EXTENSION IN VS CODE](https://marketplace.visualstudio.com/items?itemName=DavidAnson.vscode-markdownlint) TO HELP WITH FORMATTING.
- Use `---` to separate slides.
- The first slide should be a "title" slide `<!-- _class: title -->`.
- The titles of all slides should be heading 2 `##`
- Code should be at most 65 characters wide.
- Do not use inline HTML unless *absolutely* necessary.
- Images should use markdown syntax `![alt text](path/to/image.png)`
- Always put links to the resources when referencing.

### Linking to materials and slides

When linking to materials, use the following format:

```md
[path relative to the root of the repo](path relative to the current file)
```

Use the relative path from the current file.

### Layouts

To use a different layout, you specify a class in the markdown file.

```md
<!-- _class: <layout> -->
```

Here are some of the available layouts:

- `title`: Title slide
- `two-col`: Two columns. To split the slide into two columns, use `###` (heading 3) to create a new column.
- `center-image`: Centers images horizontally
- `code-XX-percent`: Reduces font-size in code blocks. Valid values for `XX` are any of `[50, 60, 70, 80]`.
- `no-logo`: Removes the bottom logo.
- `logo-left`: Positions the bottom logo further to the left. Useful when using `bg right` images that cover the logo.

## Adding diagrams

To add diagrams, you can use the [draw.io VS Code extension](https://marketplace.visualstudio.com/items?itemName=hediet.vscode-drawio).
**You are strongly encouraged to use svg images for diagrams.**

After installing the extension, create a file with the name "\<name\>.drawio.png" and open it in VS Code.
Make sure you create a directory for each slide deck with its images.
You can then embed the image in the slide with the following markdown.

```md
![<description of the image>](<current slide name>/<name>.drawio.png)
```

If you need to have images on the left or right use `[bg left]` and `[bg right]` respectively.
In this case, you cannot have a description of the image, unfortunately.

## Improvement to make

- [x] Fix `[bg left]` `[bg right]` in the slides so that the gem5 logo at the bottom doesn't move
- [ ] Extend marp to support [asciinema](https://github.com/asciinema/asciinema-player/releases/tag/v3.8.0)
  - We could [embed an SVG](https://docs.asciinema.org/manual/server/embedding/#preview-image-link).
- [ ] Can we possibly make it so that there's a button to copy the code examples?

## To do for bootcamp 2024

- 01 Introduction
  - 00: Introduction to bootcamp: (Jason)
    - Slides :white_check_mark:
  - 01: Simulation background: (Jason)
    - Slides :white_check_mark:
  - 02: Getting started: (Jason)
    - Slides :white_check_mark:
    - Materials :white_check_mark:
  - 03: Python background: (Bobby)
    - Slides :white_check_mark:
    - Materials :white_check_mark:
- 02 Using gem5
  - 01: stdlib: (Bobby)
    - Slides :white_check_mark:
    - Materials
      - Need to be tested :exclamation:
  - 02: gem5 resources: (Harshil)
    - Slides :white_check_mark:
    - Materials :white_check_mark:
  - 03: running: (Zhantong)
    - Slides
      - (WIP) Mahyar to take editing pass :exclamation:
      - Zhantong did a quick editing pass :white_check_mark:
    - Materials :white_check_mark:
  - 04: cores: (Jason)
    - Slides :white_check_mark:
    - Materials :white_check_mark:
  - 05: cache hierarchy: (Jason) :
    - Slides :white_check_mark:
    - Materials :white_check_mark:
  - 06: memory: (William)
    - Slides :white_check_mark:
    - Materials :white_check_mark:
  - 07: Full system: Mostly done (Harshil)
    - Slides :white_checkmark:
    - Materials :white_check_mark:
  - 08: Acceleration: (Zhantong)
    - Slides :white_check_mark:
    - Materials :white_check_mark:
  - 09: Sampling: (Zhantong)
    - Slides: :white_check_mark:
    - Materials: :white_check_mark:
  - 10: Modeling power: (Jason) :heavy_exclamation_mark:
    - Slides
      - Need to be started :heavy_exclamation_mark:
    - Materials
      - Need to be written :heavy_exclamation_mark:
      - Someone needs to go through and test :exclamation:
  - 11: Multisim: Someone needs to go through (Bobby)
    - Slides :white_check_mark:
    - Materials :white_check_mark:
- 03 Developing
  - 01: Sim Objects:  (Mahyar)
    - Slides
      - Need to have extra slides added :exclamation:
      - Needs an editing pass :white_check_mark:
    - Materials :white_check_mark:
  - 02: Debugging:  (Mahyar)
    - Slides :white_check_mark:
    - Materials :white_check_mark:
  - 03: Events:  (Mahyar)
    - Slides ✅
    - Materials :white_check_mark:
  - 04: Ports: (Mahyar)
    - Slides
      - (WIP) Not done yet :heavy_exclamation_mark:
      - Needs editing pass :exclamation:
    - Materials
      - Being created :heavy_exclamation_mark:
      - Need to be tested :exclamation:
  - 05: Modeling cores: (Bobby)
    - Slides
      - Needs an editing pass :exclamation:
    - Materials :white_check_mark:
  - 06: Modeling cache coherence:
    - Slides
      - Needs an editing pass :exclamation:
    - Materials :white_check_mark:
  - 07: CHI: (Jason)
    - Slides :white_check_mark:
    - Materials :white_check_mark:
  - 08: Modeling networks (Jason)
    - Slides :white_check_mark:
    - Materials :white_check_mark:
  - 09: Extending gem5: (Zhantong) :exclamation:
    - Slides
      - Needs an editing pass :exclamation:
    - Materials
      - Someone needs to go through and test :exclamation:
- 04 GPU
- 05 Other simulators :heavy_exclamation_mark:
- 06 Contributing
  - 01: Contributing: (Bobby)
    - Slides :white_check_mark:
    - Materials :white_check_mark:
  - 02: Testing (Bobby)
    - Slides :white_check_mark:
    - Materials :white_check_mark:

## To print

```bash
find . -name "*.md" -exec pandoc {} -o {}.html --self-contained -c ../themes/print-style.css \;
```
