
/* Byte ColorFloatToByte(Single) */

uint8_t Assembly-CSharp.dll::TextureHash::TextureHash_ColorFloatToByte
                  (float colorFloat,MethodInfo *method)

{
  return (uint8_t)(int)(colorFloat * _UNK_?);
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Byte[] ColorToByteArray(Color) */

Byte__Array *
Assembly-CSharp.dll::TextureHash::TextureHash_ColorToByteArray(Color color,MethodInfo *method)

{
  pTVar1 = (Texture2D *)&stack0xfffffffc;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pBVar2 = (Byte__Array *)func_?();
  IStack_3.m_value = 0;
  while( true ) {
    switch(IStack_3.m_value) {
    case 0:
      fVar4 = color.r;
      break;
    case 1:
      fVar4 = color.g;
      break;
    case 2:
      fVar4 = color.b;
      break;
    case 3:
      fVar4 = color.a;
      break;
    default:
      pSVar5 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_3,(MethodInfo *)0x0);
      pSVar6 = (String *)func_?();
      pSVar7 = (String *)func_?();
      unaff_ESI = mscorlib.dll::System::String::String_Concat_4
                            (pSVar7,pSVar5,pSVar6,(MethodInfo *)0x0);
      func_?();
      unaff_EDI = (IndexOutOfRangeException *)func_?();
      mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
                (unaff_EDI,unaff_ESI,(MethodInfo *)0x0);
      func_?();
      bVar8 = (undefined1 *)0xffffffc7 < &stack0xffffffdc;
      func_?();
      goto code_?;
    }
    bVar8 = 0;
    if (pBVar2 == (Byte__Array *)0x0) break;
    bVar8 = (uint)IStack_3.m_value < pBVar2->max_length;
    if (!(bool)bVar8) {
code_?:
      func_?();
      break;
    }
    pBVar2->vector[IStack_3.m_value] = (uint8_t)(int)(fVar4 * _UNK_?);
    IStack_3.m_value = IStack_3.m_value + 1;
    if (3 < IStack_3.m_value) {
      return pBVar2;
    }
  }
  pBVar2 = (Byte__Array *)func_?();
  Var2 = to_bcd(extraout_ST0);
  *(unkbyte10 *)(extraout_ECX + 0x23) = Var2;
  bVar9 = (byte)((uint)pBVar2 >> 8);
  bVar10 = extraout_DH + bVar9;
  bVar11 = CARRY1(extraout_DH,bVar9) || CARRY1(bVar10,bVar8);
  if (SCARRY1(extraout_DH,bVar9) == SCARRY1(bVar10,bVar8)) {
    func_?();
    uRam_? = 1;
    IStack_3.m_value = CONCAT31((int3)((uint)unaff_EBX >> 8),0x11);
  }
  else {
    bVar12 = (byte)((uint)extraout_ECX >> 8);
    bVar13 = bVar12 * '\x02';
    bVar14 = CARRY1(bVar12,bVar12) || CARRY1(bVar13,bVar11);
    if (SCARRY1(bVar12,bVar12) == SCARRY1(bVar13,bVar11)) {
      return pBVar2;
    }
    cVar15 = bVar9 + bVar10 + bVar8;
    if (SCARRY1(bVar9,bVar10 + bVar8) != SCARRY1(cVar15,bVar14)) {
      pcVar16 = (code *)swi(3);
      pBVar2 = (Byte__Array *)(*pcVar16)();
      return pBVar2;
    }
    uVar17 = *(undefined6 *)
             (&unaff_ESI->klass +
             CONCAT22((short)((uint)pBVar2 >> 0x10),CONCAT11(cVar15 + bVar14,(char)pBVar2)) * 2);
    *(int *)(unaff_EBX + 0xf530c45) =
         *(int *)(unaff_EBX + 0xf530c45) +
         CONCAT22((short)((uint)extraout_ECX >> 0x10),CONCAT11(bVar13 + bVar11,(char)extraout_ECX));
    pbVar18 = (byte *)((int)&unaff_ESI[5].monitor + 3);
    *pbVar18 = *pbVar18 << 1 |
               (IndexOutOfRangeException__Class *)(&uRam_? + (int)uVar17) < unaff_EDI->klass;
  }
  pBVar2 = (Byte__Array *)func_?();
  uVar19 = 0;
  fVar4 = color.r;
  if (color.r == 0.0) {
code_?:
    func_?();
code_?:
    pSVar5 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_3,(MethodInfo *)0x0);
    pSVar6 = (String *)func_?();
    pSVar7 = (String *)func_?();
    pBVar2 = (Byte__Array *)
              mscorlib.dll::System::String::String_Concat_4
                        (pSVar7,pSVar5,pSVar6,(MethodInfo *)0x0);
    func_?();
    this = (IndexOutOfRangeException *)func_?();
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
              (this,(String *)pBVar2,(MethodInfo *)0x0);
    func_?();
    bVar8 = (undefined1 *)0xffffffc7 < &stack0xffffffdc;
    func_?();
  }
  else {
    while( true ) {
      if (*(int *)((int)color.r + 0xc) <= (int)uVar19) {
        return pBVar2;
      }
      bVar8 = uVar19 < *(uint *)((int)color.r + 0xc);
      if (!(bool)bVar8) break;
      pBVar20 = *(Byte__Array__Class **)((int)fVar4 + 0x18);
      pBVar21 = *(Byte__Array__Class **)((int)fVar4 + 0x1c);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pBVar22 = (Byte__Array__Class *)0x4;
      pBVar23 = TypeInfo__System__Byte;
      iVar24 = func_?();
      uVar25 = 0;
      do {
        IStack_3.m_value = uVar25;
        switch(IStack_3.m_value) {
        case 0:
          pBVar26 = pBVar23;
          break;
        case 1:
          pBVar26 = pBVar22;
          break;
        case 2:
          pBVar26 = pBVar20;
          break;
        case 3:
          pBVar26 = pBVar21;
          break;
        default:
          goto code_?;
        }
        if (iVar24 == 0) goto code_?;
        bVar8 = (uint)IStack_3.m_value < *(uint *)(iVar24 + 0xc);
        if (!(bool)bVar8) goto code_?;
        *(char *)(IStack_3.m_value + 0x10U + iVar24) = (char)(int)((float)pBVar26 * _UNK_?);
        uVar25 = IStack_3.m_value + 1U;
      } while ((int)(IStack_3.m_value + 1U) < 4);
      uVar25 = 0;
      do {
        bVar8 = uVar25 < *(uint *)(iVar24 + 0xc);
        if (!(bool)bVar8) goto code_?;
        if (pBVar2 == (Byte__Array *)0x0) goto code_?;
        bVar8 = uVar25 + uVar19 * 4 < pBVar2->max_length;
        if (!(bool)bVar8) goto code_?;
        pBVar2->vector[uVar25 + uVar19 * 4] = *(uint8_t *)(iVar24 + 0x10 + uVar25);
        uVar25 = uVar25 + 1;
      } while ((int)uVar25 < 4);
      uVar19 = uVar19 + 1;
      fVar4 = (float)((int)fVar4 + 0x10);
    }
  }
