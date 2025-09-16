
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
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pBVar1 = (Byte__Array *)func_?();
  uVar2 = 0;
  while( true ) {
    switch(uVar2) {
    case 0:
      fVar3 = color.r;
      break;
    case 1:
      fVar3 = color.g;
      break;
    case 2:
      fVar3 = color.b;
      break;
    case 3:
      fVar3 = color.a;
      break;
    default:
      pSVar4 = mscorlib.dll::System::Int32::Int32_ToString
                         ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
      pSVar5 = (String *)func_?();
      pSVar6 = (String *)func_?();
      unaff_ESI = mscorlib.dll::System::String::String_Concat_4
                            (pSVar6,pSVar4,pSVar5,(MethodInfo *)0x0);
      func_?();
      unaff_EDI = (IndexOutOfRangeException *)func_?();
      mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
                (unaff_EDI,unaff_ESI,(MethodInfo *)0x0);
      func_?();
      bVar7 = (undefined1 *)0xffffffc7 < &stack0xffffffdc;
      func_?();
      goto code_?;
    }
    bVar7 = 0;
    if (pBVar1 == (Byte__Array *)0x0) break;
    bVar7 = uVar2 < pBVar1->max_length;
    if (!(bool)bVar7) {
code_?:
      func_?();
      break;
    }
    pBVar1->vector[uVar2] = (uint8_t)(int)(fVar3 * _UNK_?);
    uVar2 = uVar2 + 1;
    if (3 < (int)uVar2) {
      return pBVar1;
    }
  }
  uVar8 = func_?();
  piVar9 = (int *)((int)((ulonglong)uVar8 >> 0x20) + 0x23);
  *piVar9 = *piVar9 + 1;
  bVar10 = *(byte *)&unaff_ESI->klass;
  bVar11 = *(char *)&unaff_ESI->klass + (byte)uVar8;
  *(byte *)&unaff_ESI->klass = bVar11 + bVar7;
  if ((POPCOUNT(*(undefined1 *)&unaff_ESI->klass) & 1U) == 0) {
    cRam_? = cRam_? + (char)extraout_ECX +
                   (CARRY1(bVar10,(byte)uVar8) || CARRY1(bVar11,bVar7));
    if ((POPCOUNT(cRam_?) & 1U) == 0) {
      pcVar12 = (code *)swi(3);
      pBVar1 = (Byte__Array *)(*pcVar12)();
      return pBVar1;
    }
    uVar13 = *(undefined6 *)(&unaff_ESI->klass + (int)uVar8 * 2);
    *(int *)(unaff_EBX + 0xf530c45) = *(int *)(unaff_EBX + 0xf530c45) + extraout_ECX;
    pbVar14 = (byte *)((int)&unaff_ESI[5].monitor + 3);
    *pbVar14 = *pbVar14 << 1 |
              (IndexOutOfRangeException__Class *)(&uRam_? + (int)uVar13) < unaff_EDI->klass;
  }
  else {
    func_?();
    uRam_? = 1;
  }
  pBVar1 = (Byte__Array *)func_?();
  uVar2 = 0;
  fVar3 = color.r;
  if (color.r == 0.0) {
code_?:
    func_?();
code_?:
    pSVar4 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
    pSVar5 = (String *)func_?();
    pSVar6 = (String *)func_?();
    pSVar4 = mscorlib.dll::System::String::String_Concat_4(pSVar6,pSVar4,pSVar5,(MethodInfo *)0x0)
    ;
    func_?();
    this = (IndexOutOfRangeException *)func_?();
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
              (this,pSVar4,(MethodInfo *)0x0);
    func_?();
    uVar15 = &stack0x00000000 == (undefined1 *)0xffffffec;
    func_?();
  }
  else {
    while( true ) {
      if (*(int *)((int)color.r + 0xc) <= (int)uVar2) {
        return pBVar1;
      }
      uVar15 = uVar2 == *(uint *)((int)color.r + 0xc);
      if (*(uint *)((int)color.r + 0xc) <= uVar2) break;
      pBVar16 = *(Byte__Array__Class **)((int)fVar3 + 0x18);
      pBVar17 = *(Byte__Array__Class **)((int)fVar3 + 0x1c);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pBVar18 = (Byte__Array__Class *)0x4;
      pBVar19 = TypeInfo__System__Byte;
      iVar20 = func_?();
      uVar21 = 0;
      do {
        switch(uVar21) {
        case 0:
          pBVar22 = pBVar19;
          break;
        case 1:
          pBVar22 = pBVar18;
          break;
        case 2:
          pBVar22 = pBVar16;
          break;
        case 3:
          pBVar22 = pBVar17;
          break;
        default:
          goto code_?;
        }
        if (iVar20 == 0) goto code_?;
        uVar15 = uVar21 == *(uint *)(iVar20 + 0xc);
        if (*(uint *)(iVar20 + 0xc) <= uVar21) goto code_?;
        *(char *)(uVar21 + 0x10 + iVar20) = (char)(int)((float)pBVar22 * _UNK_?);
        uVar21 = uVar21 + 1;
      } while ((int)uVar21 < 4);
      uVar21 = 0;
      do {
        uVar15 = uVar21 == *(uint *)(iVar20 + 0xc);
        if (*(uint *)(iVar20 + 0xc) <= uVar21) goto code_?;
        if (pBVar1 == (Byte__Array *)0x0) goto code_?;
        uVar23 = uVar21 + uVar2 * 4;
        uVar15 = uVar23 == pBVar1->max_length;
        if (pBVar1->max_length <= uVar23) goto code_?;
        pBVar1->vector[uVar21 + uVar2 * 4] = *(uint8_t *)(iVar20 + 0x10 + uVar21);
        uVar21 = uVar21 + 1;
      } while ((int)uVar21 < 4);
      uVar2 = uVar2 + 1;
      fVar3 = (float)((int)fVar3 + 0x10);
    }
  }
