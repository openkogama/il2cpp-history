
/* Byte ColorFloatToByte(Single) */

uint8_t Assembly-CSharp.dll::TextureHash::TextureHash_ColorFloatToByte
                  (float colorFloat,MethodInfo *method)

{
  return (uint8_t)(int)(colorFloat * _UNK_?);
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* WARNING (jumptable): Unable to track spacebase fully for stack */
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
      pSVar4 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_2,(MethodInfo *)0x0);
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
      uVar8 = SCARRY4((int)&stack0xffffffdc,0x38);
      func_?();
      goto code_?;
    }
    bVar7 = 0;
    uVar8 = 0;
    if (pBVar1 == (Byte__Array *)0x0) break;
    bVar7 = (uint)IStack_2.m_value < (String *)pBVar1->max_length;
    uVar8 = SBORROW4(IStack_2.m_value,(int)pBVar1->max_length);
    if (!(bool)bVar7) {
code_?:
      func_?();
      break;
    }
    pBVar1->vector[(int)((String *)(IStack_2.m_value + 0x10) + -1)] =
         (uint8_t)(int)(fVar3 * _UNK_?);
    IStack_2.m_value = (int)&((String *)IStack_2.m_value)->klass + 1;
    if (3 < IStack_2.m_value) {
      return pBVar1;
    }
  }
  iVar9 = func_?();
  if ((bool)uVar8) {
    bVar10 = (byte)((uint)iVar9 >> 8);
    cVar11 = *(char *)&unaff_ESI->klass;
    bVar12 = *(char *)&unaff_ESI->klass + bVar10;
    bVar13 = CARRY1(*(byte *)&unaff_ESI->klass,bVar10) || CARRY1(bVar12,bVar7);
    *(byte *)&unaff_ESI->klass = bVar12 + bVar7;
    if (SCARRY1(cVar11,bVar10) == SCARRY1(bVar12,bVar7)) {
      unaff_EBP = CONCAT31((int3)((uint)unaff_EBX >> 8),0x11);
      func_?();
      uRam_? = 1;
      this = unaff_EDI;
      IStack_2.m_value = (int32_t)unaff_ESI;
      goto code_?;
    }
    cVar11 = (char)((uint)extraout_ECX >> 8);
    bVar14 = SCARRY1(cRam_?,cVar11);
    cVar11 = cRam_? + cVar11;
    cRam_? = cVar11 + bVar13;
    if (bVar14 != SCARRY1(cVar11,bVar13)) {
      pcVar15 = (code *)swi(3);
      pBVar1 = (Byte__Array *)(*pcVar15)();
      return pBVar1;
    }
    iVar9 = (int)*(undefined6 *)(&unaff_ESI->klass + iVar9 * 2);
    iVar16 = extraout_ECX;
  }
  else {
    iVar16 = -0x3b7c0010;
    iVar9 = CONCAT31((int3)((uint)iVar9 >> 8),(char)iVar9 + bVar7 + '.');
  }
  *(int *)(unaff_EBX + 0xf530c45) = *(int *)(unaff_EBX + 0xf530c45) + iVar16;
  this = (IndexOutOfRangeException *)&unaff_EDI->monitor;
  pbVar17 = (byte *)((int)&unaff_ESI[5].monitor + 3);
  *pbVar17 = *pbVar17 << 1 |
            (IndexOutOfRangeException__Class *)(&uRam_? + iVar9) < unaff_EDI->klass;