code_?:
  pbVar18 = (byte *)func_?();
  if (!(bool)bVar8) {
    bVar8 = CARRY1(*pbVar18,(byte)pbVar18);
    *pbVar18 = *pbVar18 + (byte)pbVar18;
  }
  pbVar27 = (byte *)(uVar19 + 0x23 + (int)pBVar2 * 2);
  bVar10 = *pbVar27;
  bVar9 = *pbVar27 + (byte)uVar19;
  *pbVar27 = bVar9 + bVar8;
  *(char *)(uVar19 + 0x73) =
       *(char *)(uVar19 + 0x73) + (char)((uint)pbVar18 >> 8) +
       (CARRY1(bVar10,(byte)uVar19) || CARRY1(bVar9,bVar8));
  uVar28 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xffffffd8;
  pTVar29 = (Texture2D *)&stack0xfffffffc;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Security__Cryptography__SHA1CryptoServiceProvider);
    func_?(&TypeInfo__UnityEngine__Texture2D);
    cRam_? = '\x01';
    pTVar29 = pTVar1;
  }
  if (pTVar29 != (Texture2D *)0x0) {
    pTVar1 = (Texture2D *)0x0;
    if (pTVar29->klass == TypeInfo__UnityEngine__Texture2D) {
      pTVar1 = pTVar29;
    }
    if (pTVar1 == (Texture2D *)0x0) {
      func_?(pTVar29,TypeInfo__UnityEngine__Texture2D);
    }
    else {
      pTVar1 = (Texture2D *)0x0;
      if (pTVar29->klass == TypeInfo__UnityEngine__Texture2D) {
        pTVar1 = pTVar29;
      }
      colors = UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_GetPixels_1
                         (pTVar1,0,0,10,10,(MethodInfo *)0x0);
      pBVar2 = TextureHash_ColorsToByteArray(colors,10,(MethodInfo *)0x0);
      this_00 = (SHA1CryptoServiceProvider *)
                func_?(TypeInfo__System__Security__Cryptography__SHA1CryptoServiceProvider)
      ;
      mscorlib.dll::System::Security::Cryptography::SHA1CryptoServiceProvider::
      SHA1CryptoServiceProvider__ctor(this_00,(MethodInfo *)0x0);
      if (this_00 != (SHA1CryptoServiceProvider *)0x0) {
        pBVar2 = mscorlib.dll::System::Security::Cryptography::HashAlgorithm::
                  HashAlgorithm_ComputeHash((HashAlgorithm *)this_00,pBVar2,(MethodInfo *)0x0);
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pBVar2 = (Byte__Array *)
                  mscorlib.dll::System::Convert::Convert_ToBase64String(pBVar2,(MethodInfo *)0x0);
        if (this_00 == (SHA1CryptoServiceProvider *)0x0) {
          *unaff_FS_OFFSET = uVar28;
          return pBVar2;
        }
        func_?();
        *unaff_FS_OFFSET = uVar28;
        return pBVar2;
      }
    }
  }
  uVar28 = func_?();
  func_?(uVar28);
  pcVar16 = (code *)swi(3);
  pBVar2 = (Byte__Array *)(*pcVar16)();
  return pBVar2;
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Byte[] ColorsToByteArray(Color[], Int32) */

