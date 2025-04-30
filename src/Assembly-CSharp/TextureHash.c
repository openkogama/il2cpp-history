
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
  uVar6 = func_?();
  out((short)((ulonglong)uVar6 >> 0x20),(int)uVar6);
  uVar7 = *unaff_EBX;
  *unaff_EBX = (uint)(&stack0xfffffff0 + *unaff_EBX);
  *unaff_EBX = (uint)(&stack0xfffffff0 + *unaff_EBX);
  uVar8 = *unaff_EBX;
  *unaff_EBX = (uint)(&stack0xfffffff0 + *unaff_EBX);
  pcVar9 = (char *)(CONCAT22((short)((ulonglong)uVar6 >> 0x30),
                             CONCAT11((char)((ulonglong)uVar6 >> 0x28) * '\x02' +
                                      CARRY4(uVar7,(uint)&stack0xfffffff0),
                                      (char)((ulonglong)uVar6 >> 0x20))) + (int)uVar6);
  *pcVar9 = *pcVar9 + (char)uVar6 + CARRY4(uVar8,(uint)&stack0xfffffff0);
  pcVar10 = (code *)swi(3);
  pBVar1 = (Byte__Array *)(*pcVar10)();
  return pBVar1;
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
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
  pBVar1 = (Byte__Array *)func_?(TypeInfo__System__Byte,sampleSize * sampleSize * 4);
  piVar2 = (int *)0x0;
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
    func_?(&MethodInfo__UnityEngine__Color__get_Item_int_);
    IStack_5.m_value = (int32_t)unaff_EDI;
    func_?();
  }
  else {
    while( true ) {
      if ((int)colors->max_length <= (int)piVar2) {
        return pBVar1;
      }
      if ((int *)colors->max_length <= piVar2) break;
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
        ppSVar13 = &pSVar4->klass;
        if ((undefined1 *)pBVar1->max_length <= ppSVar13 + (int)piVar2) goto code_?;
        puVar14 = (uint8_t *)((int)&(unaff_EDI->fields)._._._data + (int)pSVar4);
        pSVar4 = (String *)((int)&pSVar4->klass + 1);
        pBVar1->vector[(int)(ppSVar13 + (int)piVar2)] = *puVar14;
      } while ((int)pSVar4 < 4);
      piVar2 = (int *)((int)piVar2 + 1);
      pCVar3 = (Color__Array *)pCVar3->vector;
    }
  }
