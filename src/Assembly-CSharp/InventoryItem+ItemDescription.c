
/* InventoryItem+ItemDescription(String, String, String) */

void Assembly-CSharp.dll::InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
               (InventoryItem_ItemDescription *this,String *name,String *explanation,
               String *inspirational,MethodInfo *method)

{
  iVar1 = iRam_?;
  (this->fields).name = name;
  (this->fields).cameraPreviewerOffset.x = 0.0;
  (this->fields).cameraPreviewerOffset.y = 0.0;
  (this->fields).cameraPreviewerOffset.z = 0.0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).explanation = explanation;
  iVar7 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).explanation >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).inspirational = inspirational;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).inspirational >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return;
}


/* InventoryItem+ItemDescription(String, String, String, Vector3) */

void Assembly-CSharp.dll::InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor_1
               (InventoryItem_ItemDescription *this,String *name,String *explanation,
               String *inspirational,Vector3 *cameraPreviewerOffset,MethodInfo *method)

{
  iVar1 = iRam_?;
  (this->fields).name = name;
  (this->fields).cameraPreviewerOffset.x = 0.0;
  (this->fields).cameraPreviewerOffset.y = 0.0;
  (this->fields).cameraPreviewerOffset.z = 0.0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).explanation = explanation;
  iVar7 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).explanation >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).inspirational = inspirational;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).inspirational >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  fVar8 = cameraPreviewerOffset->y;
  fVar9 = cameraPreviewerOffset->z;
  (this->fields).cameraPreviewerOffset.x = cameraPreviewerOffset->x;
  (this->fields).cameraPreviewerOffset.y = fVar8;
  (this->fields).cameraPreviewerOffset.z = fVar9;
  return;
}


/* String get_Description() */

