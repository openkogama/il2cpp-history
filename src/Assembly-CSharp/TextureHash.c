
/* Byte ColorFloatToByte(Single) */

uint8_t Assembly-CSharp.dll::TextureHash::TextureHash_ColorFloatToByte
                  (float colorFloat,MethodInfo *method)

{
  return (uint8_t)(int)(colorFloat * _UNK_?);
}


/* Byte[] ColorToByteArray(Color) */

Byte__Array *
Assembly-CSharp.dll::TextureHash::TextureHash_ColorToByteArray(Color color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    cRam_? = '\x01';
  }
  pBVar1 = (Byte__Array *)func_?(TypeInfo__System__Byte,4);
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
      pSVar4 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_2,(MethodInfo *)0x0);
      str2 = (String *)func_?(&::StringLiteral___);
      str0 = (String *)func_?(&StringLiteral_Invalid_Color_index_);
      pSVar4 = mscorlib.dll::System::String::String_Concat_4(str0,pSVar4,str2,(MethodInfo *)0x0);
      uVar5 = func_?(&TypeInfo__System__IndexOutOfRangeException);
      this = (IndexOutOfRangeException *)func_?(uVar5);
      mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
                (this,pSVar4,(MethodInfo *)0x0);
      func_?(&MethodInfo__UnityEngine__Color__get_Item_int_);
      func_?();
      goto code_?;
    }
    if (pBVar1 == (Byte__Array *)0x0) break;
    if (pBVar1->max_length <= (uint)IStack_2.m_value) {
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
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* Byte[] ColorsToByteArray(Color[], Int32) */

Byte__Array *
Assembly-CSharp.dll::TextureHash::TextureHash_ColorsToByteArray
          (Color__Array *colors,int32_t sampleSize,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    cRam_? = '\x01';
  }
  pBVar1 = (Byte__Array *)func_?(TypeInfo__System__Byte,sampleSize * sampleSize * 4);
  uVar2 = 0;
  pCVar3 = colors;
  if (colors == (Color__Array *)0x0) {
code_?:
    func_?();
code_?:
    pSVar4 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_5,(MethodInfo *)0x0);
    str2 = (String *)func_?(&::StringLiteral___);
    str0 = (String *)func_?(&StringLiteral_Invalid_Color_index_);
    pBVar1 = (Byte__Array *)
             mscorlib.dll::System::String::String_Concat_4(str0,pSVar4,str2,(MethodInfo *)0x0);
    uVar6 = func_?(&TypeInfo__System__IndexOutOfRangeException);
    unaff_EDI = (IndexOutOfRangeException *)func_?(uVar6);
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
              (unaff_EDI,(String *)pBVar1,(MethodInfo *)0x0);
    unaff_EBP = (int *)func_?(&MethodInfo__UnityEngine__Color__get_Item_int_);
    IStack_5.m_value = (int32_t)unaff_EDI;
    func_?();
  }
  else {
    while( true ) {
      if ((int)colors->max_length <= (int)uVar2) {
        return pBVar1;
      }
      if (colors->max_length <= uVar2) break;
      fVar7 = pCVar3->vector[0].r;
      fVar8 = pCVar3->vector[0].g;
      fVar9 = pCVar3->vector[0].b;
      fVar10 = pCVar3->vector[0].a;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Byte);
        cRam_? = '\x01';
      }
      unaff_EDI = (IndexOutOfRangeException *)func_?(TypeInfo__System__Byte,4);
      pIVar11 = (IndexOutOfRangeException *)0x0;
      do {
        IStack_5.m_value = (int32_t)pIVar11;
        switch(IStack_5.m_value) {
        case 0:
          fVar12 = fVar7;
          break;
        case 1:
          fVar12 = fVar8;
          break;
        case 2:
          fVar12 = fVar9;
          break;
        case 3:
          fVar12 = fVar10;
          break;
        default:
          goto code_?;
        }
        if (unaff_EDI == (IndexOutOfRangeException *)0x0) goto code_?;
        if ((IndexOutOfRangeException *)(unaff_EDI->fields)._._._message <= (uint)IStack_5.m_value)
        goto code_?;
        *(char *)((int)&(((IndexOutOfRangeException *)IStack_5.m_value)->fields)._._._className +
                 (int)&(unaff_EDI->fields)._._._className) = (char)(int)(fVar12 * _UNK_?);
        pIVar11 = (IndexOutOfRangeException *)
                  ((int)&((IndexOutOfRangeException *)IStack_5.m_value)->klass + 1);
      } while ((int)pIVar11 < 4);
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
  puVar13 = (undefined4 *)*unaff_EBP;
  *puVar13 = *puVar13;
  puVar13[-1] = 0xffffffff;
  puVar13[-2] = &DAT_?;
  puVar13[-3] = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = puVar13 + -3;
  bVar14 = cRam_? == '\0';
  puVar13[-10] = uVar2 + 1;
  puVar13[-0xb] = pBVar1;
  puVar15 = puVar13 + -0xc;
  puVar13[-0xc] = unaff_EDI;
  puVar13[-4] = puVar13 + -0xc;
  if (bVar14) {
    puVar13[-0xd] = &TypeInfo__System__Convert;
    puVar16 = puVar13 + -0xe;
    puVar13[-0xe] = &UNK_?;
    func_?();
    *(IDisposable__Class ***)((int)puVar16 + -4) = &TypeInfo__System__IDisposable;
    puVar17 = (undefined1 *)((int)puVar16 + -8);
    *(undefined **)((int)puVar16 + -8) = &UNK_?;
    func_?();
    *(SHA1CryptoServiceProvider__Class ***)(puVar17 + -4) =
         &TypeInfo__System__Security__Cryptography__SHA1CryptoServiceProvider;
    puVar18 = puVar17 + -8;
    *(undefined **)(puVar17 + -8) = &UNK_?;
    func_?();
    *(Texture2D__Class ***)(puVar18 + -4) = &TypeInfo__UnityEngine__Texture2D;
    puVar19 = puVar18 + -8;
    *(undefined **)(puVar18 + -8) = &UNK_?;
    func_?();
    puVar15 = (undefined4 *)(puVar19 + 0x10);
    cRam_? = '\x01';
  }
  pTVar20 = TypeInfo__UnityEngine__Texture2D;
  piVar21 = (int *)puVar13[2];
  puVar13[-6] = 0;
  if (piVar21 != (int *)0x0) {
    piVar22 = (int *)0x0;
    if ((Texture2D__Class *)*piVar21 == pTVar20) {
      piVar22 = piVar21;
    }
    if (piVar22 == (int *)0x0) {
      *(Texture2D__Class **)((int)puVar15 + -4) = pTVar20;
      *(int **)((int)puVar15 + -8) = piVar21;
      puVar23 = (undefined4 *)((int)puVar15 + -0xc);
      puVar15 = (undefined4 *)((int)puVar15 + -0xc);
      *puVar23 = &UNK_?;
      func_?();
    }
    else {
      *(undefined4 *)((int)puVar15 + -4) = 0;
      *(undefined4 *)((int)puVar15 + -8) = 10;
      pTVar24 = (Texture2D__Class *)*piVar21;
      *(undefined4 *)((int)puVar15 + -0xc) = 10;
      *(undefined4 *)((int)puVar15 + -0x10) = 0;
      piVar22 = (int *)0x0;
      if (pTVar24 == pTVar20) {
        piVar22 = piVar21;
      }
      *(undefined4 *)((int)puVar15 + -0x14) = 0;
      *(int **)((int)puVar15 + -0x18) = piVar22;
      *(undefined **)((int)puVar15 + -0x1c) = &UNK_?;
      pCVar3 = UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_GetPixels_1
                          (*(Texture2D **)((int)puVar15 + -0x18),*(int32_t *)((int)puVar15 + -0x14),
                           *(int32_t *)((int)puVar15 + -0x10),*(int32_t *)((int)puVar15 + -0xc),
                           *(int32_t *)((int)puVar15 + -8),*(MethodInfo **)((int)puVar15 + -4));
      *(undefined4 *)((int)puVar15 + -4) = 0;
      *(undefined4 *)((int)puVar15 + -8) = 10;
      *(Color__Array **)((int)puVar15 + -0xc) = pCVar3;
      *(undefined **)((int)puVar15 + -0x10) = &UNK_?;
      pBVar1 = TextureHash_ColorsToByteArray
                         (*(Color__Array **)((int)puVar15 + -0xc),*(int32_t *)((int)puVar15 + -8),
                          *(MethodInfo **)((int)puVar15 + -4));
      *(SHA1CryptoServiceProvider__Class **)((int)puVar15 + -4) =
           TypeInfo__System__Security__Cryptography__SHA1CryptoServiceProvider;
      puVar25 = (undefined1 *)((int)puVar15 + -8);
      *(undefined **)((int)puVar15 + -8) = &UNK_?;
      iVar26 = func_?();
      *(undefined4 *)(puVar25 + -4) = 0;
      *(int *)(puVar25 + -8) = iVar26;
      *(undefined **)(puVar25 + -0xc) = &UNK_?;
      mscorlib.dll::System::Security::Cryptography::SHA1CryptoServiceProvider::
      SHA1CryptoServiceProvider__ctor
                (*(SHA1CryptoServiceProvider **)(puVar25 + -8),*(MethodInfo **)(puVar25 + -4));
      puVar13[-5] = iVar26;
      puVar15 = (undefined4 *)(puVar25 + 0x30);
      puVar13[-9] = 0;
      puVar13[-8] = puVar13 + -5;
      puVar13[-1] = 0;
      *(undefined1 *)(puVar13 + -1) = 1;
      if (iVar26 != 0) {
        *(undefined4 *)(puVar25 + 0x2c) = 0;
        *(Byte__Array **)(puVar25 + 0x28) = pBVar1;
        *(int *)(puVar25 + 0x24) = iVar26;
        *(undefined **)(puVar25 + 0x20) = &UNK_?;
        pBVar1 = mscorlib.dll::System::Security::Cryptography::HashAlgorithm::
                 HashAlgorithm_ComputeHash
                           (*(HashAlgorithm **)(puVar25 + 0x24),*(Byte__Array **)(puVar25 + 0x28),
                            *(MethodInfo **)(puVar25 + 0x2c));
        puVar27 = (undefined4 *)(puVar25 + 0x3c);
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          *(Convert__Class **)(puVar25 + 0x38) = TypeInfo__System__Convert;
          puVar28 = puVar25 + 0x34;
          *(undefined **)(puVar25 + 0x34) = &UNK_?;
          func_?();
          puVar27 = (undefined4 *)(puVar28 + 4);
        }
        puVar27[-1] = 0;
        puVar27[-2] = pBVar1;
        puVar27[-3] = &UNK_?;
        pBVar1 = (Byte__Array *)
                 mscorlib.dll::System::Convert::Convert_ToBase64String
                           ((Byte__Array *)puVar27[-2],(MethodInfo *)puVar27[-1]);
        puVar13[-1] = 0xffffffff;
        puVar13[-6] = pBVar1;
        if (puVar13[-5] == 0) {
          *unaff_FS_OFFSET = puVar13[-3];
          return pBVar1;
        }
        puVar27[1] = puVar13[-5];
        *puVar27 = TypeInfo__System__IDisposable;
        puVar27[-1] = 0;
        puVar27[-2] = &UNK_?;
        func_?();
        *unaff_FS_OFFSET = puVar13[-3];
        return pBVar1;
      }
    }
  }
  puVar29 = (undefined1 *)((int)puVar15 + -4);
  *(undefined **)((int)puVar15 + -4) = &UNK_?;
  uVar6 = func_?();
  *(undefined4 *)(puVar29 + -4) = uVar6;
  *(undefined **)(puVar29 + -8) = &UNK_?;
  func_?();
  pcVar30 = (code *)swi(3);
  pBVar1 = (Byte__Array *)(*pcVar30)();
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