code_?:
  pBVar1 = (Byte__Array *)func_?();
  uVar18 = 0;
  fVar3 = color.r;
  if (color.r == 0.0) {
code_?:
    func_?();
code_?:
    pSVar4 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_2,(MethodInfo *)0x0);
    pSVar5 = (String *)func_?();
    pSVar6 = (String *)func_?();
    pBVar1 = (Byte__Array *)
             mscorlib.dll::System::String::String_Concat_4(pSVar6,pSVar4,pSVar5,(MethodInfo *)0x0)
    ;
    func_?();
    this = (IndexOutOfRangeException *)func_?();
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
              (this,(String *)pBVar1,(MethodInfo *)0x0);
    func_?();
    uVar8 = (undefined1 *)0xffffffc7 < &stack0xffffffe0;
    func_?();
  }
  else {
    while( true ) {
      if (*(int *)((int)color.r + 0xc) <= (int)uVar18) {
        return pBVar1;
      }
      uVar8 = uVar18 < *(uint *)((int)color.r + 0xc);
      if (!(bool)uVar8) break;
      pBVar19 = *(Byte__Array__Class **)((int)fVar3 + 0x1c);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pBVar20 = (Byte__Array__Class *)0x4;
      pBVar21 = (Byte__Array__Class *)&UNK_?;
      pBVar22 = TypeInfo__System__Byte;
      this = (IndexOutOfRangeException *)func_?();
      pSVar4 = (String *)0x0;
      do {
        IStack_2.m_value = (int32_t)pSVar4;
        switch(IStack_2.m_value) {
        case 0:
          pBVar23 = pBVar21;
          break;
        case 1:
          pBVar23 = pBVar22;
          break;
        case 2:
          pBVar23 = pBVar20;
          break;
        case 3:
          pBVar23 = pBVar19;
          break;
        default:
          goto code_?;
        }
        if (this == (IndexOutOfRangeException *)0x0) goto code_?;
        uVar8 = (uint)IStack_2.m_value < (this->fields)._._._message;
        if (!(bool)uVar8) goto code_?;
        *(char *)((int)&this->klass + (int)&((String *)(IStack_2.m_value + 0x10))->klass) =
             (char)(int)((float)pBVar23 * _UNK_?);
        pSVar4 = (String *)((int)&((String *)IStack_2.m_value)->klass + 1);
      } while ((int)pSVar4 < 4);
      pSVar4 = (String *)0x0;
      do {
        uVar8 = pSVar4 < (this->fields)._._._message;
        if (!(bool)uVar8) goto code_?;
        if (pBVar1 == (Byte__Array *)0x0) goto code_?;
        uVar8 = &pSVar4->klass + uVar18 < (undefined1 *)pBVar1->max_length;
        if (!(bool)uVar8) goto code_?;
        *(uint8_t *)((int)&pSVar4->klass + (int)(pBVar1->vector + uVar18 * 4)) =
             *(uint8_t *)((int)&(this->fields)._._._data + (int)pSVar4);
        pSVar4 = (String *)((int)&pSVar4->klass + 1);
      } while ((int)pSVar4 < 4);
      uVar18 = uVar18 + 1;
      fVar3 = (float)((int)fVar3 + 0x10);
    }
  }
