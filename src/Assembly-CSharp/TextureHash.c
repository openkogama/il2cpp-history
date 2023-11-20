
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
  IStack_2.m_value = 0;
  while( true ) {
    switch(IStack_2.m_value) {
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
      str1 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_2,(MethodInfo *)0x0);
      str2 = (String *)func_?();
      str0 = (String *)func_?();
      unaff_ESI = mscorlib.dll::System::String::String_Concat_4(str0,str1,str2,(MethodInfo *)0x0);
      func_?();
      unaff_EDI = (IndexOutOfRangeException *)func_?();
      mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
                (unaff_EDI,unaff_ESI,(MethodInfo *)0x0);
      func_?();
      bVar4 = (undefined1 *)0xffffffc7 < &stack0xffffffdc;
      cVar5 = SCARRY4((int)&stack0xffffffdc,0x38);
      cVar6 = (int)&method < 0;
      uVar7 = &stack0x00000000 == (undefined1 *)0xffffffec;
      func_?();
      goto code_?;
    }
    bVar4 = 0;
    cVar5 = '\0';
    cVar6 = (int)pBVar1 < 0;
    uVar7 = 1;
    if (pBVar1 == (Byte__Array *)0x0) break;
    uVar8 = pBVar1->max_length;
    bVar4 = (uint)IStack_2.m_value < uVar8;
    cVar5 = SBORROW4(IStack_2.m_value,uVar8);
    cVar6 = (int)(IStack_2.m_value - uVar8) < 0;
    uVar7 = IStack_2.m_value == uVar8;
    if (!(bool)bVar4) {
code_?:
      func_?();
      break;
    }
    pBVar1->vector[IStack_2.m_value] = (uint8_t)(int)(fVar3 * _UNK_?);
    IStack_2.m_value = IStack_2.m_value + 1;
    if (3 < IStack_2.m_value) {
      return pBVar1;
    }
  }
  func_?();
  if (!(bool)uVar7 && cVar5 == cVar6) {
    *(int *)(unaff_EBX + 0x53d9e8f8) = *(int *)(unaff_EBX + 0x53d9e8f8) + extraout_ECX + (uint)bVar4
    ;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  LOCK();
  UNLOCK();
  unaff_EDI->klass = (IndexOutOfRangeException__Class *)unaff_ESI->klass;
  pcVar9 = (code *)swi(3);
  pBVar1 = (Byte__Array *)(*pcVar9)();
  return pBVar1;
}


/* WARNING (jumptable): Unable to track spacebase fully for stack */
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
    pBVar1 = (Byte__Array *)
             mscorlib.dll::System::String::String_Concat_4(str0,pSVar4,str2,(MethodInfo *)0x0);
    func_?();
    unaff_EDI = (IndexOutOfRangeException *)func_?();
    puStackY_44 = &UNK_?;
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
              (unaff_EDI,(String *)pBVar1,(MethodInfo *)0x0);
    func_?();
    IStack_5.m_value = (int32_t)unaff_EDI;
    func_?();
  }
  else {
    while( true ) {
      if ((int)colors->max_length <= (int)uVar2) {
        return pBVar1;
      }
      if (colors->max_length <= uVar2) break;
      fVar6 = pCVar3->vector[0].r;
      fVar7 = pCVar3->vector[0].g;
      fVar8 = pCVar3->vector[0].b;
      fVar9 = pCVar3->vector[0].a;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      unaff_EDI = (IndexOutOfRangeException *)func_?();
      pIVar10 = (IndexOutOfRangeException *)0x0;
      do {
        IStack_5.m_value = (int32_t)pIVar10;
        switch(IStack_5.m_value) {
        case 0:
          fVar11 = fVar6;
          break;
        case 1:
          fVar11 = fVar7;
          break;
        case 2:
          fVar11 = fVar8;
          break;
        case 3:
          fVar11 = fVar9;
          break;
        default:
          goto code_?;
        }
        if (unaff_EDI == (IndexOutOfRangeException *)0x0) goto code_?;
        if ((IndexOutOfRangeException *)(unaff_EDI->fields)._._._message <= (uint)IStack_5.m_value)
        goto code_?;
        *(char *)((int)&(((IndexOutOfRangeException *)IStack_5.m_value)->fields)._._._className +
                 (int)&(unaff_EDI->fields)._._._className) = (char)(int)(fVar11 * _UNK_?);
        pIVar10 = (IndexOutOfRangeException *)
                  ((int)&((IndexOutOfRangeException *)IStack_5.m_value)->klass + 1);
      } while ((int)pIVar10 < 4);
      pSVar4 = (String *)0x0;
      do {
        if ((unaff_EDI->fields)._._._message <= pSVar4) goto code_?;
        if (pBVar1 == (Byte__Array *)0x0) goto code_?;
        if ((undefined1 *)pBVar1->max_length <= &pSVar4->klass + uVar2) goto code_?;
        *(uint8_t *)((int)&pSVar4->klass + (int)(pBVar1->vector + uVar2 * 4)) =
             *(uint8_t *)((int)&(unaff_EDI->fields)._._._data + (int)pSVar4);
        pSVar4 = (String *)((int)&pSVar4->klass + 1);
      } while ((int)pSVar4 < 4);
      uVar2 = uVar2 + 1;
      pCVar3 = (Color__Array *)pCVar3->vector;
    }
  }