code_?:
  uVar15 = func_?();
  puVar16 = (undefined1 *)
            CONCAT22((short)((uint)&stack0xffffffdc >> 0x10),
                     (short)&stack0xffffffdc + (short)*piVar2);
  uVar17 = (uint)((ulonglong)uVar15 >> 0x20) & *(uint *)uVar15;
  if (uVar17 == 0) {
    puVar16 = puVar16 + *piVar2;
    in(0);
  }
  else if ((POPCOUNT(uVar17 & *(uint *)uVar15 & 0xff) & 1U) == 0) {
    puVar18 = puVar16 + -4;
    puVar16 = puVar16 + -4;
    *(undefined1 **)puVar18 = &stack0xfffffffc;
  }
  *(undefined4 *)(puVar16 + -4) = 0xffffffff;
  *(undefined **)(puVar16 + -8) = &DAT_?;
  *(undefined4 *)(puVar16 + -0xc) = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = puVar16 + -0xc;
  bVar19 = cRam_? == '\0';
  *(int **)(puVar16 + -0x28) = piVar2;
  *(Byte__Array **)(puVar16 + -0x2c) = pBVar1;
  puVar20 = puVar16 + -0x30;
  *(IndexOutOfRangeException **)(puVar16 + -0x30) = unaff_EDI;
  *(undefined1 **)(puVar16 + -0x10) = puVar16 + -0x30;
  if (bVar19) {
    *(Convert__Class ***)(puVar16 + -0x34) = &TypeInfo__System__Convert;
    puVar21 = puVar16 + -0x38;
    *(undefined **)(puVar16 + -0x38) = &UNK_?;
    func_?();
    *(IDisposable__Class ***)(puVar21 + -4) = &TypeInfo__System__IDisposable;
    puVar22 = puVar21 + -8;
    *(undefined **)(puVar21 + -8) = &UNK_?;
    func_?();
    *(SHA1CryptoServiceProvider__Class ***)(puVar22 + -4) =
         &TypeInfo__System__Security__Cryptography__SHA1CryptoServiceProvider;
    puVar23 = puVar22 + -8;
    *(undefined **)(puVar22 + -8) = &UNK_?;
    func_?();
    *(Texture2D__Class ***)(puVar23 + -4) = &TypeInfo__UnityEngine__Texture2D;
    puVar24 = puVar23 + -8;
    *(undefined **)(puVar23 + -8) = &UNK_?;
    func_?();
    puVar20 = puVar24 + 0x10;
    cRam_? = '\x01';
  }
  pTVar25 = TypeInfo__UnityEngine__Texture2D;
  piVar2 = *(int **)(puVar16 + 8);
  *(undefined4 *)(puVar16 + -0x18) = 0;
  if (piVar2 != (int *)0x0) {
    pTVar26 = (Texture2D__Class *)*piVar2;
    piVar27 = (int *)0x0;
    if (pTVar26 == pTVar25) {
      piVar27 = piVar2;
    }
    if (piVar27 == (int *)0x0) {
      *(Texture2D__Class **)(puVar20 + -4) = pTVar25;
      *(int **)(puVar20 + -8) = piVar2;
      puVar28 = (undefined4 *)(puVar20 + -0xc);
      puVar20 = puVar20 + -0xc;
      *puVar28 = &UNK_?;
      func_?();
    }
    else {
      *(undefined4 *)(puVar20 + -4) = 0;
      *(undefined4 *)(puVar20 + -8) = 10;
      *(undefined4 *)(puVar20 + -0xc) = 10;
      *(undefined4 *)(puVar20 + -0x10) = 0;
      piVar27 = (int *)0x0;
      if (pTVar26 == pTVar25) {
        piVar27 = piVar2;
      }
      *(undefined4 *)(puVar20 + -0x14) = 0;
      *(int **)(puVar20 + -0x18) = piVar27;
      *(undefined **)(puVar20 + -0x1c) = &UNK_?;
      pCVar3 = UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_GetPixels_1
                          (*(Texture2D **)(puVar20 + -0x18),*(int32_t *)(puVar20 + -0x14),
                           *(int32_t *)(puVar20 + -0x10),*(int32_t *)(puVar20 + -0xc),
                           *(int32_t *)(puVar20 + -8),*(MethodInfo **)(puVar20 + -4));
      *(undefined4 *)(puVar20 + -4) = 0;
      *(undefined4 *)(puVar20 + -8) = 10;
      *(Color__Array **)(puVar20 + -0xc) = pCVar3;
      *(undefined **)(puVar20 + -0x10) = &UNK_?;
      pBVar1 = TextureHash_ColorsToByteArray
                          (*(Color__Array **)(puVar20 + -0xc),*(int32_t *)(puVar20 + -8),
                           *(MethodInfo **)(puVar20 + -4));
      *(SHA1CryptoServiceProvider__Class **)(puVar20 + -4) =
           TypeInfo__System__Security__Cryptography__SHA1CryptoServiceProvider;
      puVar29 = puVar20 + -8;
      *(undefined **)(puVar20 + -8) = &UNK_?;
      iVar30 = func_?();
      *(undefined4 *)(puVar29 + -4) = 0;
      *(int *)(puVar29 + -8) = iVar30;
      *(undefined **)(puVar29 + -0xc) = &UNK_?;
      mscorlib.dll::System::Security::Cryptography::SHA1CryptoServiceProvider::
      SHA1CryptoServiceProvider__ctor
                (*(SHA1CryptoServiceProvider **)(puVar29 + -8),*(MethodInfo **)(puVar29 + -4));
      *(int *)(puVar16 + -0x14) = iVar30;
      puVar20 = puVar29 + 0x30;
      *(undefined4 *)(puVar16 + -0x24) = 0;
      *(undefined1 **)(puVar16 + -0x20) = puVar16 + -0x14;
      *(undefined4 *)(puVar16 + -4) = 0;
      puVar16[-4] = 1;
      if (iVar30 != 0) {
        *(undefined4 *)(puVar29 + 0x2c) = 0;
        *(Byte__Array **)(puVar29 + 0x28) = pBVar1;
        *(int *)(puVar29 + 0x24) = iVar30;
        *(undefined **)(puVar29 + 0x20) = &UNK_?;
        pBVar1 = mscorlib.dll::System::Security::Cryptography::HashAlgorithm::
                  HashAlgorithm_ComputeHash
                            (*(HashAlgorithm **)(puVar29 + 0x24),*(Byte__Array **)(puVar29 + 0x28),
                             *(MethodInfo **)(puVar29 + 0x2c));
        puVar31 = (undefined4 *)(puVar29 + 0x3c);
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          *(Convert__Class **)(puVar29 + 0x38) = TypeInfo__System__Convert;
          puVar32 = puVar29 + 0x34;
          *(undefined **)(puVar29 + 0x34) = &UNK_?;
          func_?();
          puVar31 = (undefined4 *)(puVar32 + 4);
        }
        puVar31[-1] = 0;
        puVar31[-2] = pBVar1;
        puVar31[-3] = &UNK_?;
        pBVar1 = (Byte__Array *)
                  mscorlib.dll::System::Convert::Convert_ToBase64String
                            ((Byte__Array *)puVar31[-2],(MethodInfo *)puVar31[-1]);
        *(undefined4 *)(puVar16 + -4) = 0xffffffff;
        *(Byte__Array **)(puVar16 + -0x18) = pBVar1;
        if (*(int *)(puVar16 + -0x14) == 0) {
          *unaff_FS_OFFSET = *(undefined4 *)(puVar16 + -0xc);
          return pBVar1;
        }
        puVar31[1] = *(int *)(puVar16 + -0x14);
        *puVar31 = TypeInfo__System__IDisposable;
        puVar31[-1] = 0;
        puVar31[-2] = &UNK_?;
        func_?();
        *unaff_FS_OFFSET = *(undefined4 *)(puVar16 + -0xc);
        return pBVar1;
      }
    }
  }
  puVar33 = puVar20 + -4;
  *(undefined **)(puVar20 + -4) = &UNK_?;
  uVar6 = func_?();
  *(undefined4 *)(puVar33 + -4) = uVar6;
  *(undefined **)(puVar33 + -8) = &UNK_?;
  func_?();
  pcVar34 = (code *)swi(3);
  pBVar1 = (Byte__Array *)(*pcVar34)();
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