Byte__Array *
Assembly-CSharp.dll::TextureHash::TextureHash_ColorsToByteArray
          (Color__Array *colors,int32_t sampleSize,MethodInfo *method)

{
  pTVar1 = (Texture2D *)&stack0xfffffffc;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pBVar2 = (Byte__Array *)func_?();
  uVar3 = 0;
  pCVar4 = colors;
  if (colors == (Color__Array *)0x0) {
code_?:
    func_?();
code_?:
    str1 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_5,(MethodInfo *)0x0);
    str2 = (String *)func_?();
    str0 = (String *)func_?();
    pBVar2 = (Byte__Array *)
             mscorlib.dll::System::String::String_Concat_4(str0,str1,str2,(MethodInfo *)0x0);
    func_?();
    pIVar6 = (IndexOutOfRangeException *)func_?();
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
              (pIVar6,(String *)pBVar2,(MethodInfo *)0x0);
    func_?();
    bVar7 = (undefined1 *)0xffffffc7 < &stack0xffffffc8;
    IStack_5.m_value = (int32_t)pIVar6;
    func_?();
  }
  else {
    while( true ) {
      if ((int)colors->max_length <= (int)uVar3) {
        return pBVar2;
      }
      bVar7 = uVar3 < colors->max_length;
      if (!(bool)bVar7) break;
      fVar8 = pCVar4->vector[0].r;
      fVar9 = pCVar4->vector[0].g;
      fVar10 = pCVar4->vector[0].b;
      fVar11 = pCVar4->vector[0].a;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      iVar12 = func_?();
      pIVar6 = (IndexOutOfRangeException *)0x0;
      do {
        IStack_5.m_value = (int32_t)pIVar6;
        switch(IStack_5.m_value) {
        case 0:
          fVar13 = fVar8;
          break;
        case 1:
          fVar13 = fVar9;
          break;
        case 2:
          fVar13 = fVar10;
          break;
        case 3:
          fVar13 = fVar11;
          break;
        default:
          goto code_?;
        }
        if (iVar12 == 0) goto code_?;
        bVar7 = (uint)IStack_5.m_value < *(IndexOutOfRangeException **)(iVar12 + 0xc);
        if (!(bool)bVar7) goto code_?;
        *(char *)((int)&(((IndexOutOfRangeException *)IStack_5.m_value)->fields)._._._data + iVar12)
             = (char)(int)(fVar13 * _UNK_?);
        pIVar6 = (IndexOutOfRangeException *)
                  ((int)&((IndexOutOfRangeException *)IStack_5.m_value)->klass + 1);
      } while ((int)pIVar6 < 4);
      uVar14 = 0;
      do {
        bVar7 = uVar14 < *(uint *)(iVar12 + 0xc);
        if (!(bool)bVar7) goto code_?;
        if (pBVar2 == (Byte__Array *)0x0) goto code_?;
        bVar7 = uVar14 + uVar3 * 4 < pBVar2->max_length;
        if (!(bool)bVar7) goto code_?;
        pBVar2->vector[uVar14 + uVar3 * 4] = *(uint8_t *)(iVar12 + 0x10 + uVar14);
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < 4);
      uVar3 = uVar3 + 1;
      pCVar4 = (Color__Array *)pCVar4->vector;
    }
  }