code_?:
  func_?();
  pSVar4 = unaff_EDI[-0x13c4e00].fields._._._remoteStackTraceString;
  *(undefined1 **)(&stack0xffffffd8 + (int)pSVar4) = &stack0xfffffffc;
  *(undefined4 *)(&stack0xffffffd4 + (int)pSVar4) = 0xffffffff;
  *(undefined **)(&stack0xffffffd0 + (int)pSVar4) = &DAT_?;
  *(undefined4 *)(&stack0xffffffcc + (int)pSVar4) = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xffffffcc + (int)pSVar4;
  *(uint *)(&stack0x00000000 + (int)&pSVar4[-5].klass) = uVar2;
  *(undefined1 **)((int)&pSVar4->monitor + (int)aiStackY_58) =
       (undefined1 *)((int)&pBVar1->klass + 2);
  puVar12 = (undefined1 *)((int)aiStackY_58 + (int)pSVar4);
  *(undefined1 **)((int)aiStackY_58 + (int)pSVar4) = (undefined1 *)((int)&unaff_EDI->klass + 2);
  *(int *)(&stack0xffffffc8 + (int)pSVar4) = (int)aiStackY_58 + (int)pSVar4;
  if (cRam_? == '\0') {
    *(Convert__Class ***)((int)&pSVar4->monitor + (int)auStackY_60) = &TypeInfo__System__Convert;
    puVar13 = (undefined1 *)((int)auStackY_60 + (int)pSVar4);
    *(undefined **)((int)auStackY_60 + (int)pSVar4) = &UNK_?;
    func_?();
    *(IDisposable__Class ***)(puVar13 + -4) = &TypeInfo__System__IDisposable;
    puVar14 = puVar13 + -8;
    *(undefined **)(puVar13 + -8) = &UNK_?;
    func_?();
    *(SHA1CryptoServiceProvider__Class ***)(puVar14 + -4) =
         &TypeInfo__System__Security__Cryptography__SHA1CryptoServiceProvider;
    puVar15 = puVar14 + -8;
    *(undefined **)(puVar14 + -8) = &UNK_?;
    func_?();
    *(Texture2D__Class ***)(puVar15 + -4) = &TypeInfo__UnityEngine__Texture2D;
    puVar16 = puVar15 + -8;
    *(undefined **)(puVar15 + -8) = &UNK_?;
    func_?();
    puVar12 = puVar16 + 0x10;
    cRam_? = '\x01';
  }
  piVar17 = *(int **)(&stack0xffffffe0 + (int)pSVar4);
  *(undefined4 *)(&stack0xffffffc0 + (int)pSVar4) = 0;
  if (piVar17 != (int *)0x0) {
    piVar18 = (int *)0x0;
    if ((Texture2D__Class *)*piVar17 == TypeInfo__UnityEngine__Texture2D) {
      piVar18 = piVar17;
    }
    if (piVar18 == (int *)0x0) {
      *(Texture2D__Class **)(puVar12 + -4) = TypeInfo__UnityEngine__Texture2D;
      *(int **)(puVar12 + -8) = piVar17;
      puVar19 = (undefined4 *)(puVar12 + -0xc);
      puVar12 = puVar12 + -0xc;
      *puVar19 = &UNK_?;
      func_?();
    }
    else {
      *(undefined4 *)(puVar12 + -4) = 0;
      *(undefined4 *)(puVar12 + -8) = 10;
      pTVar20 = (Texture2D__Class *)*piVar17;
      *(undefined4 *)(puVar12 + -0xc) = 10;
      *(undefined4 *)(puVar12 + -0x10) = 0;
      piVar18 = (int *)0x0;
      if (pTVar20 == TypeInfo__UnityEngine__Texture2D) {
        piVar18 = piVar17;
      }
      *(undefined4 *)(puVar12 + -0x14) = 0;
      *(int **)(puVar12 + -0x18) = piVar18;
      *(undefined **)(puVar12 + -0x1c) = &UNK_?;
      pCVar3 = UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_GetPixels_1
                          (*(Texture2D **)(puVar12 + -0x18),*(int32_t *)(puVar12 + -0x14),
                           *(int32_t *)(puVar12 + -0x10),*(int32_t *)(puVar12 + -0xc),
                           *(int32_t *)(puVar12 + -8),*(MethodInfo **)(puVar12 + -4));
      *(undefined4 *)(puVar12 + -4) = 0;
      *(undefined4 *)(puVar12 + -8) = 10;
      *(Color__Array **)(puVar12 + -0xc) = pCVar3;
      *(undefined **)(puVar12 + -0x10) = &UNK_?;
      pBVar1 = TextureHash_ColorsToByteArray
                         (*(Color__Array **)(puVar12 + -0xc),*(int32_t *)(puVar12 + -8),
                          *(MethodInfo **)(puVar12 + -4));
      *(SHA1CryptoServiceProvider__Class **)(puVar12 + -4) =
           TypeInfo__System__Security__Cryptography__SHA1CryptoServiceProvider;
      puVar21 = puVar12 + -8;
      *(undefined **)(puVar12 + -8) = &UNK_?;
      iVar22 = func_?();
      *(undefined4 *)(puVar21 + -4) = 0;
      *(int *)(puVar21 + -8) = iVar22;
      *(undefined **)(puVar21 + -0xc) = &UNK_?;
      mscorlib.dll::System::Security::Cryptography::SHA1CryptoServiceProvider::
      SHA1CryptoServiceProvider__ctor
                (*(SHA1CryptoServiceProvider **)(puVar21 + -8),*(MethodInfo **)(puVar21 + -4));
      *(int *)(&stack0xffffffc4 + (int)pSVar4) = iVar22;
      puVar12 = puVar21 + 0x30;
      *(undefined4 *)((int)&(pSVar4->fields)._stringLength + (int)(aiStackY_58 + 1)) = 0;
      *(undefined1 **)((int)&pSVar4[1].klass + (int)aiStackY_58) = &stack0xffffffc4 + (int)pSVar4;
      *(undefined4 *)(&stack0xffffffd4 + (int)pSVar4) = 0;
      (&stack0xffffffd4)[(int)pSVar4] = 1;
      if (iVar22 != 0) {
        *(undefined4 *)(puVar21 + 0x2c) = 0;
        *(Byte__Array **)(puVar21 + 0x28) = pBVar1;
        *(int *)(puVar21 + 0x24) = iVar22;
        *(undefined **)(puVar21 + 0x20) = &UNK_?;
        pBVar1 = mscorlib.dll::System::Security::Cryptography::HashAlgorithm::
                 HashAlgorithm_ComputeHash
                           (*(HashAlgorithm **)(puVar21 + 0x24),*(Byte__Array **)(puVar21 + 0x28),
                            *(MethodInfo **)(puVar21 + 0x2c));
        puVar23 = (undefined4 *)(puVar21 + 0x3c);
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          *(Convert__Class **)(puVar21 + 0x38) = TypeInfo__System__Convert;
          puVar24 = puVar21 + 0x34;
          *(undefined **)(puVar21 + 0x34) = &UNK_?;
          func_?();
          puVar23 = (undefined4 *)(puVar24 + 4);
        }
        puVar23[-1] = 0;
        puVar23[-2] = pBVar1;
        puVar23[-3] = &UNK_?;
        pBVar1 = (Byte__Array *)
                 mscorlib.dll::System::Convert::Convert_ToBase64String
                           ((Byte__Array *)puVar23[-2],(MethodInfo *)puVar23[-1]);
        *(undefined4 *)(&stack0xffffffd4 + (int)pSVar4) = 0xffffffff;
        *(Byte__Array **)(&stack0xffffffc0 + (int)pSVar4) = pBVar1;
        if (*(int *)(&stack0xffffffc4 + (int)pSVar4) == 0) {
          *unaff_FS_OFFSET = *(undefined4 *)(&stack0xffffffcc + (int)pSVar4);
          return pBVar1;
        }
        puVar23[1] = *(int *)(&stack0xffffffc4 + (int)pSVar4);
        *puVar23 = TypeInfo__System__IDisposable;
        puVar23[-1] = 0;
        puVar23[-2] = &UNK_?;
        func_?();
        *unaff_FS_OFFSET = *(undefined4 *)(&stack0xffffffcc + (int)pSVar4);
        return pBVar1;
      }
    }
  }
  puVar25 = puVar12 + -4;
  *(undefined **)(puVar12 + -4) = &UNK_?;
  uVar26 = func_?();
  *(undefined4 *)(puVar25 + -4) = uVar26;
  *(undefined **)(puVar25 + -8) = &UNK_?;
  func_?();
  pcVar27 = (code *)swi(3);
  pBVar1 = (Byte__Array *)(*pcVar27)();
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