code_?:
  uVar8 = func_?();
  pTVar24 = (Texture2D__Class *)((ulonglong)uVar8 >> 0x20);
  puVar25 = (uint *)uVar8;
  pTVar26 = extraout_ECX_00;
  if ((bool)uVar15) {
    pTVar24 = (Texture2D__Class *)((uint)pTVar24 & *puVar25);
    if (-1 < (int)pTVar24) {
      bVar27 = *(int *)(uVar2 + 0x10) == -0x76;
      if (-0x77 < *(int *)(uVar2 + 0x10)) {
        in((ushort)pTVar24 & (ushort)*puVar25);
        *unaff_FS_OFFSET = &stack0xffffffe4;
        bVar27 = cRam_? == '\0';
      }
      if (bVar27) {
        func_?();
        func_?();
        func_?(&TypeInfo__System__Security__Cryptography__SHA1CryptoServiceProvider);
        func_?(&TypeInfo__UnityEngine__Texture2D);
        cRam_? = '\x01';
      }
      uVar15 = color.r == 0.0;
      pTVar26 = (Texture2D *)color.r;
      pTVar24 = TypeInfo__UnityEngine__Texture2D;
      goto code_?;
    }
    *(char *)puVar25 = (char)*puVar25 + (char)uVar8;
    pTVar26 = extraout_ECX_00;
  }
  else {
code_?:
    if ((bool)uVar15) goto code_?;
  }
  pTVar28 = (Texture2D *)0x0;
  if (pTVar26->klass == pTVar24) {
    pTVar28 = pTVar26;
  }
  if (pTVar28 == (Texture2D *)0x0) {
    func_?();
  }
  else {
    pTVar28 = (Texture2D *)0x0;
    if (pTVar26->klass == pTVar24) {
      pTVar28 = pTVar26;
    }
    colors = UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_GetPixels_1
                       (pTVar28,0,0,10,10,(MethodInfo *)0x0);
    pBVar1 = TextureHash_ColorsToByteArray(colors,10,(MethodInfo *)0x0);
    this_00 = (SHA1CryptoServiceProvider *)func_?();
    mscorlib.dll::System::Security::Cryptography::SHA1CryptoServiceProvider::
    SHA1CryptoServiceProvider__ctor(this_00,(MethodInfo *)0x0);
    if (this_00 != (SHA1CryptoServiceProvider *)0x0) {
      pBVar29 = mscorlib.dll::System::Security::Cryptography::HashAlgorithm::
                HashAlgorithm_ComputeHash((HashAlgorithm *)this_00,pBVar1,(MethodInfo *)0x0);
      if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      puVar30 = &UNK_?;
      pBVar29 = (Byte__Array *)
                mscorlib.dll::System::Convert::Convert_ToBase64String(pBVar29,(MethodInfo *)0x0);
      if (pBVar1 == (Byte__Array *)0x0) {
        *unaff_FS_OFFSET = puVar30;
        return pBVar29;
      }
      func_?();
      *unaff_FS_OFFSET = puVar30;
      return pBVar29;
    }
  }