code_?:
  pbVar15 = (byte *)func_?();
  if (!(bool)bVar7) {
    bVar7 = CARRY1(*pbVar15,(byte)pbVar15);
    *pbVar15 = *pbVar15 + (byte)pbVar15;
  }
  pbVar16 = (byte *)(uVar3 + 0x23 + (int)pBVar2 * 2);
  bVar17 = *pbVar16;
  bVar18 = *pbVar16 + (byte)uVar3;
  *pbVar16 = bVar18 + bVar7;
  *(char *)(uVar3 + 0x73) =
       *(char *)(uVar3 + 0x73) + (char)((uint)pbVar15 >> 8) +
       (CARRY1(bVar17,(byte)uVar3) || CARRY1(bVar18,bVar7));
  uVar19 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xffffffc4;
  pTVar20 = (Texture2D *)&stack0xfffffffc;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Security__Cryptography__SHA1CryptoServiceProvider);
    func_?(&TypeInfo__UnityEngine__Texture2D);
    cRam_? = '\x01';
    pTVar20 = pTVar1;
  }
  if (pTVar20 != (Texture2D *)0x0) {
    pTVar1 = (Texture2D *)0x0;
    if (pTVar20->klass == TypeInfo__UnityEngine__Texture2D) {
      pTVar1 = pTVar20;
    }
    if (pTVar1 == (Texture2D *)0x0) {
      func_?(pTVar20,TypeInfo__UnityEngine__Texture2D);
    }
    else {
      pTVar1 = (Texture2D *)0x0;
      if (pTVar20->klass == TypeInfo__UnityEngine__Texture2D) {
        pTVar1 = pTVar20;
      }
      pCVar4 = UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_GetPixels_1
                          (pTVar1,0,0,10,10,(MethodInfo *)0x0);
      pBVar2 = TextureHash_ColorsToByteArray(pCVar4,10,(MethodInfo *)0x0);
      this = (SHA1CryptoServiceProvider *)
             func_?(TypeInfo__System__Security__Cryptography__SHA1CryptoServiceProvider);
      mscorlib.dll::System::Security::Cryptography::SHA1CryptoServiceProvider::
      SHA1CryptoServiceProvider__ctor(this,(MethodInfo *)0x0);
      if (this != (SHA1CryptoServiceProvider *)0x0) {
        pBVar2 = mscorlib.dll::System::Security::Cryptography::HashAlgorithm::
                 HashAlgorithm_ComputeHash((HashAlgorithm *)this,pBVar2,(MethodInfo *)0x0);
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pBVar2 = (Byte__Array *)
                 mscorlib.dll::System::Convert::Convert_ToBase64String(pBVar2,(MethodInfo *)0x0);
        if (this == (SHA1CryptoServiceProvider *)0x0) {
          *unaff_FS_OFFSET = uVar19;
          return pBVar2;
        }
        func_?();
        *unaff_FS_OFFSET = uVar19;
        return pBVar2;
      }
    }
  }
  uVar19 = func_?();
  func_?(uVar19);
  pcVar21 = (code *)swi(3);
  pBVar2 = (Byte__Array *)(*pcVar21)();
  return pBVar2;
}


