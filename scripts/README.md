# Atmel SAM/SAM0 scripts

This folder contains `hal_atmel` scripts.

## Dependencies

Scripts require Python 3.7+ and the Python dependencies listed in
`requirements.txt`. They can be installed by running:

```
pip install -r scripts/requirements.txt
```

## Lint

Scripts should be formatted using `black` and linted using `flake8`.

Such development tools can be installed using:

```
pip install -r scripts/requirements-dev.txt
```

## Tests

Before running tests make sure to have testing dependencies installed. They
can be installed by running:

```
pip install -r scripts/requirements-test.txt
```

Tests can be executed by running:

```
pytest
```