code_?:
  uVar24 = func_?();
  uVar25 = (uint)((ulonglong)uVar24 >> 0x20);
  iVar9 = (int)uVar24;
  if (!(bool)uVar8) {
    pcVar26 = (char *)(uVar25 + 0x72a31023 + (int)pBVar1 * 2);
    *pcVar26 = *pcVar26 + (char)uVar18;
    uVar25 = uVar25 & unaff_EBP;
    *(byte *)&this->klass = (byte)&stack0xfffffffc;
  }
  *(char *)(iVar9 + -0x75) =
       *(char *)(iVar9 + -0x75) + (char)uVar25 +
       ((bool)uVar8 && CARRY1((byte)unaff_EBP,(byte)&stack0xfffffffc));
  in((short)uVar25);
  *unaff_FS_OFFSET = &stack0xffffffe8;
  bVar13 = cRam_? == '\0';
  *(undefined1 **)(iVar9 + -0x10) = &stack0xffffffe8;
  if (bVar13) {
    func_?();
    func_?();
    func_?();
    func_?(&TypeInfo__UnityEngine__Texture2D);
    cRam_? = '\x01';
  }
  pTVar27 = TypeInfo__UnityEngine__Texture2D;
  pTVar28 = *(Texture2D **)(iVar9 + 8);
  *(undefined4 *)(iVar9 + -0x18) = 0;
  if (pTVar28 != (Texture2D *)0x0) {
    pTVar29 = (Texture2D *)0x0;
    if (pTVar28->klass == pTVar27) {
      pTVar29 = pTVar28;
    }
    if (pTVar29 == (Texture2D *)0x0) {
      func_?();
    }
    else {
      pTVar29 = (Texture2D *)0x0;
      if (pTVar28->klass == pTVar27) {
        pTVar29 = pTVar28;
      }
      colors = UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_GetPixels_1
                         (pTVar29,0,0,10,10,(MethodInfo *)0x0);
      pBVar1 = TextureHash_ColorsToByteArray(colors,10,(MethodInfo *)0x0);
      this_00 = (SHA1CryptoServiceProvider *)func_?();
      mscorlib.dll::System::Security::Cryptography::SHA1CryptoServiceProvider::
      SHA1CryptoServiceProvider__ctor(this_00,(MethodInfo *)0x0);
      *(SHA1CryptoServiceProvider **)(iVar9 + -0x14) = this_00;
      *(undefined4 *)(iVar9 + -0x24) = 0;
      *(int *)(iVar9 + -0x20) = iVar9 + -0x14;
      *(undefined4 *)(iVar9 + -4) = 0;
      *(undefined1 *)(iVar9 + -4) = 1;
      if (this_00 != (SHA1CryptoServiceProvider *)0x0) {
        pBVar1 = mscorlib.dll::System::Security::Cryptography::HashAlgorithm::
                 HashAlgorithm_ComputeHash((HashAlgorithm *)this_00,pBVar1,(MethodInfo *)0x0);
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pBVar1 = (Byte__Array *)
                 mscorlib.dll::System::Convert::Convert_ToBase64String(pBVar1,(MethodInfo *)0x0);
        *(undefined4 *)(iVar9 + -4) = 0xffffffff;
        *(Byte__Array **)(iVar9 + -0x18) = pBVar1;
        IStack_2.m_value = *(int *)(iVar9 + -0x14);
        if (IStack_2.m_value != 0) {
          func_?();
          *unaff_FS_OFFSET = *(undefined4 *)(iVar9 + -0xc);
          return pBVar1;
        }
        *unaff_FS_OFFSET = *(undefined4 *)(iVar9 + -0xc);
        return pBVar1;
      }
    }
  }
  func_?();
  func_?();
  pcVar15 = (code *)swi(3);
  pBVar1 = (Byte__Array *)(*pcVar15)();
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
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
              (unaff_EDI,(String *)pBVar1,(MethodInfo *)0x0);
    unaff_EBP = func_?();
    uVar6 = (undefined1 *)0xffffffc7 < &stack0xffffffc8;
    IStack_5.m_value = (int32_t)unaff_EDI;
    func_?();
  }
  else {
    while( true ) {
      if ((int)colors->max_length <= (int)uVar2) {
        return pBVar1;
      }
      uVar6 = uVar2 < colors->max_length;
      if (!(bool)uVar6) break;
      fVar7 = pCVar3->vector[0].r;
      fVar8 = pCVar3->vector[0].g;
      fVar9 = pCVar3->vector[0].b;
      fVar10 = pCVar3->vector[0].a;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      unaff_EDI = (IndexOutOfRangeException *)func_?();
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
        uVar6 = (uint)IStack_5.m_value <
                 (IndexOutOfRangeException *)(unaff_EDI->fields)._._._message;
        if (!(bool)uVar6) goto code_?;
        *(char *)((int)&(((IndexOutOfRangeException *)IStack_5.m_value)->fields)._._._className +
                 (int)&(unaff_EDI->fields)._._._className) = (char)(int)(fVar12 * _UNK_?);
        pIVar11 = (IndexOutOfRangeException *)
                  ((int)&((IndexOutOfRangeException *)IStack_5.m_value)->klass + 1);
      } while ((int)pIVar11 < 4);
      pSVar4 = (String *)0x0;
      do {
        uVar6 = pSVar4 < (unaff_EDI->fields)._._._message;
        if (!(bool)uVar6) goto code_?;
        if (pBVar1 == (Byte__Array *)0x0) goto code_?;
        uVar6 = &pSVar4->klass + uVar2 < (undefined1 *)pBVar1->max_length;
        if (!(bool)uVar6) goto code_?;
        *(uint8_t *)((int)&pSVar4->klass + (int)(pBVar1->vector + uVar2 * 4)) =
             *(uint8_t *)((int)&(unaff_EDI->fields)._._._data + (int)pSVar4);
        pSVar4 = (String *)((int)&pSVar4->klass + 1);
      } while ((int)pSVar4 < 4);
      uVar2 = uVar2 + 1;
      pCVar3 = (Color__Array *)pCVar3->vector;
    }
  }