/* String CreateHashCode(Texture) */

String * Assembly-CSharp.dll::TextureHash::TextureHash_CreateHashCode
                   (Texture *texture,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Security__Cryptography__SHA1CryptoServiceProvider);
    func_?(&TypeInfo__UnityEngine__Texture2D);
    cRam_? = '\x01';
  }
  if (texture != (Texture *)0x0) {
    pTVar4 = (Texture *)0x0;
    if ((Texture2D__Class *)texture->klass == TypeInfo__UnityEngine__Texture2D) {
      pTVar4 = texture;
    }
    if (pTVar4 == (Texture *)0x0) {
      func_?(texture,TypeInfo__UnityEngine__Texture2D);
    }
    else {
      this = (Texture2D *)0x0;
      if ((Texture2D__Class *)texture->klass == TypeInfo__UnityEngine__Texture2D) {
        this = (Texture2D *)texture;
      }
      colors = UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_GetPixels_1
                         (this,0,0,10,10,(MethodInfo *)0x0);
      pBVar5 = TextureHash_ColorsToByteArray(colors,10,(MethodInfo *)0x0);
      this_00 = (SHA1CryptoServiceProvider *)
                func_?(TypeInfo__System__Security__Cryptography__SHA1CryptoServiceProvider)
      ;
      mscorlib.dll::System::Security::Cryptography::SHA1CryptoServiceProvider::
      SHA1CryptoServiceProvider__ctor(this_00,(MethodInfo *)0x0);
      uStack_1 = 1;
      if (this_00 != (SHA1CryptoServiceProvider *)0x0) {
        pBVar5 = mscorlib.dll::System::Security::Cryptography::HashAlgorithm::
                 HashAlgorithm_ComputeHash((HashAlgorithm *)this_00,pBVar5,(MethodInfo *)0x0);
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pSVar6 = mscorlib.dll::System::Convert::Convert_ToBase64String(pBVar5,(MethodInfo *)0x0);
        uStack_1 = 0xffffffff;
        if (this_00 != (SHA1CryptoServiceProvider *)0x0) {
          func_?();
          *unaff_FS_OFFSET = uStack_3;
          return pSVar6;
        }
        *unaff_FS_OFFSET = uStack_3;
        return pSVar6;
      }
    }
  }
  uVar7 = func_?();
  func_?(uVar7);
  pcVar8 = (code *)swi(3);
  pSVar6 = (String *)(*pcVar8)();
  return pSVar6;
}

