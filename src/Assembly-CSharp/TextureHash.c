
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
  uVar2 = 0;
  while( true ) {
    switch(uVar2) {
    default:
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
    }
    if (pBVar1 == (Byte__Array *)0x0) break;
    if (pBVar1->max_length <= uVar2) {
      func_?();
      break;
    }
    pBVar1->vector[uVar2] = (uint8_t)(int)(fVar3 * _UNK_?);
    uVar2 = uVar2 + 1;
    if (3 < (int)uVar2) {
      return pBVar1;
    }
  }
  uVar4 = func_?();
  pbVar5 = (byte *)(((uint)((ulonglong)uVar4 >> 0x20) & *(uint *)uVar4) + 0xba0f1023);
  *pbVar5 = *pbVar5 | unaff_BH;
  pcVar6 = (code *)swi(3);
  pBVar1 = (Byte__Array *)(*pcVar6)();
  return pBVar1;
}


/* Byte[] ColorsToByteArray(Color[], Int32) */

Byte__Array *
Assembly-CSharp.dll::TextureHash::TextureHash_ColorsToByteArray
          (Color__Array *colors,int32_t sampleSize,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  ppBStack_1 = (Byte__Array__Class **)(sampleSize * sampleSize * 4);
  pBStack_2 = TypeInfo__System__Byte;
  pBVar3 = (Byte__Array *)func_?();
  uVar4 = 0;
  pCVar5 = colors;
  if (colors == (Color__Array *)0x0) {
code_?:
    func_?();
  }
  else {
    while( true ) {
      if ((int)colors->max_length <= (int)uVar4) {
        return pBVar3;
      }
      if (colors->max_length <= uVar4) break;
      fVar6 = pCVar5->vector[0].r;
      fVar7 = pCVar5->vector[0].g;
      fStack_8 = pCVar5->vector[0].b;
      fVar9 = pCVar5->vector[0].a;
      if (cRam_? == '\0') {
        ppBStack_1 = &TypeInfo__System__Byte;
        func_?();
        cRam_? = '\x01';
      }
      ppBStack_1 = (Byte__Array__Class **)0x4;
      pBStack_2 = TypeInfo__System__Byte;
      unaff_EDI = func_?();
      uVar10 = 0;
      do {
        switch(uVar10) {
        default:
          fVar11 = fVar6;
          break;
        case 1:
          fVar11 = fVar7;
          break;
        case 2:
          fVar11 = fStack_8;
          break;
        case 3:
          fVar11 = fVar9;
        }
        if (unaff_EDI == 0) goto code_?;
        if (*(uint *)(unaff_EDI + 0xc) <= uVar10) goto code_?;
        *(char *)(uVar10 + 0x10 + unaff_EDI) = (char)(int)(fVar11 * _UNK_?);
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < 4);
      uVar10 = 0;
      do {
        if (*(uint *)(unaff_EDI + 0xc) <= uVar10) goto code_?;
        if (pBVar3 == (Byte__Array *)0x0) goto code_?;
        if (pBVar3->max_length <= uVar10 + uVar4 * 4) goto code_?;
        pBVar3->vector[uVar10 + uVar4 * 4] = *(uint8_t *)(unaff_EDI + 0x10 + uVar10);
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < 4);
      uVar4 = uVar4 + 1;
      pCVar5 = (Color__Array *)pCVar5->vector;
    }
  }
code_?:
  uVar12 = func_?();
  puVar13 = (undefined4 *)((uint)uVar12 | 0xbb);
  uVar14 = *puVar13;
  uVar15 = *puVar13;
  *(uint *)(uVar4 + 0x8b551023) =
       *(uint *)(uVar4 + 0x8b551023) & unaff_EDI + *(int *)(uVar4 + 0xbb1a1023);
  in((ushort)((uint6)uVar12 >> 0x20) & (ushort)uVar14 & (ushort)uVar15);
  ppBStack_1 = (Byte__Array__Class **)0xffffffff;
  pBStack_2 = (Byte__Array__Class *)&DAT_?;
  puStack_16 = (undefined *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (float)&puStack_16;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Security__Cryptography__SHA1CryptoServiceProvider);
    func_?(&TypeInfo__UnityEngine__Texture2D);
    cRam_? = '\x01';
  }
  if (colors != (Color__Array *)0x0) {
    pCVar5 = (Color__Array *)0x0;
    if ((Texture2D__Class *)colors->klass == TypeInfo__UnityEngine__Texture2D) {
      pCVar5 = colors;
    }
    if (pCVar5 == (Color__Array *)0x0) {
      func_?(colors,TypeInfo__UnityEngine__Texture2D);
    }
    else {
      pCVar5 = (Color__Array *)0x0;
      if ((Texture2D__Class *)colors->klass == TypeInfo__UnityEngine__Texture2D) {
        pCVar5 = colors;
      }
      pCVar5 = UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_GetPixels_1
                         ((Texture2D *)pCVar5,0,0,10,10,(MethodInfo *)0x0);
      pBVar3 = TextureHash_ColorsToByteArray(pCVar5,10,(MethodInfo *)0x0);
      this = (SHA1CryptoServiceProvider *)
             func_?(TypeInfo__System__Security__Cryptography__SHA1CryptoServiceProvider);
      mscorlib.dll::System::Security::Cryptography::SHA1CryptoServiceProvider::
      SHA1CryptoServiceProvider__ctor(this,(MethodInfo *)0x0);
      ppBStack_1 = (Byte__Array__Class **)0x0;
      if (this != (SHA1CryptoServiceProvider *)0x0) {
        pBVar3 = mscorlib.dll::System::Security::Cryptography::HashAlgorithm::
                 HashAlgorithm_ComputeHash((HashAlgorithm *)this,pBVar3,(MethodInfo *)0x0);
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pBVar3 = (Byte__Array *)
                 mscorlib.dll::System::Convert::Convert_ToBase64String(pBVar3,(MethodInfo *)0x0);
        if (this == (SHA1CryptoServiceProvider *)0x0) {
          *unaff_FS_OFFSET = fStack_8;
          return pBVar3;
        }
        func_?();
        *unaff_FS_OFFSET = fStack_8;
        return pBVar3;
      }
    }
  }
  uVar14 = func_?();
  func_?(uVar14);
  pcVar17 = (code *)swi(3);
  pBVar3 = (Byte__Array *)(*pcVar17)();
  return pBVar3;
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