code_?:
  uVar13 = func_?();
  uVar14 = (uint)((ulonglong)uVar13 >> 0x20);
  iVar15 = (int)uVar13;
  if (!(bool)uVar6) {
    pcVar16 = (char *)(uVar14 + 0x72a31023 + (int)pBVar1 * 2);
    *pcVar16 = *pcVar16 + (char)uVar2;
    uVar14 = uVar14 & unaff_EBP;
    *(byte *)&unaff_EDI->klass = (byte)&stack0xfffffffc;
  }
  *(char *)(iVar15 + -0x75) =
       *(char *)(iVar15 + -0x75) + (char)uVar14 +
       ((bool)uVar6 && CARRY1((byte)unaff_EBP,(byte)&stack0xfffffffc));
  in((short)uVar14);
  *unaff_FS_OFFSET = &stack0xffffffd0;
  bVar17 = cRam_? == '\0';
  *(undefined1 **)(iVar15 + -0x10) = &stack0xffffffd0;
  if (bVar17) {
    func_?();
    func_?();
    func_?(&TypeInfo__System__Security__Cryptography__SHA1CryptoServiceProvider);
    func_?(&TypeInfo__UnityEngine__Texture2D);
    cRam_? = '\x01';
  }
  pTVar18 = TypeInfo__UnityEngine__Texture2D;
  pTVar19 = *(Texture2D **)(iVar15 + 8);
  *(undefined4 *)(iVar15 + -0x18) = 0;
  if (pTVar19 != (Texture2D *)0x0) {
    pTVar20 = (Texture2D *)0x0;
    if (pTVar19->klass == pTVar18) {
      pTVar20 = pTVar19;
    }
    if (pTVar20 == (Texture2D *)0x0) {
      func_?();
    }
    else {
      pTVar20 = (Texture2D *)0x0;
      if (pTVar19->klass == pTVar18) {
        pTVar20 = pTVar19;
      }
      pCVar3 = UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_GetPixels_1
                          (pTVar20,0,0,10,10,(MethodInfo *)0x0);
      pBVar1 = TextureHash_ColorsToByteArray(pCVar3,10,(MethodInfo *)0x0);
      this = (SHA1CryptoServiceProvider *)func_?();
      mscorlib.dll::System::Security::Cryptography::SHA1CryptoServiceProvider::
      SHA1CryptoServiceProvider__ctor(this,(MethodInfo *)0x0);
      *(SHA1CryptoServiceProvider **)(iVar15 + -0x14) = this;
      *(undefined4 *)(iVar15 + -0x24) = 0;
      *(int *)(iVar15 + -0x20) = iVar15 + -0x14;
      *(undefined4 *)(iVar15 + -4) = 0;
      *(undefined1 *)(iVar15 + -4) = 1;
      if (this != (SHA1CryptoServiceProvider *)0x0) {
        pBVar1 = mscorlib.dll::System::Security::Cryptography::HashAlgorithm::
                 HashAlgorithm_ComputeHash((HashAlgorithm *)this,pBVar1,(MethodInfo *)0x0);
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pBVar1 = (Byte__Array *)
                 mscorlib.dll::System::Convert::Convert_ToBase64String(pBVar1,(MethodInfo *)0x0);
        *(undefined4 *)(iVar15 + -4) = 0xffffffff;
        *(Byte__Array **)(iVar15 + -0x18) = pBVar1;
        if (*(int *)(iVar15 + -0x14) != 0) {
          func_?();
          *unaff_FS_OFFSET = *(undefined4 *)(iVar15 + -0xc);
          return pBVar1;
        }
        *unaff_FS_OFFSET = *(undefined4 *)(iVar15 + -0xc);
        return pBVar1;
      }
    }
  }
  func_?();
  func_?();
  pcVar21 = (code *)swi(3);
  pBVar1 = (Byte__Array *)(*pcVar21)();
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

