
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pBVar1 = (Byte__Array *)func_?(TypeInfo__System__Byte,4);
  uVar2 = 0;
  while( true ) {
    fVar3 = (float10)func_?(&color,uVar2,0);
    if (pBVar1 == (Byte__Array *)0x0) break;
    if (pBVar1->max_length <= uVar2) goto code_?;
    pBVar1->vector[uVar2] = (uint8_t)(int)((float)fVar3 * _UNK_?);
    uVar2 = uVar2 + 1;
    if (3 < (int)uVar2) {
      return pBVar1;
    }
  }
  func_?(0);
code_?:
  uVar4 = func_?(0,0);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  pBVar1 = (Byte__Array *)(*pcVar5)();
  return pBVar1;
}


/* Byte[] ColorsToByteArray(Color[], Int32) */

Byte__Array *
Assembly-CSharp.dll::TextureHash::TextureHash_ColorsToByteArray
          (Color__Array *colors,int32_t sampleSize,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pBStack_1 = (Byte__Array *)func_?(TypeInfo__System__Byte,sampleSize * sampleSize * 4);
  uVar2 = 0;
  pCVar3 = colors;
  if (colors != (Color__Array *)0x0) {
    while( true ) {
      if ((int)colors->max_length <= (int)uVar2) {
        return pBStack_1;
      }
      if (colors->max_length <= uVar2) break;
      fStack_4 = pCVar3->vector[0].r;
      fStack_5 = pCVar3->vector[0].g;
      fStack_6 = pCVar3->vector[0].b;
      fStack_7 = pCVar3->vector[0].a;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      iVar8 = func_?(TypeInfo__System__Byte,4);
      uVar9 = 0;
      do {
        fVar10 = (float10)func_?(&fStack_4,uVar9,0);
        fStack_11 = (float)fVar10;
        if (iVar8 == 0) goto code_?;
        if (*(uint *)(iVar8 + 0xc) <= uVar9) goto code_?;
        *(char *)(uVar9 + 0x10 + iVar8) = (char)(int)(fStack_11 * _UNK_?);
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < 4);
      iVar8 = 0;
      do {
        uVar12 = func_?(iVar8);
        uStack_13 = CONCAT31(uStack_13._1_3_,uVar12);
        if (pBStack_1 == (Byte__Array *)0x0) goto code_?;
        func_?(iVar8 + uVar2 * 4,uStack_13);
        iVar8 = iVar8 + 1;
      } while (iVar8 < 4);
      uVar2 = uVar2 + 1;
      pCVar3 = (Color__Array *)pCVar3->vector;
    }
code_?:
    uVar14 = func_?(0,0);
    func_?(uVar14);
  }
code_?:
  func_?(0);
  pcVar15 = (code *)swi(3);
  pBVar16 = (Byte__Array *)(*pcVar15)();
  return pBVar16;
}


/* String CreateHashCode(Texture) */