code_?:
  func_?();
  func_?();
  pcVar12 = (code *)swi(3);
  pBVar1 = (Byte__Array *)(*pcVar12)();
  return pBVar1;
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Byte[] ColorsToByteArray(Color[], Int32) */

Byte__Array *
Assembly-CSharp.dll::TextureHash::TextureHash_ColorsToByteArray
          (Color__Array *colors,int32_t sampleSize,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pBVar1 = (Byte__Array *)func_?();
  uVar2 = 0;
  pCVar3 = colors;
  if (colors == (Color__Array *)0x0) {
code_?:
    func_?();
code_?:
    pSVar4 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_5,(MethodInfo *)0x0);
    str2 = (String *)func_?();
    str0 = (String *)func_?();
    pSVar4 = mscorlib.dll::System::String::String_Concat_4(str0,pSVar4,str2,(MethodInfo *)0x0);
    uVar6 = func_?();
    pIVar7 = (IndexOutOfRangeException *)func_?(uVar6);
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
              (pIVar7,pSVar4,(MethodInfo *)0x0);
    func_?(&MethodInfo__UnityEngine__Color__get_Item_int_);
    uVar8 = &stack0x00000000 == (undefined1 *)0x0;
    IStack_5.m_value = (int32_t)pIVar7;
    func_?();
  }
  else {
    while( true ) {
      if ((int)colors->max_length <= (int)uVar2) {
        return pBVar1;
      }
      uVar8 = uVar2 == colors->max_length;
      if (colors->max_length <= uVar2) break;
      fVar9 = pCVar3->vector[0].r;
      fVar10 = pCVar3->vector[0].g;
      fStack_11 = pCVar3->vector[0].b;
      fVar12 = pCVar3->vector[0].a;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      iVar13 = func_?();
      pIVar7 = (IndexOutOfRangeException *)0x0;
      do {
        IStack_5.m_value = (int32_t)pIVar7;
        switch(IStack_5.m_value) {
        case 0:
          fVar14 = fVar9;
          break;
        case 1:
          fVar14 = fVar10;
          break;
        case 2:
          fVar14 = fStack_11;
          break;
        case 3:
          fVar14 = fVar12;
          break;
        default:
          goto code_?;
        }
        if (iVar13 == 0) goto code_?;
        uVar8 = (IndexOutOfRangeException *)IStack_5.m_value ==
                 *(IndexOutOfRangeException **)(iVar13 + 0xc);
        if (*(IndexOutOfRangeException **)(iVar13 + 0xc) <= (uint)IStack_5.m_value)
        goto code_?;
        *(char *)((int)&(((IndexOutOfRangeException *)IStack_5.m_value)->fields)._._._data + iVar13)
             = (char)(int)(fVar14 * _UNK_?);
        pIVar7 = (IndexOutOfRangeException *)
                  ((int)&((IndexOutOfRangeException *)IStack_5.m_value)->klass + 1);
      } while ((int)pIVar7 < 4);
      uVar15 = 0;
      do {
        uVar8 = uVar15 == *(uint *)(iVar13 + 0xc);
        if (*(uint *)(iVar13 + 0xc) <= uVar15) goto code_?;
        if (pBVar1 == (Byte__Array *)0x0) goto code_?;
        uVar16 = uVar15 + uVar2 * 4;
        uVar8 = uVar16 == pBVar1->max_length;
        if (pBVar1->max_length <= uVar16) goto code_?;
        pBVar1->vector[uVar15 + uVar2 * 4] = *(uint8_t *)(iVar13 + 0x10 + uVar15);
        uVar15 = uVar15 + 1;
      } while ((int)uVar15 < 4);
      uVar2 = uVar2 + 1;
      pCVar3 = (Color__Array *)pCVar3->vector;
    }
  }
