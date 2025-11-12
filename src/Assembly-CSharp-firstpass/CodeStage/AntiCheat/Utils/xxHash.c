
/* UInt32 CalculateHash(Byte[], Int32, UInt32) */

uint32_t Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Utils::xxHash::xxHash_CalculateHash
                   (Byte__Array *buf,int32_t len,uint32_t seed,MethodInfo *method)

{
  uVar1 = 0;
  uVar2 = uVar1;
  if (len < 0x10) {
    iVar3 = seed + 0x165667b1;
  }
  else {
    uVar4 = seed + 0x24234428;
    uVar5 = seed + 0x85ebca77;
    uVar6 = seed + 0x61c8864f;
    if (buf == (Byte__Array *)0x0) {
code_?:
      FUN_?();
      pcVar7 = (code *)swi(3);
      uVar8 = (*pcVar7)();
      return uVar8;
    }
    do {
      uVar9 = (uint)uVar2;
      if (((((uint)buf->max_length <= uVar9) || ((uint)buf->max_length <= uVar9 + 1)) ||
          ((uint)buf->max_length <= uVar9 + 2)) || ((uint)buf->max_length <= uVar9 + 3))
      goto code_?;
      uVar4 = uVar4 + CONCAT31(CONCAT21(CONCAT11(buf->vector[(longlong)(int)(uVar9 + 2) + 1],
                                                   buf->vector[(int)(uVar9 + 2)]),
                                          buf->vector[uVar1 + 1]),buf->vector[uVar1]) * -0x7a143589;
      uVar10 = uVar4 >> 0x13 | uVar4 * 0x2000;
      uVar4 = uVar10 * -0x61c8864f;
      if ((((uint)buf->max_length <= uVar9 + 4) || ((uint)buf->max_length <= uVar9 + 5)) ||
         (((uint)buf->max_length <= uVar9 + 6 || ((uint)buf->max_length <= uVar9 + 7))))
      goto code_?;
      uVar5 = uVar5 + CONCAT31(CONCAT21(CONCAT11(buf->vector[(longlong)(int)(uVar9 + 6) + 1],
                                                   buf->vector[(int)(uVar9 + 6)]),
                                          buf->vector[(longlong)(int)(uVar9 + 4) + 1]),
                                 buf->vector[(int)(uVar9 + 4)]) * -0x7a143589;
      uVar11 = uVar5 >> 0x13 | uVar5 * 0x2000;
      uVar5 = uVar11 * -0x61c8864f;
      if ((uint)buf->max_length <= uVar9 + 8) goto code_?;
      if ((((uint)buf->max_length <= uVar9 + 9) || ((uint)buf->max_length <= uVar9 + 10)) ||
         ((uint)buf->max_length <= uVar9 + 0xb)) goto code_?;
      uVar12 = seed + CONCAT31(CONCAT21(CONCAT11(buf->vector[uVar1 + 0xb],buf->vector[uVar1 + 10]),
                                        buf->vector[(longlong)(int)(uVar9 + 8) + 1]),
                               buf->vector[(int)(uVar9 + 8)]) * -0x7a143589;
      uVar12 = uVar12 >> 0x13 | uVar12 * 0x2000;
      seed = uVar12 * -0x61c8864f;
      if ((((uint)buf->max_length <= uVar9 + 0xc) || ((uint)buf->max_length <= uVar9 + 0xd)) ||
         ((uint)buf->max_length <= uVar9 + 0xe)) goto code_?;
      uVar1 = uVar1 + 0x10;
      if ((uint)buf->max_length <= uVar9 + 0xf) goto code_?;
      uVar2 = (ulonglong)(uVar9 + 0x10);
      uVar6 = uVar6 + CONCAT31(CONCAT21(CONCAT11(buf->vector[(int)(uVar9 + 0xf)],
                                                   buf->vector[(int)(uVar9 + 0xe)]),
                                          buf->vector[(longlong)(int)(uVar9 + 0xc) + 1]),
                                 buf->vector[(int)(uVar9 + 0xc)]) * -0x7a143589;
      uVar9 = uVar6 >> 0x13 | uVar6 * 0x2000;
      uVar6 = uVar9 * -0x61c8864f;
    } while ((longlong)uVar1 <= (longlong)len + -0x10);
    iVar3 = (uVar6 >> 0xe | uVar9 * -0x193c0000) + (seed >> 0x14 | uVar12 * 0x779b1000) +
            (uVar5 >> 0x19 | uVar11 * 0x1bbcd880) + (uVar4 >> 0x1f | uVar10 * 0x3c6ef362);
  }
  uVar1 = (ulonglong)(uint)(iVar3 + len);
  iVar3 = (int)uVar2;
  if (iVar3 <= len + -4) {
    uVar6 = iVar3 + 2;
    lVar13 = (longlong)iVar3;
    do {
      if (buf == (Byte__Array *)0x0) goto code_?;
      if ((((uint)buf->max_length <= (uint)uVar2) || ((uint)buf->max_length <= uVar6 - 1)) ||
         (lVar14 = (longlong)(int)uVar6, (uint)buf->max_length <= uVar6))
      goto code_?;
      uVar5 = uVar6 + 1;
      uVar4 = (uint)uVar2 + 4;
      uVar2 = (ulonglong)uVar4;
      uVar6 = uVar6 + 4;
      if ((uint)buf->max_length <= uVar5) goto code_?;
      uVar5 = (int)uVar1 +
               CONCAT31(CONCAT21(CONCAT11(buf->vector[lVar13 + 3],buf->vector[lVar14]),
                                 buf->vector[lVar13 + 1]),buf->vector[lVar13]) * -0x3d4d51c3;
      uVar1 = (ulonglong)((uVar5 >> 0xf | uVar5 * 0x20000) * 0x27d4eb2f);
      lVar13 = lVar13 + 4;
    } while ((int)uVar4 <= len + -4);
  }
  if ((int)uVar2 < len) {
    lVar13 = (longlong)(int)uVar2;
    do {
      if (buf == (Byte__Array *)0x0) goto code_?;
      if ((uint)buf->max_length <= (uint)uVar2) {
code_?:
        FUN_?();
        pcVar7 = (code *)swi(3);
        uVar8 = (*pcVar7)();
        return uVar8;
      }
      puVar15 = buf->vector + lVar13;
      uVar2 = (ulonglong)((uint)uVar2 + 1);
      lVar13 = lVar13 + 1;
      uVar6 = (uint)*puVar15 * 0x165667b1 + (int)uVar1;
      uVar1 = (ulonglong)((uVar6 >> 0x15 | uVar6 * 0x800) * -0x61c8864f);
    } while (lVar13 < len);
  }
  uVar6 = ((uint)(uVar1 >> 0xf) ^ (uint)uVar1) * -0x7a143589;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51c3;
  return uVar6 >> 0x10 ^ uVar6;
}

