# Copyright (c) 2021 Teslabs Engineering S.L.
# Copyright (c) 2022 Gerson Fernando Budke
# SPDX-License-Identifier: Apache-2.0

from sampinctrl import main


def test_main(data, tmp_path):
    """Test that pinctrl headers are generated correctly."""

    main(data, tmp_path)

    FILES = (
        "samad-pinctrl.h",
        "samae-pinctrl.h",
        "samaf-pinctrl.h",
        "sambe-pinctrl.h",
        "sambf-pinctrl.h",
        "samcf-pinctrl.h",
    )

    for file in FILES:
        ref_file = data / file
        gen_file = tmp_path / file

        assert gen_file.exists()

        with open(ref_file) as ref, open(gen_file) as gen:
            assert ref.read() == gen.read()