code_?:
  uVar17 = func_?();
  pTVar18 = (Texture2D__Class *)((ulonglong)uVar17 >> 0x20);
  puVar19 = (uint *)uVar17;
  pCVar3 = extraout_ECX;
  if ((bool)uVar8) {
    pTVar18 = (Texture2D__Class *)((uint)pTVar18 & *puVar19);
    if (-1 < (int)pTVar18) {
      bVar20 = *(int *)(uVar2 + 0x10) == -0x76;
      if (-0x77 < *(int *)(uVar2 + 0x10)) {
        in((ushort)pTVar18 & (ushort)*puVar19);
        *unaff_FS_OFFSET = (float)&stack0xffffffd0;
        bVar20 = cRam_? == '\0';
      }
      if (bVar20) {
        func_?(&TypeInfo__System__Convert);
        func_?(&TypeInfo__System__IDisposable);
        func_?(&TypeInfo__System__Security__Cryptography__SHA1CryptoServiceProvider);
        func_?(&TypeInfo__UnityEngine__Texture2D);
        cRam_? = '\x01';
      }
      uVar8 = colors == (Color__Array *)0x0;
      pCVar3 = colors;
      pTVar18 = TypeInfo__UnityEngine__Texture2D;
      goto code_?;
    }
    *(char *)puVar19 = (char)*puVar19 + (char)uVar17;
    pCVar3 = extraout_ECX;
  }
  else {
code_?:
    if ((bool)uVar8) goto code_?;
  }
  pCVar21 = (Color__Array *)0x0;
  if ((Texture2D__Class *)pCVar3->klass == pTVar18) {
    pCVar21 = pCVar3;
  }
  if (pCVar21 == (Color__Array *)0x0) {
    func_?();
  }
  else {
    pCVar21 = (Color__Array *)0x0;
    if ((Texture2D__Class *)pCVar3->klass == pTVar18) {
      pCVar21 = pCVar3;
    }
    pCVar3 = UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_GetPixels_1
                        ((Texture2D *)pCVar21,0,0,10,10,(MethodInfo *)0x0);
    pBVar1 = TextureHash_ColorsToByteArray(pCVar3,10,(MethodInfo *)0x0);
    this = (SHA1CryptoServiceProvider *)func_?();
    mscorlib.dll::System::Security::Cryptography::SHA1CryptoServiceProvider::
    SHA1CryptoServiceProvider__ctor(this,(MethodInfo *)0x0);
    IStack_5.m_value = 1;
    if (this != (SHA1CryptoServiceProvider *)0x0) {
      pBVar1 = mscorlib.dll::System::Security::Cryptography::HashAlgorithm::
               HashAlgorithm_ComputeHash((HashAlgorithm *)this,pBVar1,(MethodInfo *)0x0);
      if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pBVar1 = (Byte__Array *)
               mscorlib.dll::System::Convert::Convert_ToBase64String(pBVar1,(MethodInfo *)0x0);
      IStack_5.m_value = -1;
      if (this == (SHA1CryptoServiceProvider *)0x0) {
        *unaff_FS_OFFSET = fStack_11;
        return pBVar1;
      }
      func_?();
      *unaff_FS_OFFSET = fStack_11;
      return pBVar1;
    }
  }
code_?:
  func_?();
  func_?();
  pcVar22 = (code *)swi(3);
  pBVar1 = (Byte__Array *)(*pcVar22)();
  return pBVar1;
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