String * Assembly-CSharp.dll::InventoryItem+ItemDescription::
         InventoryItem_ItemDescription_get_Description
                   (InventoryItem_ItemDescription *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_u000Au000A);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_u000Au000A;
  pSVar2 = (this->fields).inspirational;
  pSVar3 = (this->fields).explanation;
  pSVar4 = StringLiteral_u000Au000A;
  pSVar5 = pSVar2;
  if (((((pSVar3 != (String *)0x0) && ((pSVar3->fields)._stringLength != 0)) &&
       (pSVar4 = pSVar3, StringLiteral_u000Au000A != (String *)0x0)) &&
      (((StringLiteral_u000Au000A->fields)._stringLength != 0 &&
       (pSVar5 = StringLiteral_u000Au000A, pSVar2 != (String *)0x0)))) &&
     ((pSVar2->fields)._stringLength != 0)) {
    pSVar4 = (String *)
             FUN_?((pSVar3->fields)._stringLength +
                           (StringLiteral_u000Au000A->fields)._stringLength +
                           (pSVar2->fields)._stringLength,StringLiteral_u000Au000A,pSVar2,0);
    if (pSVar4 == (String *)0x0) {
      FUN_?();
      pcVar6 = (code *)swi(3);
      pSVar2 = (String *)(*pcVar6)();
      return pSVar2;
    }
    if ((pSVar3->fields)._stringLength <= (pSVar4->fields)._stringLength) {
      puVar7 = &(pSVar4->fields)._firstChar;
      puVar8 = &(pSVar3->fields)._firstChar;
      uVar9 = (pSVar3->fields)._stringLength * 2;
      if (((ulonglong)((longlong)puVar7 - (longlong)puVar8) < (ulonglong)uVar9) ||
         ((ulonglong)((longlong)puVar8 - (longlong)puVar7) < (ulonglong)uVar9)) {
        FUN_?();
      }
      else {
        mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                  ((uint8_t *)puVar7,(uint8_t *)puVar8,uVar9,(MethodInfo *)0x0);
      }
      iVar10 = (pSVar3->fields)._stringLength;
      if ((pSVar1->fields)._stringLength <= (pSVar4->fields)._stringLength - iVar10) {
        puVar8 = &(pSVar4->fields)._firstChar + iVar10;
        puVar7 = &(pSVar1->fields)._firstChar;
        uVar9 = (pSVar1->fields)._stringLength * 2;
        if (((ulonglong)((longlong)puVar8 - (longlong)puVar7) < (ulonglong)uVar9) ||
           ((ulonglong)((longlong)puVar7 - (longlong)puVar8) < (ulonglong)uVar9)) {
          FUN_?();
        }
        else {
          mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                    ((uint8_t *)puVar8,(uint8_t *)puVar7,uVar9,(MethodInfo *)0x0);
        }
        iVar10 = (pSVar3->fields)._stringLength + (pSVar1->fields)._stringLength;
        if ((pSVar4->fields)._stringLength - iVar10 < (pSVar2->fields)._stringLength) {
          uVar11 = func_?(&TypeInfo__System__IndexOutOfRangeException);
          pIVar12 = (IndexOutOfRangeException *)func_?(uVar11);
          mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                    (pIVar12,(MethodInfo *)0x0);
          uVar11 = func_?(&
                                      MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                                     );
          FUN_?(pIVar12,uVar11);
          pcVar6 = (code *)swi(3);
          pSVar2 = (String *)(*pcVar6)();
          return pSVar2;
        }
        puVar7 = &(pSVar2->fields)._firstChar;
        puVar8 = &(pSVar4->fields)._firstChar + iVar10;
        uVar9 = (pSVar2->fields)._stringLength * 2;
        if (((ulonglong)((longlong)puVar8 - (longlong)puVar7) < (ulonglong)uVar9) ||
           ((ulonglong)((longlong)puVar7 - (longlong)puVar8) < (ulonglong)uVar9)) {
          FUN_?();
        }
        else {
          mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                    ((uint8_t *)puVar8,(uint8_t *)puVar7,uVar9,(MethodInfo *)0x0);
        }
        return pSVar4;
      }
      uVar11 = func_?(&TypeInfo__System__IndexOutOfRangeException);
      pIVar12 = (IndexOutOfRangeException *)func_?(uVar11);
      mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                (pIVar12,(MethodInfo *)0x0);
      uVar11 = func_?(&
                                  MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                                 );
      FUN_?(pIVar12,uVar11);
      pcVar6 = (code *)swi(3);
      pSVar2 = (String *)(*pcVar6)();
      return pSVar2;
    }
    uVar11 = func_?(&TypeInfo__System__IndexOutOfRangeException);
    pIVar12 = (IndexOutOfRangeException *)func_?(uVar11);
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
              (pIVar12,(MethodInfo *)0x0);
    uVar11 = func_?(&
                                MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                               );
    FUN_?(pIVar12,uVar11);
    pcVar6 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar6)();
    return pSVar2;
  }
  if ((pSVar4 == (String *)0x0) || ((pSVar4->fields)._stringLength == 0)) {
    if ((pSVar5 != (String *)0x0) && ((pSVar5->fields)._stringLength != 0)) {
      return pSVar5;
    }
    return (String *)**(undefined8 **)(lRam_? + 0xb8);
  }
  if ((pSVar5 == (String *)0x0) || ((pSVar5->fields)._stringLength == 0)) {
    return pSVar4;
  }
  iVar10 = (pSVar4->fields)._stringLength;
  pSVar2 = (String *)FUN_?((pSVar5->fields)._stringLength + iVar10,pSVar5,0,0,unaff_RDI);
  if (pSVar2 == (String *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar6)();
    return pSVar2;
  }
  if ((pSVar2->fields)._stringLength < (pSVar4->fields)._stringLength) {
    uVar11 = func_?(&TypeInfo__System__IndexOutOfRangeException);
    pIVar12 = (IndexOutOfRangeException *)func_?(uVar11);
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
              (pIVar12,(MethodInfo *)0x0);
    uVar11 = func_?(&
                                MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                               );
    FUN_?(pIVar12,uVar11);
    pcVar6 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar6)();
    return pSVar2;
  }
  puVar7 = &(pSVar2->fields)._firstChar;
  puVar8 = &(pSVar4->fields)._firstChar;
  uVar9 = (pSVar4->fields)._stringLength * 2;
  if (((ulonglong)((longlong)puVar7 - (longlong)puVar8) < (ulonglong)uVar9) ||
     ((ulonglong)((longlong)puVar8 - (longlong)puVar7) < (ulonglong)uVar9)) {
    FUN_?();
  }
  else {
    mscorlib.dll::System::Buffer::Buffer_Memcpy_1
              ((uint8_t *)puVar7,(uint8_t *)puVar8,uVar9,(MethodInfo *)0x0);
  }
  if ((pSVar2->fields)._stringLength - iVar10 < (pSVar5->fields)._stringLength) {
    uVar11 = func_?(&TypeInfo__System__IndexOutOfRangeException);
    pIVar12 = (IndexOutOfRangeException *)func_?(uVar11);
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
              (pIVar12,(MethodInfo *)0x0);
    uVar11 = func_?(&
                                MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                               );
    FUN_?(pIVar12,uVar11);
    pcVar6 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar6)();
    return pSVar2;
  }
  puVar8 = &(pSVar2->fields)._firstChar + iVar10;
  puVar7 = &(pSVar5->fields)._firstChar;
  uVar9 = (pSVar5->fields)._stringLength * 2;
  if (((ulonglong)((longlong)puVar8 - (longlong)puVar7) < (ulonglong)uVar9) ||
     ((ulonglong)((longlong)puVar7 - (longlong)puVar8) < (ulonglong)uVar9)) {
    FUN_?();
  }
  else {
    mscorlib.dll::System::Buffer::Buffer_Memcpy_1
              ((uint8_t *)puVar8,(uint8_t *)puVar7,uVar9,(MethodInfo *)0x0);
  }
  return pSVar2;
}