String * Assembly-CSharp.dll::TextureHash::TextureHash_CreateHashCode
                   (Texture *texture,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffac;
  puVar5 = &stack0xffffffac;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  uStack_6 = 0;
  iStack_7 = 0;
  func_?();
  puStack_8 = (undefined4 *)&stack0xffffffac;
  puStack_4 = &stack0xffffffac;
  if (texture != (Texture *)0x0) {
    this = (Texture2D *)0x0;
    if ((Texture2D__Class *)texture->klass == TypeInfo__UnityEngine__Texture2D) {
      this = (Texture2D *)texture;
    }
    if (this == (Texture2D *)0x0) {
      puStack_8 = (undefined4 *)&stack0xffffffac;
      puStack_4 = &stack0xffffffac;
      func_?(texture,TypeInfo__UnityEngine__Texture2D);
    }
    else {
      puStack_8 = (undefined4 *)&stack0xffffffac;
      puStack_4 = &stack0xffffffac;
      pCVar9 = UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_GetPixels_1
                         (this,0,0,10,10,(MethodInfo *)0x0);
      pCStack_10 = pCVar9;
      if (cRam_? == '\0') {
        fStack_11 = (float)_UNK_?;
        func_?();
        cRam_? = '\x01';
      }
      fStack_11 = 5.60519e-43;
      pCStack_12 = (Color__Array *)TypeInfo__System__Byte;
      pBStack_13 = (Byte__Array *)func_?();
      texture = (Texture *)0x0;
      pCVar14 = pCVar9;
      if (pCVar9 != (Color__Array *)0x0) {
        while( true ) {
          pCStack_15 = (Color__Array *)pCVar14->vector;
          if ((int)pCVar9->max_length <= (int)texture) break;
          if ((Texture *)pCVar9->max_length <= texture) goto code_?;
          pIStack_16 = (IDisposable__Class *)((Color *)pCStack_15)->r;
          pCStack_12 = (Color__Array *)pCVar14->vector[0].g;
          fStack_11 = pCVar14->vector[0].b;
          fStack_17 = pCVar14->vector[0].a;
          if (cRam_? == '\0') {
            func_?(_UNK_?);
            cRam_? = '\x01';
          }
          iVar18 = func_?(TypeInfo__System__Byte,4);
          uVar19 = 0;
          do {
            fVar20 = (float10)func_?(&pIStack_16,uVar19,0);
            fStack_21 = (float)fVar20;
            if (iVar18 == 0) goto code_?;
            if (*(uint *)(iVar18 + 0xc) <= uVar19) goto code_?;
            *(char *)(uVar19 + 0x10 + iVar18) = (char)(int)(fStack_21 * _UNK_?);
            uVar19 = uVar19 + 1;
          } while ((int)uVar19 < 4);
          iVar18 = 0;
          do {
            uVar22 = func_?(iVar18);
            uStack_23 = CONCAT31(uStack_23._1_3_,uVar22);
            if (pBStack_13 == (Byte__Array *)0x0) goto code_?;
            func_?(iVar18 + (int)texture * 4,uStack_23);
            iVar18 = iVar18 + 1;
          } while (iVar18 < 4);
          texture = (Texture *)((int)&texture->klass + 1);
          pCVar9 = pCStack_10;
          pCVar14 = pCStack_15;
        }
        pCVar9 = (Color__Array *)
                 func_?(TypeInfo__System__Security__Cryptography__SHA1CryptoServiceProvider
                                );
        pCStack_10 = pCVar9;
        mscorlib.dll::System::Security::Cryptography::SHA1CryptoServiceProvider::
        SHA1CryptoServiceProvider__ctor((SHA1CryptoServiceProvider *)pCVar9,(MethodInfo *)0x0);
        uStack_1 = 0;
        if (pCVar9 != (Color__Array *)0x0) {
          inArray = mscorlib.dll::System::Security::Cryptography::HashAlgorithm::
                    HashAlgorithm_ComputeHash((HashAlgorithm *)pCVar9,pBStack_13,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
            func_?();
          }
          pSVar24 = mscorlib.dll::System::Convert::Convert_ToBase64String(inArray,(MethodInfo *)0x0);
          *puStack_8 = 0x40;
          uStack_1 = 0xffffffff;
          if (pCVar9 != (Color__Array *)0x0) {
            pIStack_16 = TypeInfo__System__IDisposable;
            pCStack_12 = pCVar9;
            func_?();
          }
          if (iStack_7 == 0) {
            *unaff_FS_OFFSET = uStack_3;
            return pSVar24;
          }
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?(0);
code_?:
  uVar25 = func_?(0,0);
  func_?(uVar25);
code_?:
  pCStack_12 = (Color__Array *)0x0;
  pIStack_16 = (IDisposable__Class *)0x0;
  func_?();
  pcVar26 = (code *)swi(3);
  pSVar24 = (String *)(*pcVar26)();
  return pSVar24;
}

