
/* UInt32 CalculateHash(Byte[], Int32, UInt32) */

uint32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Utils::xxHash::xxHash_CalculateHash
                   (Byte__Array *buf,int32_t len,uint32_t seed,MethodInfo *method)

{
  uVar1 = 0;
  if (len < 0x10) {
    iVar2 = seed + 0x165667b1;
  }
  else {
    uStack_3 = seed;
    iStack_4 = seed + 0x24234428;
    uVar5 = seed + 0x61c8864f;
    uStack_6 = seed + 0x85ebca77;
    uVar7 = uVar1;
    do {
      if (buf == (Byte__Array *)0x0) goto code_?;
      uVar8 = buf->max_length;
      if ((((uVar8 <= uVar7) || (uVar8 <= uVar7 + 1)) || (uVar8 <= uVar7 + 2)) ||
         (uVar8 <= uVar7 + 3)) goto code_?;
      uVar1 = iStack_4 +
              CONCAT31(CONCAT21(CONCAT11(buf->vector[uVar7 + 3],buf->vector[uVar7 + 2]),
                                buf->vector[uVar7 + 1]),buf->vector[uVar7]) * -0x7a143589;
      uVar9 = uVar1 * 0x2000 | uVar1 >> 0x13;
      iStack_4 = uVar9 * -0x61c8864f;
      if (((uVar8 <= uVar7 + 4) || (uVar8 <= uVar7 + 5)) ||
         ((uVar8 <= uVar7 + 6 || (uVar8 <= uVar7 + 7)))) goto code_?;
      uStack_6 = uStack_6 +
                 CONCAT31(CONCAT21(CONCAT11(buf->vector[uVar7 + 7],buf->vector[uVar7 + 6]),
                                   buf->vector[uVar7 + 5]),buf->vector[uVar7 + 4]) * -0x7a143589;
      uVar10 = uStack_6 * 0x2000 | uStack_6 >> 0x13;
      uStack_6 = uVar10 * -0x61c8864f;
      if (((uVar8 <= uVar7 + 8) || (uVar8 <= uVar7 + 9)) ||
         ((uVar8 <= uVar7 + 10 || (uVar8 <= uVar7 + 0xb)))) goto code_?;
      uStack_3 = uStack_3 +
                 CONCAT31(CONCAT21(CONCAT11(buf->vector[uVar7 + 0xb],buf->vector[uVar7 + 10]),
                                   buf->vector[uVar7 + 9]),buf->vector[uVar7 + 8]) * -0x7a143589;
      uVar11 = uStack_3 * 0x2000 | uStack_3 >> 0x13;
      uStack_3 = uVar11 * -0x61c8864f;
      if ((((uVar8 <= uVar7 + 0xc) || (uVar8 <= uVar7 + 0xd)) || (uVar8 <= uVar7 + 0xe)) ||
         (uVar1 = uVar7 + 0x10, uVar8 <= uVar7 + 0xf)) goto code_?;
      uVar5 = uVar5 + CONCAT31(CONCAT21(CONCAT11(buf->vector[uVar7 + 0xf],buf->vector[uVar7 + 0xe]
                                                  ),buf->vector[uVar7 + 0xd]),
                                 buf->vector[uVar7 + 0xc]) * -0x7a143589;
      uVar8 = uVar5 * 0x2000 | uVar5 >> 0x13;
      uVar5 = uVar8 * -0x61c8864f;
      uVar7 = uVar1;
    } while ((int)uVar1 <= len + -0x10);
    iVar2 = (uVar5 >> 0xe | uVar8 * -0x193c0000) + (uVar11 * 0x779b1000 | uStack_3 >> 0x14) +
            (uVar10 * 0x1bbcd880 | uStack_6 >> 0x19) + (uVar9 * 0x3c6ef362 | (uint)(iStack_4 < 0));
  }
  uVar5 = iVar2 + len;
  uVar7 = uVar1;
  if ((int)uVar1 <= len + -4) {
    do {
      if (buf == (Byte__Array *)0x0) goto code_?;
      uVar8 = buf->max_length;
      if (((uVar8 <= uVar7) || (uVar8 <= uVar7 + 1)) ||
         ((uVar8 <= uVar7 + 2 || (uVar1 = uVar7 + 4, uVar8 <= uVar7 + 3)))) goto code_?;
      uVar5 = uVar5 + CONCAT31(CONCAT21(CONCAT11(buf->vector[uVar7 + 3],buf->vector[uVar7 + 2]),
                                          buf->vector[uVar7 + 1]),buf->vector[uVar7]) * -0x3d4d51c3;
      uVar5 = (uVar5 >> 0xf | uVar5 * 0x20000) * 0x27d4eb2f;
      uVar7 = uVar1;
    } while ((int)uVar1 <= len + -4);
  }
  while( true ) {
    if (len <= (int)uVar1) {
      uVar1 = (uVar5 >> 0xf ^ uVar5) * -0x7a143589;
      uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51c3;
      return uVar1 >> 0x10 ^ uVar1;
    }
    if (buf == (Byte__Array *)0x0) break;
    if (buf->max_length <= uVar1) goto code_?;
    puVar12 = buf->vector + uVar1;
    uVar1 = uVar1 + 1;
    uVar5 = (uint)*puVar12 * 0x165667b1 + uVar5;
    uVar5 = (uVar5 * 0x800 | uVar5 >> 0x15) * -0x61c8864f;
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  uVar14 = (*pcVar13)();
  return uVar14;
}

