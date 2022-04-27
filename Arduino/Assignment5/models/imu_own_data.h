#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class Classifier {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        uint8_t votes[2] = { 0 };
                        // tree #1
                        if (x[660] <= 0.68299999833107) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #2
                        if (x[516] <= 0.7145000100135803) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #3
                        if (x[252] <= 0.7430000007152557) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #4
                        if (x[528] <= 0.6930000185966492) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #5
                        if (x[480] <= 0.6910000145435333) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #6
                        if (x[216] <= 0.7484999895095825) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #7
                        if (x[240] <= 0.7804999947547913) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #8
                        if (x[156] <= 0.5815000087022781) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[495] <= -152.43500137329102) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #9
                        if (x[684] <= 0.7195000052452087) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #10
                        if (x[192] <= 0.7484999895095825) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #11
                        if (x[342] <= 0.7434999942779541) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #12
                        if (x[306] <= 0.6884999871253967) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[404] <= 0.1339999921619892) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #13
                        if (x[660] <= 0.68299999833107) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #14
                        if (x[30] <= 0.43050000071525574) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #15
                        if (x[258] <= 0.7520000040531158) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #16
                        if (x[456] <= 0.7000000178813934) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #17
                        if (x[528] <= 0.6875) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #18
                        if (x[576] <= 0.7169999778270721) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #19
                        if (x[240] <= 0.7685000002384186) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #20
                        if (x[222] <= 0.800000011920929) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #21
                        if (x[522] <= 0.5755000114440918) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #22
                        if (x[468] <= 0.6794999837875366) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #23
                        if (x[36] <= 0.3349999897181988) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #24
                        if (x[240] <= 0.7804999947547913) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #25
                        if (x[30] <= 0.583500012755394) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #26
                        if (x[522] <= 0.7150000035762787) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #27
                        if (x[156] <= 0.583500012755394) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #28
                        if (x[90] <= 0.5690000206232071) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[605] <= -90.11800122261047) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #29
                        if (x[120] <= 0.7164999842643738) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #30
                        if (x[324] <= 0.7229999899864197) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #31
                        if (x[144] <= 0.7224999964237213) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[549] <= 93.9634997844696) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #32
                        if (x[696] <= 0.7159999907016754) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #33
                        if (x[510] <= 0.5865000039339066) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #34
                        if (x[492] <= 0.6825000047683716) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #35
                        if (x[180] <= 0.6894999742507935) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[116] <= 0.1445000022649765) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #36
                        if (x[408] <= 0.7949999868869781) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #37
                        if (x[618] <= 0.7100000083446503) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #38
                        if (x[516] <= 0.7195000052452087) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #39
                        if (x[486] <= 0.6809999942779541) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #40
                        if (x[264] <= 0.7450000047683716) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #41
                        if (x[474] <= 0.6865000128746033) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #42
                        if (x[690] <= 0.7125000059604645) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #43
                        if (x[312] <= 0.7339999973773956) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #44
                        if (x[522] <= 0.723499983549118) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #45
                        if (x[288] <= 0.7240000069141388) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #46
                        if (x[384] <= 0.7795000076293945) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #47
                        if (x[678] <= 0.7089999914169312) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #48
                        if (x[246] <= 0.7625000178813934) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #49
                        if (x[222] <= 0.7775000035762787) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #50
                        if (x[438] <= 0.7789999842643738) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #51
                        if (x[306] <= 0.734499990940094) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[258] <= 0.5609999895095825) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #52
                        if (x[606] <= 0.6974999904632568) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #53
                        if (x[396] <= 0.7714999914169312) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #54
                        if (x[42] <= 0.36750001460313797) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[665] <= -47.45499837398529) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #55
                        if (x[528] <= 0.6875) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #56
                        if (x[654] <= 0.6660000085830688) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #57
                        if (x[0] <= 0.9260000288486481) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #58
                        if (x[558] <= 0.6839999854564667) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #59
                        if (x[606] <= 0.7229999899864197) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #60
                        if (x[450] <= 0.726500004529953) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #61
                        if (x[648] <= 0.7095000147819519) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #62
                        if (x[198] <= 0.7384999990463257) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #63
                        if (x[132] <= 0.7195000052452087) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[576] <= 0.9489999711513519) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #64
                        if (x[396] <= 0.801499992609024) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #65
                        if (x[528] <= 0.6789999902248383) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #66
                        if (x[162] <= 0.6759999990463257) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #67
                        if (x[522] <= 0.723499983549118) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #68
                        if (x[474] <= 0.6550000011920929) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #69
                        if (x[282] <= 0.69200000166893) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #70
                        if (x[654] <= 0.6660000085830688) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #71
                        if (x[294] <= 0.734499990940094) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #72
                        if (x[444] <= 0.7555000185966492) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #73
                        if (x[612] <= 0.7115000188350677) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #74
                        if (x[450] <= 0.7115000188350677) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #75
                        if (x[642] <= 0.6365000009536743) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #76
                        if (x[48] <= 0.5024999976158142) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #77
                        if (x[246] <= 0.7875000238418579) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #78
                        if (x[462] <= 0.715499997138977) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #79
                        if (x[636] <= 0.7089999914169312) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #80
                        if (x[438] <= 0.6815000176429749) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #81
                        if (x[192] <= 0.7625000178813934) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #82
                        if (x[192] <= 0.7484999895095825) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #83
                        if (x[708] <= 0.7014999985694885) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[341] <= -73.36450128257275) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #84
                        if (x[354] <= 0.7609999775886536) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #85
                        if (x[234] <= 0.75) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #86
                        if (x[312] <= 0.6700000166893005) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #87
                        if (x[270] <= 0.5995000153779984) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #88
                        if (x[72] <= 0.49650000035762787) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #89
                        if (x[522] <= 0.68299999833107) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #90
                        if (x[486] <= 0.6809999942779541) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #91
                        if (x[558] <= 0.6135000139474869) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #92
                        if (x[618] <= 0.6669999957084656) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #93
                        if (x[264] <= 0.7450000047683716) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #94
                        if (x[678] <= 0.6834999918937683) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #95
                        if (x[162] <= 0.6749999821186066) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[196] <= -104.85849928855896) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #96
                        if (x[612] <= 0.7175000011920929) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #97
                        if (x[672] <= 0.6785000264644623) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #98
                        if (x[366] <= 0.74549999833107) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[0] <= 0.9260000288486481) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #99
                        if (x[630] <= 0.4789999946951866) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #100
                        if (x[462] <= 0.6739999949932098) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 2; i++) {
                            if (votes[i] > maxVotes) {
                                classIdx = i;
                                maxVotes = votes[i];
                            }
                        }

                        return classIdx;
                    }

                protected:
                };
            }
        }
    }