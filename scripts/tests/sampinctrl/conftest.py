# Copyright (c) 2021 Teslabs Engineering S.L.
# Copyright (c) 2022 Gerson Fernando Budke
# SPDX-License-Identifier: Apache-2.0

from pathlib import Path
import sys

import pytest


_SCRIPT_DIR = Path(__file__).absolute().parent
sys.path.insert(0, str(_SCRIPT_DIR.parents[1]))


@pytest.fixture()
def data():
    """Pytest fixture to load test data files"""
    return _SCRIPT_DIR / "data"
