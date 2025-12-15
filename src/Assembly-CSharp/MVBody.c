
/* Void AlignModel(String, Transform, GameObject) */

void Assembly-CSharp.dll::MVBody::MVBody_AlignModel
               (MVBody *this,String *boneName,Transform *bone,GameObject *model,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_LArm);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Torso);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_LLowLeg);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RUpLeg);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Head);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_LUpLeg);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RArm);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RLowLeg);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).bodyObject;
  if ((pMVar1 == (MVBodyObject *)0x0) ||
     (pBVar2 = (pMVar1->fields).bodyData, pBVar2 == (BodyData *)0x0)) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (pBVar2->fields).partMap;
  pVVar4 = (pBVar2->fields).PartBoneSpacePosition;
  if ((this_00 == (Dictionary_2_System_String_System_Int32_ *)0x0) ||
     (IVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Int32Enum]::Dictionary_2_System_Object_System_Int32Enum__get_Item
                         ((Dictionary_2_System_Object_System_Int32Enum_ *)this_00,(Object *)boneName
                          ,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                         ), pVVar4 == (Vector3__Array *)0x0)) goto code_?;
  if ((Int32Enum__Enum)pVVar4->max_length <= IVar5) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = pVVar4->vector[(int)IVar5].x;
  uVar7 = pVVar4->vector[(int)IVar5].y;
  fVar8 = pVVar4->vector[(int)IVar5].z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar9 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar10 = (pQVar9->identityQuaternion).x;
  fVar11 = (pQVar9->identityQuaternion).y;
  fVar12 = (pQVar9->identityQuaternion).z;
  fVar13 = (pQVar9->identityQuaternion).w;
  if (boneName == (String *)0x0) goto code_?;
  iVar14 = (boneName->fields)._stringLength;
  puVar15 = &(boneName->fields)._firstChar;
  uVar16 = 0x811c9dc5;
  for (uVar17 = 0; (int)uVar17 < iVar14; uVar17 = (ulonglong)((int)uVar17 + 1)) {
    if ((longlong)iVar14 <= (longlong)uVar17) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                ((MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar16 = (*puVar15 ^ uVar16) * 0x1000193;
    puVar15 = puVar15 + 1;
  }
  if (uVar16 < 0x7481398c) {
    if (uVar16 < 0x37914e65) {
      if (uVar16 == 0x36055caa) {
        if ((boneName != StringLiteral_LUpLeg) &&
           (((StringLiteral_LUpLeg == (String *)0x0 ||
             ((boneName->fields)._stringLength != (StringLiteral_LUpLeg->fields)._stringLength)) ||
            (bVar18 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                ((uint8_t *)&(boneName->fields)._firstChar,
                                 (uint8_t *)&(StringLiteral_LUpLeg->fields)._firstChar,
                                 (longlong)(boneName->fields)._stringLength * 2,(MethodInfo *)0x0),
            bVar18 == 0)))) goto code_?;
        if (bone == (Transform *)0x0) goto code_?;
        pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                            (&VStack_20,bone,(MethodInfo *)0x0);
        uVar21._0_4_ = pVVar19->x;
        uVar21._4_4_ = pVVar19->y;
        fVar10 = pVVar19->z;
        pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                            (&VStack_20,bone,(MethodInfo *)0x0);
        VStack_22.x = pVVar19->x;
        VStack_22.y = pVVar19->y;
        VStack_22.z = pVVar19->z;
        uStack_23 = 0;
        uStack_24 = 0;
        pcVar3 = pcRam_?;
        VStack_25._0_8_ = uVar21;
        VStack_25.z = fVar10;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar21 = func_?(&UNK_?);
          FUN_?(uVar21,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        if ((uVar16 != 0x37914e64) ||
           ((boneName != StringLiteral_Torso &&
            (((StringLiteral_Torso == (String *)0x0 ||
              ((boneName->fields)._stringLength != (StringLiteral_Torso->fields)._stringLength)) ||
             (bVar18 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                 ((uint8_t *)&(boneName->fields)._firstChar,
                                  (uint8_t *)&(StringLiteral_Torso->fields)._firstChar,
                                  (longlong)(boneName->fields)._stringLength * 2,(MethodInfo *)0x0),
             bVar18 == 0)))))) goto code_?;
        if (bone == (Transform *)0x0) goto code_?;
        pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                            (&VStack_20,bone,(MethodInfo *)0x0);
        VStack_22.x = pVVar19->x;
        VStack_22.y = pVVar19->y;
        fVar11 = (float)((uint)VStack_22.y ^ _UNK_?);
        fVar12 = (float)((uint)VStack_22.x ^ _UNK_?);
        fVar10 = (float)((uint)pVVar19->z ^ _UNK_?);
        pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                            (&VStack_20,bone,(MethodInfo *)0x0);
        VStack_25.y = fVar11;
        VStack_25.x = fVar12;
        VStack_22.x = pVVar19->x;
        VStack_22.y = pVVar19->y;
        VStack_22.z = pVVar19->z;
        uStack_23 = 0;
        uStack_24 = 0;
        pcVar3 = pcRam_?;
        VStack_25.z = fVar10;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar21 = func_?(&UNK_?);
          FUN_?(uVar21,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    else if (uVar16 == 0x5f982365) {
      if ((boneName != StringLiteral_LLowLeg) &&
         (((StringLiteral_LLowLeg == (String *)0x0 ||
           ((boneName->fields)._stringLength != (StringLiteral_LLowLeg->fields)._stringLength)) ||
          (bVar18 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                              ((uint8_t *)&(boneName->fields)._firstChar,
                               (uint8_t *)&(StringLiteral_LLowLeg->fields)._firstChar,
                               (longlong)(boneName->fields)._stringLength * 2,(MethodInfo *)0x0),
          bVar18 == 0)))) goto code_?;
      if (bone == (Transform *)0x0) goto code_?;
      pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                          (&VStack_20,bone,(MethodInfo *)0x0);
      uVar26._0_4_ = pVVar19->x;
      uVar26._4_4_ = pVVar19->y;
      fVar10 = pVVar19->z;
      pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                          (&VStack_20,bone,(MethodInfo *)0x0);
      VStack_22.x = pVVar19->x;
      VStack_22.y = pVVar19->y;
      VStack_22.z = pVVar19->z;
      uStack_23 = 0;
      uStack_24 = 0;
      pcVar3 = pcRam_?;
      VStack_25._0_8_ = uVar26;
      VStack_25.z = fVar10;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar21 = func_?(&UNK_?);
        FUN_?(uVar21,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      if ((uVar16 != 0x7481398b) ||
         ((boneName != StringLiteral_LArm &&
          (((StringLiteral_LArm == (String *)0x0 ||
            ((boneName->fields)._stringLength != (StringLiteral_LArm->fields)._stringLength)) ||
           (bVar18 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                               ((uint8_t *)&(boneName->fields)._firstChar,
                                (uint8_t *)&(StringLiteral_LArm->fields)._firstChar,
                                (longlong)(boneName->fields)._stringLength * 2,(MethodInfo *)0x0),
           bVar18 == 0)))))) goto code_?;
      if (bone == (Transform *)0x0) goto code_?;
      pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                          (&VStack_20,bone,(MethodInfo *)0x0);
      VStack_22.x = pVVar19->x;
      VStack_22.y = pVVar19->y;
      fVar11 = (float)((uint)VStack_22.y ^ _UNK_?);
      fVar12 = (float)((uint)VStack_22.x ^ _UNK_?);
      fVar10 = (float)((uint)pVVar19->z ^ _UNK_?);
      pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                          (&VStack_20,bone,(MethodInfo *)0x0);
      VStack_25.y = fVar11;
      VStack_25.x = fVar12;
      VStack_22.x = pVVar19->x;
      VStack_22.y = pVVar19->y;
      VStack_22.z = pVVar19->z;
      uStack_23 = 0;
      uStack_24 = 0;
      pcVar3 = pcRam_?;
      VStack_25.z = fVar10;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar21 = func_?(&UNK_?);
        FUN_?(uVar21,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
code_?:
    pcRam_? = pcVar3;
    pVVar19 = &VStack_22;
    pVVar27 = &VStack_25;
  }
  else {
    if (uVar16 < 0xa83422c6) {
      if (uVar16 == 0x7597e72c) {
        if ((boneName != StringLiteral_RUpLeg) &&
           (((StringLiteral_RUpLeg == (String *)0x0 ||
             ((boneName->fields)._stringLength != (StringLiteral_RUpLeg->fields)._stringLength)) ||
            (bVar18 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                ((uint8_t *)&(boneName->fields)._firstChar,
                                 (uint8_t *)&(StringLiteral_RUpLeg->fields)._firstChar,
                                 (longlong)(boneName->fields)._stringLength * 2,(MethodInfo *)0x0),
            bVar18 == 0)))) goto code_?;
        if (bone == (Transform *)0x0) goto code_?;
        pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                            (&VStack_20,bone,(MethodInfo *)0x0);
        uVar28._0_4_ = pVVar19->x;
        uVar28._4_4_ = pVVar19->y;
        fVar10 = pVVar19->z;
        pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                            (&VStack_20,bone,(MethodInfo *)0x0);
        VStack_22.x = pVVar19->x;
        VStack_22.y = pVVar19->y;
        VStack_22.z = pVVar19->z;
        uStack_23 = 0;
        uStack_24 = 0;
        pcVar3 = pcRam_?;
        VStack_25._0_8_ = uVar28;
        VStack_25.z = fVar10;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar21 = func_?(&UNK_?);
          FUN_?(uVar21,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        if ((uVar16 != 0xa83422c5) ||
           ((boneName != StringLiteral_RArm &&
            (((StringLiteral_RArm == (String *)0x0 ||
              ((boneName->fields)._stringLength != (StringLiteral_RArm->fields)._stringLength)) ||
             (bVar18 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                 ((uint8_t *)&(boneName->fields)._firstChar,
                                  (uint8_t *)&(StringLiteral_RArm->fields)._firstChar,
                                  (longlong)(boneName->fields)._stringLength * 2,(MethodInfo *)0x0),
             bVar18 == 0)))))) goto code_?;
        if (bone == (Transform *)0x0) goto code_?;
        pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                            (&VStack_20,bone,(MethodInfo *)0x0);
        uVar16 = _UNK_?;
        VStack_22.x = pVVar19->x;
        VStack_22.y = pVVar19->y;
        fVar11 = (float)((uint)VStack_22.y ^ _UNK_?);
        fVar12 = (float)((uint)VStack_22.x ^ _UNK_?);
        fVar10 = (float)((uint)pVVar19->z ^ _UNK_?);
        pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                            (&VStack_20,bone,(MethodInfo *)0x0);
        uVar29 = pVVar19->x;
        uVar30 = pVVar19->y;
        VStack_22.z = (float)((uint)pVVar19->z ^ uVar16);
        VStack_22.y = (float)(uVar30 ^ uVar16);
        VStack_22.x = (float)(uVar29 ^ uVar16);
        VStack_25.y = fVar11;
        VStack_25.x = fVar12;
        uStack_23 = 0;
        uStack_24 = 0;
        pcVar3 = pcRam_?;
        VStack_25.z = fVar10;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar21 = func_?(&UNK_?);
          FUN_?(uVar21,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      goto code_?;
    }
    if (uVar16 != 0xb2972ae3) {
      if ((uVar16 != 0xeb39ce13) ||
         ((boneName != StringLiteral_RLowLeg &&
          (((StringLiteral_RLowLeg == (String *)0x0 ||
            ((boneName->fields)._stringLength != (StringLiteral_RLowLeg->fields)._stringLength)) ||
           (bVar18 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                               ((uint8_t *)&(boneName->fields)._firstChar,
                                (uint8_t *)&(StringLiteral_RLowLeg->fields)._firstChar,
                                (longlong)(boneName->fields)._stringLength * 2,(MethodInfo *)0x0),
           bVar18 == 0)))))) goto code_?;
      if (bone == (Transform *)0x0) goto code_?;
      pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                          (&VStack_20,bone,(MethodInfo *)0x0);
      uVar31._0_4_ = pVVar19->x;
      uVar31._4_4_ = pVVar19->y;
      fVar10 = pVVar19->z;
      pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                          (&VStack_20,bone,(MethodInfo *)0x0);
      VStack_22.x = pVVar19->x;
      VStack_22.y = pVVar19->y;
      VStack_22.z = pVVar19->z;
      uStack_23 = 0;
      uStack_24 = 0;
      pcVar3 = pcRam_?;
      VStack_25._0_8_ = uVar31;
      VStack_25.z = fVar10;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar21 = func_?(&UNK_?);
        FUN_?(uVar21,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      goto code_?;
    }
    if ((boneName != StringLiteral_Head) &&
       (((StringLiteral_Head == (String *)0x0 ||
         ((boneName->fields)._stringLength != (StringLiteral_Head->fields)._stringLength)) ||
        (bVar18 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                            ((uint8_t *)&(boneName->fields)._firstChar,
                             (uint8_t *)&(StringLiteral_Head->fields)._firstChar,
                             (longlong)(boneName->fields)._stringLength * 2,(MethodInfo *)0x0),
        bVar18 == 0)))) goto code_?;
    if (bone == (Transform *)0x0) goto code_?;
    pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                        (&VStack_22,bone,(MethodInfo *)0x0);
    uVar32._0_4_ = pVVar19->x;
    uVar32._4_4_ = pVVar19->y;
    fVar10 = pVVar19->z;
    pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                        (&VStack_20,bone,(MethodInfo *)0x0);
    VStack_25.x = pVVar19->x;
    VStack_25.y = pVVar19->y;
    VStack_25.z = pVVar19->z;
    uStack_23 = 0;
    uStack_24 = 0;
    pcVar3 = pcRam_?;
    VStack_22._0_8_ = uVar32;
    VStack_22.z = fVar10;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar21 = func_?(&UNK_?);
      FUN_?(uVar21,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    pVVar19 = &VStack_25;
    pVVar27 = &VStack_22;
  }
  (*pcRam_?)(pVVar27,pVVar19,&uStack_23);
  fVar10 = (float)uStack_23;
  fVar11 = uStack_23._4_4_;
  fVar12 = (float)uStack_24;
  fVar13 = uStack_24._4_4_;
code_?:
  VStack_20.x = (this->fields).modelScale.x;
  VStack_20.y = (this->fields).modelScale.y;
  fVar33 = (this->fields).modelScale.z;
  fVar34 = (float)uVar7 * VStack_20.y;
  fVar35 = (float)uVar6 * VStack_20.x;
  if ((model != (GameObject *)0x0) &&
     (pTVar36 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (model,(MethodInfo *)0x0), pTVar36 != (Transform *)0x0)) {
    uStack_23 = CONCAT44(fVar11,fVar10);
    uStack_24 = CONCAT44(fVar13,fVar12);
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar37 = (pTVar36->fields)._._.m_CachedPtr;
    if (pvVar37 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar36,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar21 = func_?(&UNK_?);
      FUN_?(uVar21,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(pvVar37);
    pTVar36 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (model,(MethodInfo *)0x0);
    if (pTVar36 != (Transform *)0x0) {
      VStack_22.y = fVar34;
      VStack_22.x = fVar35;
      VStack_22.z = fVar8 * fVar33;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Translate
                (pTVar36,&VStack_22,Space__Enum_Self,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ApplyAccessoryOffset(Single, AccessorySlotType) */

void Assembly-CSharp.dll::MVBody::MVBody_ApplyAccessoryOffset
               (MVBody *this,float yOffset,AccessorySlotType__Enum slot,MethodInfo *method)

{
  if ((this->fields).previewBodyAccessoriesController == (BodyAccessoriesController *)0x0) {
    pBVar1 = (this->fields).bodyAccessoriesController;
    if (pBVar1 == (BodyAccessoriesController *)0x0) goto code_?;
    BodyAccessoriesController::BodyAccessoriesController_ApplyAccessoryOffset
              (pBVar1,yOffset,slot,(MethodInfo *)0x0);
    pBVar1 = (this->fields).bodyAccessoriesController;
  }
  else {
    pBVar1 = (this->fields).previewBodyAccessoriesController;
    if (pBVar1 == (BodyAccessoriesController *)0x0) goto code_?;
    BodyAccessoriesController::BodyAccessoriesController_ApplyAccessoryOffset
              (pBVar1,yOffset,slot,(MethodInfo *)0x0);
    pBVar1 = (this->fields).previewBodyAccessoriesController;
  }
  if (pBVar1 != (BodyAccessoriesController *)0x0) {
    accessoryData = (pBVar1->fields).accessoryData;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pBVar2 = (this->fields).bodyClone;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pBVar2 != (BodyClone *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pBVar2->fields)._._._._.m_CachedPtr != (void *)0x0) {
        pBVar2 = (this->fields).bodyClone;
        if ((pBVar2 == (BodyClone *)0x0) ||
           (pBVar1 = (pBVar2->fields).bodyAccessoriesController,
           pBVar1 == (BodyAccessoriesController *)0x0)) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        BodyAccessoriesController::BodyAccessoriesController_RefreshAccessories
                  (pBVar1,accessoryData,(MethodInfo *)0x0);
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ApplyAccessorySize(Single, AccessorySlotType) */

void Assembly-CSharp.dll::MVBody::MVBody_ApplyAccessorySize
               (MVBody *this,float size,AccessorySlotType__Enum slot,MethodInfo *method)

{
  if ((this->fields).previewBodyAccessoriesController == (BodyAccessoriesController *)0x0) {
    pBVar1 = (this->fields).bodyAccessoriesController;
    if (pBVar1 == (BodyAccessoriesController *)0x0) goto code_?;
    BodyAccessoriesController::BodyAccessoriesController_ApplySizeChange
              (pBVar1,size,slot,(MethodInfo *)0x0);
    pBVar1 = (this->fields).bodyAccessoriesController;
  }
  else {
    pBVar1 = (this->fields).previewBodyAccessoriesController;
    if (pBVar1 == (BodyAccessoriesController *)0x0) goto code_?;
    BodyAccessoriesController::BodyAccessoriesController_ApplySizeChange
              (pBVar1,size,slot,(MethodInfo *)0x0);
    pBVar1 = (this->fields).previewBodyAccessoriesController;
  }
  if (pBVar1 != (BodyAccessoriesController *)0x0) {
    accessoryData = (pBVar1->fields).accessoryData;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pBVar2 = (this->fields).bodyClone;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pBVar2 != (BodyClone *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pBVar2->fields)._._._._.m_CachedPtr != (void *)0x0) {
        pBVar2 = (this->fields).bodyClone;
        if ((pBVar2 == (BodyClone *)0x0) ||
           (pBVar1 = (pBVar2->fields).bodyAccessoriesController,
           pBVar1 == (BodyAccessoriesController *)0x0)) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        BodyAccessoriesController::BodyAccessoriesController_RefreshAccessories
                  (pBVar1,accessoryData,(MethodInfo *)0x0);
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Attach(MVAvatar, Boolean) */

void Assembly-CSharp.dll::MVBody::MVBody_Attach
               (MVBody *this,MVAvatar *mvAvatar,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).hasAvatarBeenAttached = 1;
  if (mvAvatar == (MVAvatar *)0x0) {
    return;
  }
  pMVar1 = (this->fields).bodyObject;
  if (pMVar1 != (MVBodyObject *)0x0) {
    pBVar2 = (pMVar1->fields).boneAnimation;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pBVar2 != (BoneAnimation *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pBVar2->fields)._._._._.m_CachedPtr != (void *)0x0) {
        pMVar1 = (this->fields).bodyObject;
        if ((pMVar1 == (MVBodyObject *)0x0) ||
           (pBVar2 = (pMVar1->fields).boneAnimation, pBVar2 == (BoneAnimation *)0x0))
        goto DAT_?;
        bVar3 = iRam_? != 0;
        (pBVar2->fields).mvAvatar = mvAvatar;
        if (bVar3) {
          uVar4 = (uint)((ulonglong)&(pBVar2->fields).mvAvatar >> 0xc);
          puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar6 = *puVar5;
            LOCK();
            uVar7 = *puVar5;
            if (uVar6 == uVar7) {
              *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (uVar6 != uVar7);
        }
        (pBVar2->fields).isLocal = isLocal;
      }
    }
    pMVar1 = (this->fields).bodyObject;
    if (pMVar1 != (MVBodyObject *)0x0) {
      pAVar8 = (pMVar1->fields).avatarBlinker;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pAVar8 != (AvatarBlinker *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pAVar8->fields)._._._._._.m_CachedPtr != (void *)0x0) {
          pMVar1 = (this->fields).bodyObject;
          if ((pMVar1 == (MVBodyObject *)0x0) ||
             (pAVar8 = (pMVar1->fields).avatarBlinker, pAVar8 == (AvatarBlinker *)0x0))
          goto DAT_?;
          (pAVar8->fields)._.visible = (this->fields).visible;
          pMVar1 = (this->fields).bodyObject;
          if ((pMVar1 == (MVBodyObject *)0x0) ||
             (pAVar8 = (pMVar1->fields).avatarBlinker, pAVar8 == (AvatarBlinker *)0x0))
          goto DAT_?;
          (pAVar8->fields)._.visible = 1;
        }
      }
      MVBody_set_CollidersEnabled(this,0,(MethodInfo *)0x0);
      pMVar1 = (this->fields).bodyObject;
      if ((pMVar1 != (MVBodyObject *)0x0) &&
         (this_00 = (pMVar1->fields).avatarBlobShadowController,
         this_00 != (AvatarBlobShadowController *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)this_00,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void AttachCube(String) */

void Assembly-CSharp.dll::MVBody::MVBody_AttachCube
               (MVBody *this,String *boneName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Renderer>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Collider>__Add_UnityEngine__Collider_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Renderer>__Add_UnityEngine__Renderer_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVCubeModelInstance>__Add_MVCubeModelInstance_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__model_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).bodyObject;
  if ((pMVar1 != (MVBodyObject *)0x0) &&
     (this_00 = (pMVar1->fields).bodyData, this_00 != (BodyData *)0x0)) {
    value = BodyData::BodyData_GetPartBone_1(this_00,boneName,(MethodInfo *)0x0);
    item = MVBody_GetBodyPart(this,boneName,(MethodInfo *)0x0);
    pMVar2 = 
    MethodInfo__System__Collections__Generic__List<MVCubeModelInstance>__Add_MVCubeModelInstance_;
    this_01 = (this->fields).attachedPartModels;
    if (this_01 != (List_1_MVCubeModelInstance_ *)0x0) {
      piVar3 = &(this_01->fields)._version;
      *piVar3 = *piVar3 + 1;
      pMVar4 = (this_01->fields)._items;
      if (pMVar4 != (MVCubeModelInstance__Array *)0x0) {
        uVar5 = (this_01->fields)._size;
        if (uVar5 < (uint)pMVar4->max_length) {
          (this_01->fields)._size = uVar5 + 1;
          FUN_?();
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__AddWithResize
                    ((List_1_System_Object_ *)this_01,(Object *)item,
                     pMVar2->klass->rgctx_data[0xe].method);
        }
        if (item != (MVCubeModelInstance *)0x0) {
          gameObject = (item->fields)._._.gameObject;
          iVar6 = (item->fields)._._._.id;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Number);
            LOCK();
            UNLOCK();
            FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
               field_0x135 & 1) == 0) {
            FUN_?();
          }
          if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
            FUN_?();
          }
          RStack_7._pointer._value = (void *)0x0;
          RStack_7._8_8_ = 0;
          pSVar8 = mscorlib.dll::System::Number::Number_FormatInt32
                              (iVar6,&RStack_7,(IFormatProvider *)0x0,(MethodInfo *)0x0);
          pSVar8 = mscorlib.dll::System::String::String_Concat_5
                              (boneName,StringLiteral__model_,pSVar8,(MethodInfo *)0x0);
          if (gameObject != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_SetName
                      ((Object_1 *)gameObject,pSVar8,(MethodInfo *)0x0);
            iVar6 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                               ((this->fields)._LayerToSetTo_k__BackingField,(MethodInfo *)0x0);
            LayerUtil::LayerUtil_SetLayerRecursively_4(gameObject,iVar6,(MethodInfo *)0x0);
            pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (gameObject,(MethodInfo *)0x0);
            if (pTVar9 != (Transform *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              RStack_7._pointer._value = (void *)0x0;
              RStack_7._8_8_ = RStack_7._8_8_ & 0xffffffff00000000;
              pvVar10 = (pTVar9->fields)._._.m_CachedPtr;
              if (pvVar10 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pcVar11 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
                uVar12 = func_?(&UNK_?);
                FUN_?(uVar12,0);
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pcRam_? = pcVar11;
              (*pcRam_?)(pvVar10);
              *(void **)&(this->fields).modelScale = RStack_7._pointer._value;
              (this->fields).modelScale.z = (float)RStack_7._length;
              pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(gameObject,(MethodInfo *)0x0);
              if (pTVar9 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                          (pTVar9,value,(MethodInfo *)0x0);
                pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform(gameObject,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Vector3);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (pTVar9 == (Transform *)0x0) {
                  FUN_?();
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                RStack_7._pointer._value =
                     *(void **)&TypeInfo__UnityEngine__Vector3->static_fields->zeroVector;
                RStack_7._length =
                     (int32_t)(TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).z;
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar10 = (pTVar9->fields)._._.m_CachedPtr;
                if (pvVar10 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                pcVar11 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
                  uVar12 = func_?(&UNK_?);
                  FUN_?(uVar12,0);
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                pcRam_? = pcVar11;
                (*pcRam_?)(pvVar10);
                pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform(gameObject,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Quaternion);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pQVar13 = TypeInfo__UnityEngine__Quaternion->static_fields;
                if (pTVar9 != (Transform *)0x0) {
                  fStack_14 = (pQVar13->identityQuaternion).x;
                  fStack_15 = (pQVar13->identityQuaternion).y;
                  fStack_16 = (pQVar13->identityQuaternion).z;
                  fStack_17 = (pQVar13->identityQuaternion).w;
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pvVar10 = (pTVar9->fields)._._.m_CachedPtr;
                  if (pvVar10 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  pcVar11 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
                    uVar12 = func_?(&UNK_?);
                    FUN_?(uVar12,0);
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  pcRam_? = pcVar11;
                  (*pcRam_?)(pvVar10);
                  pMVar2 = 
                  UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                  ;
                  pLVar18 = (this->fields).colliders;
                  if ((
                      UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                    FUN_?(
                                 UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                                 );
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                  GameObject_GetComponentInChildren_3
                            (gameObject,0,((pMVar2->field7_0x38).rgctx_data)->method);
                  if (pLVar18 != (List_1_UnityEngine_Collider_ *)0x0) {
                    FUN_?(pLVar18);
                    pMVar2 = 
                    UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Renderer>__
                    ;
                    this_02 = (this->fields).renderers;
                    if ((
                        UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Renderer>__
                        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                      FUN_?(
                                   UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Renderer>__
                                   );
                    }
                    item_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_GetComponentInChildren_3
                                        (gameObject,0,((pMVar2->field7_0x38).rgctx_data)->method);
                    pMVar2 = 
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Renderer>__Add_UnityEngine__Renderer_
                    ;
                    if (this_02 != (List_1_UnityEngine_Renderer_ *)0x0) {
                      piVar3 = &(this_02->fields)._version;
                      *piVar3 = *piVar3 + 1;
                      pRVar19 = (this_02->fields)._items;
                      if (pRVar19 != (Renderer__Array *)0x0) {
                        uVar5 = (this_02->fields)._size;
                        if (uVar5 < (uint)pRVar19->max_length) {
                          (this_02->fields)._size = uVar5 + 1;
                          FUN_?(pRVar19,(longlong)(int)uVar5,item_00);
                        }
                        else {
                          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                          List_1_System_Object__AddWithResize
                                    ((List_1_System_Object_ *)this_02,item_00,
                                     pMVar2->klass->rgctx_data[0xe].method);
                        }
                        MVBody_AlignModel(this,boneName,value,gameObject,(MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                }
                FUN_?();
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void AttachCubes() */

void Assembly-CSharp.dll::MVBody::MVBody_AttachCubes(MVBody *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Renderer>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Renderer>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Renderer>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Renderer>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)0x0;
  LStack_1._index = 0;
  LStack_1._version = 0;
  LStack_1._current = (Object *)0x0;
  pDVar2 = (this->fields)._.childIdMap;
  if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
      lVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    obj = (String *)0x0;
    puStack_9 = (undefined1 *)(ulonglong)(uint)(pDVar2->fields)._version;
    uStack_10 = 2;
    uStack_11 = 0;
    uStack_12 = 0;
    uStack_13 = (ulonglong)puStack_9;
    pSStack_14 = (String *)0x0;
    pOStack_15 = (Object *)0x0;
    uStack_16._0_4_ = 2;
    uStack_16._4_4_ = 0;
    uStack_4 = 0;
    puStack_9 = (undefined1 *)&pDStack_17;
    pDStack_17 = pDVar2;
    while (bVar18 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                   Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                             ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                              &pDStack_17,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                             ), bVar18 != 0) {
      boneName = obj;
      if (pSStack_14 != (String *)0x0) {
        if (pSStack_14->klass == pSRam0000000182dbdde0) {
          boneName = pSStack_14;
        }
        if (boneName == (String *)0x0) {
          FUN_?();
          FUN_?();
          goto code_?;
        }
      }
      MVBody_AttachCube(this,boneName,(MethodInfo *)0x0);
    }
    pLVar19 = (this->fields).renderers;
    if (pLVar19 != (List_1_UnityEngine_Renderer_ *)0x0) {
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
        lVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      puStack_9 = (undefined1 *)((ulonglong)(uint)(pLVar19->fields)._version << 0x20);
      uStack_11 = 0;
      LStack_1._8_8_ = puStack_9;
      LStack_1._current = (Object *)0x0;
      uStack_4 = 0;
      puStack_9 = (undefined1 *)&LStack_1;
      LStack_1._list = (List_1_System_Object_ *)pLVar19;
      while( true ) {
        bVar18 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_1,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Renderer>__MoveNext__
                          );
        obj = (String *)LStack_1._current;
        if (bVar18 == 0) {
          return;
        }
        bVar18 = (this->fields).visible;
        if ((String *)LStack_1._current == (String *)0x0) break;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        SVar20 = *(String__Fields *)((longlong)obj + 0x10);
        if (SVar20 == (String__Fields)0x0) goto code_?;
        pcVar21 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar21 = (code *)FUN_?(&UNK_?), pcVar21 == (code *)0x0))
        goto code_?;
        pcRam_? = pcVar21;
        (*pcRam_?)(SVar20,bVar18);
      }
      goto code_?;
    }
  }
  FUN_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
code_?:
  uVar22 = func_?(&UNK_?);
  FUN_?(uVar22);
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
code_?:
  FUN_?();
  FUN_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* MVWorldObjectClient Clone(Int32, Int32, CloneBookkeeping,
   Dictionary`2[System.Int32,MVWorldObjectClient],
   Dictionary`2[System.Int32,RuntimePrototypeCubeModel]) */

MVWorldObjectClient *
Assembly-CSharp.dll::MVBody::MVBody_Clone
          (MVBody *this,int32_t ownerActorNumber,int32_t cloneGroupId,
          CloneBookkeeping *cloneBookkeeping,
          Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,
          Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *prototypes,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVBody);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVBlueprintBase::MVBlueprintBase_Clone
                     ((MVBlueprintBase *)this,ownerActorNumber,cloneGroupId,cloneBookkeeping,
                      worldObjects,prototypes,(MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    bVar2 = (TypeInfo__MVBody->_1).naturalAligment;
    if ((bVar2 <= (pMVar1->klass->_1).naturalAligment) &&
       ((MVBody__Class *)(pMVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] == TypeInfo__MVBody
       )) {
      *(undefined1 *)((longlong)&pMVar1[1].fields._.scale.y + 1) = 0;
      return pMVar1;
    }
    FUN_?(pMVar1,TypeInfo__MVBody);
    pcVar3 = (code *)swi(3);
    pMVar1 = (MVWorldObjectClient *)(*pcVar3)();
    return pMVar1;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pMVar1 = (MVWorldObjectClient *)(*pcVar3)();
  return pMVar1;
}


/* GameObject CopyByValue() */

GameObject * Assembly-CSharp.dll::MVBody::MVBody_CopyByValue(MVBody *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = (this->fields).visible;
  if ((bVar1 == 0) && ((this->fields).forceHidden == 0)) {
    (this->fields).visible = 1;
    MVBody_UpdateVisibility(this,(MethodInfo *)0x0);
  }
  pGVar2 = (this->fields)._._._.gameObject;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pGVar2 = (GameObject *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pGVar2,
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
  MVBody_CopyMaterialsByValue(this,pGVar2,(MethodInfo *)0x0);
  if (((this->fields).forceHidden == 0) && ((this->fields).visible != bVar1)) {
    (this->fields).visible = bVar1;
    MVBody_UpdateVisibility(this,(MethodInfo *)0x0);
  }
  return pGVar2;
}


/* Void CopyMaterialsByValue(GameObject) */

void Assembly-CSharp.dll::MVBody::MVBody_CopyMaterialsByValue
               (MVBody *this,GameObject *bodyCloneGO,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__Add_UnityEngine__Material_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__ToArray__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Material>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Material);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
  ;
  if (bodyCloneGO != (GameObject *)0x0) {
    if ((
        UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                   );
    }
    p_Var3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentsInChildren_4
                       (bodyCloneGO,0,((pMVar1->field7_0x38).rgctx_data)->method);
    uStackX_10 = 0;
    if (p_Var3 != (_Il2CppFullySharedGenericType__Array *)0x0) {
      pp_Var8 = p_Var3->vector;
      do {
        if ((int)p_Var3->max_length <= (int)uStackX_10) {
          return;
        }
        if ((uint)p_Var3->max_length <= uStackX_10) {
code_?:
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00 = (Renderer *)*pp_Var8;
        this_01 = (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
                   *)FUN_?(
                                  TypeInfo__System__Collections__Generic__List<UnityEngine::Material>
                                  );
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
        __Il2CppFullySharedGenericType]::
        LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                  ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__List__);
        if (this_00 == (Renderer *)0x0) break;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar3 = (this_00->fields)._._.m_CachedPtr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        lVar5 = (*pcRam_?)(pvVar3);
        uVar6 = 0;
        puVar7 = (undefined8 *)(lVar5 + 0x20);
        if (lVar5 == 0) break;
        for (; (int)uVar6 < (int)*(uint *)(lVar5 + 0x18); uVar6 = uVar6 + 1) {
          if (*(uint *)(lVar5 + 0x18) <= uVar6) goto code_?;
          source = (Material *)*puVar7;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (source != (Material *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if ((source->fields)._.m_CachedPtr != (void *)0x0) {
              this_02 = (Material *)FUN_?(TypeInfo__UnityEngine__Material);
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor_1
                        (this_02,source,(MethodInfo *)0x0);
              if (this_01 ==
                  (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
                   *)0x0) goto code_?;
              FUN_?(this_01,this_02);
            }
          }
          puVar7 = puVar7 + 1;
        }
        if (this_01 ==
            (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
             *)0x0) break;
        m = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
            RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
            List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__ToArray
                      (this_01,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__ToArray__
                      );
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterialArray_1
                  (this_00,(Material__Array *)m,(MethodInfo *)0x0);
        uStackX_10 = uStackX_10 + 1;
        pp_Var8 = pp_Var8 + 1;
      } while( true );
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* GameObject CreateClone(Boolean, Boolean) */

GameObject *
Assembly-CSharp.dll::MVBody::MVBody_CreateClone
          (MVBody *this,bool enableAllRenderers,bool hideEquippedItem,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  AvatarAccessory__MethodInfo__UnityEngine__Component__GetComponentsInChildren<AvatarAccessory>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&BodyClone_MethodInfo__UnityEngine__GameObject__AddComponent<BodyClone>__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._._._.gameObject;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pGVar1 = (GameObject *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pGVar1,
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
  if ((pGVar1 != (GameObject *)0x0) &&
     (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar1,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
              (pTVar2,(Transform *)0x0,(MethodInfo *)0x0);
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar1,(MethodInfo *)0x0);
    obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                    (pGVar1,(MethodInfo *)0x0);
    if (obj != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar3 = (obj->fields)._._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        pGVar1 = (GameObject *)(*pcVar4)();
        return pGVar1;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        pGVar1 = (GameObject *)(*pcVar4)();
        return pGVar1;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pvVar3);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_7._0_4_ = (pVVar6->upVector).x;
      uStack_7._4_4_ = (pVVar6->upVector).y;
      fVar8 = (pVVar6->upVector).z * _UNK_? + 0.0;
      if (pTVar2 != (Transform *)0x0) {
        uStack_7 = CONCAT44((float)uStack_7._4_4_ * _UNK_? + 0.0,
                             (float)(undefined4)uStack_7 * _UNK_? + 0.0);
        fStack_9 = fVar8;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar3 = (pTVar2->fields)._._.m_CachedPtr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          pGVar1 = (GameObject *)(*pcVar4)();
          return pGVar1;
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar4 = (code *)swi(3);
          pGVar1 = (GameObject *)(*pcVar4)();
          return pGVar1;
        }
        pcRam_? = pcVar4;
        (*pcRam_?)(pvVar3,&uStack_7);
        pBVar10 = (BodyClone *)
                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                           (pGVar1,
                            BodyClone_MethodInfo__UnityEngine__GameObject__AddComponent<BodyClone>__
                           );
        bVar11 = iRam_? != 0;
        (this->fields).bodyClone = pBVar10;
        if (bVar11) {
          uVar12 = (uint)((ulonglong)&(this->fields).bodyClone >> 0xc);
          uVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
          do {
            uVar14 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
            puVar15 = (ulonglong *)(uVar13 * 8 + 0xADDR);
            LOCK();
            bVar11 = uVar14 == *puVar15;
            if (bVar11) {
              *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
            }
            UNLOCK();
          } while (!bVar11);
        }
        pBVar10 = (this->fields).bodyClone;
        if ((pBVar10 != (BodyClone *)0x0) &&
           (pOVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                      Component_GetComponentsInChildren
                                ((Component *)pBVar10,
                                 AvatarAccessory__MethodInfo__UnityEngine__Component__GetComponentsInChildren<AvatarAccessory>______
                                ), pOVar16 != (Object__Array *)0x0)) {
          uVar12 = (int)pOVar16->max_length - 1;
          if (-1 < (int)uVar12) {
            lVar17 = (longlong)(int)uVar12;
            ppOVar18 = pOVar16->vector + lVar17;
            do {
              if ((uint)pOVar16->max_length <= uVar12) goto code_?;
              pOVar19 = *ppOVar18;
              if (pOVar19 == (Object *)0x0) goto DAT_?;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pOVar20 = pOVar19[1].klass;
              if (pOVar20 == (Object__Class *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException(pOVar19,(MethodInfo *)0x0);
                pcVar4 = (code *)swi(3);
                pGVar1 = (GameObject *)(*pcVar4)();
                return pGVar1;
              }
              pcVar4 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
                uVar5 = func_?(&UNK_?);
                FUN_?(uVar5,0);
                pcVar4 = (code *)swi(3);
                pGVar1 = (GameObject *)(*pcVar4)();
                return pGVar1;
              }
              pcRam_? = pcVar4;
              pvVar3 = (void *)(*pcRam_?)(pOVar20);
              obj_00 = (Object_1 *)
                       UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                       Unmarshal_UnmarshalUnityObject
                                 (pvVar3,
                                  UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                 );
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Object);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                        (obj_00,0.0,(MethodInfo *)0x0);
              uVar12 = uVar12 - 1;
              ppOVar18 = ppOVar18 + -1;
              lVar17 = lVar17 + -1;
            } while (-1 < lVar17);
          }
          pBVar10 = (this->fields).bodyClone;
          bodyWoId = (this->fields)._._._._.id;
          accessoryData = MVBody_GetAccessoryData(this,(MethodInfo *)0x0);
          if (pBVar10 != (BodyClone *)0x0) {
            BodyClone::BodyClone_Initialize(pBVar10,bodyWoId,accessoryData,(MethodInfo *)0x0);
            pMVar21 = 
            UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
            ;
            uVar12 = 0;
            if (enableAllRenderers != 0) {
              if ((
                  UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                  ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                FUN_?(
                             UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                             );
              }
              p_Var12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_GetComponentsInChildren_4
                                  (pGVar1,0,((pMVar21->field7_0x38).rgctx_data)->method);
              if (p_Var12 == (_Il2CppFullySharedGenericType__Array *)0x0) goto DAT_?;
              pp_Var17 = p_Var12->vector;
              for (uVar22 = uVar12; (int)uVar22 < (int)p_Var12->max_length; uVar22 = uVar22 + 1) {
                if ((uint)p_Var12->max_length <= uVar22) goto code_?;
                pOVar19 = (Object *)*pp_Var17;
                if (pOVar19 == (Object *)0x0) goto DAT_?;
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pOVar20 = pOVar19[1].klass;
                if (pOVar20 == (Object__Class *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException(pOVar19,(MethodInfo *)0x0);
                  pcVar4 = (code *)swi(3);
                  pGVar1 = (GameObject *)(*pcVar4)();
                  return pGVar1;
                }
                pcVar4 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
                  uVar5 = func_?(&UNK_?);
                  FUN_?(uVar5,0);
                  pcVar4 = (code *)swi(3);
                  pGVar1 = (GameObject *)(*pcVar4)();
                  return pGVar1;
                }
                pcRam_? = pcVar4;
                (*pcRam_?)(pOVar20);
                pp_Var17 = pp_Var17 + 1;
              }
            }
            pMVar21 = 
            PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______
            ;
            if (hideEquippedItem != 0) {
              if ((
                  PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______
                  ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                FUN_?(
                             PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______
                             );
              }
              p_Var12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_GetComponentsInChildren_4
                                  (pGVar1,0,((pMVar21->field7_0x38).rgctx_data)->method);
              if (p_Var12 == (_Il2CppFullySharedGenericType__Array *)0x0) goto DAT_?;
              pp_Var17 = p_Var12->vector;
              for (; (int)uVar12 < (int)p_Var12->max_length; uVar12 = uVar12 + 1) {
                if ((uint)p_Var12->max_length <= uVar12) {
code_?:
                  FUN_?();
                  pcVar4 = (code *)swi(3);
                  pGVar1 = (GameObject *)(*pcVar4)();
                  return pGVar1;
                }
                pOVar19 = (Object *)*pp_Var17;
                if (pOVar19 == (Object *)0x0) goto DAT_?;
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                               );
                  LOCK();
                  UNLOCK();
                  FUN_?(&
                                UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pOVar20 = pOVar19[1].klass;
                if (pOVar20 == (Object__Class *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException(pOVar19,(MethodInfo *)0x0);
                  pcVar4 = (code *)swi(3);
                  pGVar1 = (GameObject *)(*pcVar4)();
                  return pGVar1;
                }
                pcVar4 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
                  uVar5 = func_?(&UNK_?);
                  FUN_?(uVar5,0);
                  pcVar4 = (code *)swi(3);
                  pGVar1 = (GameObject *)(*pcVar4)();
                  return pGVar1;
                }
                pcRam_? = pcVar4;
                pvVar3 = (void *)(*pcRam_?)(pOVar20);
                pOVar19 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                          Unmarshal_UnmarshalUnityObject
                                    (pvVar3,
                                     UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                    );
                if (pOVar19 == (Object *)0x0) goto DAT_?;
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pOVar20 = pOVar19[1].klass;
                if (pOVar20 == (Object__Class *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException(pOVar19,(MethodInfo *)0x0);
                  pcVar4 = (code *)swi(3);
                  pGVar1 = (GameObject *)(*pcVar4)();
                  return pGVar1;
                }
                pcVar4 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
                  uVar5 = func_?(&UNK_?);
                  FUN_?(uVar5,0);
                  pcVar4 = (code *)swi(3);
                  pGVar1 = (GameObject *)(*pcVar4)();
                  return pGVar1;
                }
                pcRam_? = pcVar4;
                (*pcRam_?)(pOVar20);
                pp_Var17 = pp_Var17 + 1;
              }
            }
            return pGVar1;
          }
          goto DAT_?;
        }
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      pGVar1 = (GameObject *)(*pcVar4)();
      return pGVar1;
    }
  }
DAT_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  pGVar1 = (GameObject *)(*pcVar4)();
  return pGVar1;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVBody::MVBody_Destroy(MVBody *this,MethodInfo *method)

{
  MVWorldObjectClient::MVWorldObjectClient_Destroy((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  if ((this->fields).bodyAccessoriesController != (BodyAccessoriesController *)0x0) {
    BodyAccessoriesController::BodyAccessoriesController_Destroy
              ((this->fields).bodyAccessoriesController,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).bodyClone;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pBVar1 != (BodyClone *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pBVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pBVar1 = (this->fields).bodyClone;
      if ((pBVar1 != (BodyClone *)0x0) &&
         (this_00 = (pBVar1->fields).bodyAccessoriesController,
         this_00 != (BodyAccessoriesController *)0x0)) {
        BodyAccessoriesController::BodyAccessoriesController_Destroy(this_00,(MethodInfo *)0x0);
        pBVar1 = (this->fields).bodyClone;
        if (pBVar1 != (BodyClone *)0x0) {
          obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pBVar1,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                    ((Object_1 *)obj,0.0,(MethodInfo *)0x0);
          return;
        }
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}


/* Void DestroyClone() */

void Assembly-CSharp.dll::MVBody::MVBody_DestroyClone(MVBody *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).bodyClone;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pBVar1 != (BodyClone *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pBVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pBVar1 = (this->fields).bodyClone;
      if ((pBVar1 != (BodyClone *)0x0) &&
         (this_00 = (pBVar1->fields).bodyAccessoriesController,
         this_00 != (BodyAccessoriesController *)0x0)) {
        BodyAccessoriesController::BodyAccessoriesController_Destroy(this_00,(MethodInfo *)0x0);
        pBVar1 = (this->fields).bodyClone;
        if (pBVar1 != (BodyClone *)0x0) {
          obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pBVar1,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                    ((Object_1 *)obj,0.0,(MethodInfo *)0x0);
          return;
        }
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}


/* Void Detach() */

void Assembly-CSharp.dll::MVBody::MVBody_Detach(MVBody *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).bodyObject;
  if ((pMVar1 != (MVBodyObject *)0x0) &&
     (this_00 = (pMVar1->fields).boneAnimation, this_00 != (BoneAnimation *)0x0)) {
    BoneAnimation::BoneAnimation_Detach(this_00,(MethodInfo *)0x0);
    pMVar1 = (this->fields).bodyObject;
    if (pMVar1 != (MVBodyObject *)0x0) {
      pAVar2 = (pMVar1->fields).avatarBlinker;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pAVar2 != (AvatarBlinker *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pAVar2->fields)._._._._._.m_CachedPtr != (void *)0x0) {
          pMVar1 = (this->fields).bodyObject;
          if ((pMVar1 == (MVBodyObject *)0x0) ||
             (pAVar2 = (pMVar1->fields).avatarBlinker, pAVar2 == (AvatarBlinker *)0x0))
          goto code_?;
          (pAVar2->fields)._.visible = 0;
        }
      }
      pMVar1 = (this->fields).bodyObject;
      if ((pMVar1 != (MVBodyObject *)0x0) &&
         (obj = (pMVar1->fields).avatarBlobShadowController,
         obj != (AvatarBlobShadowController *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                        ,0,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (obj == (AvatarBlobShadowController *)0x0) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pvVar4 = (obj->fields)._._._._.m_CachedPtr;
        if (pvVar4 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar4,0);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void DisableBodyBlinker() */

void Assembly-CSharp.dll::MVBody::MVBody_DisableBodyBlinker(MVBody *this,MethodInfo *method)

{
  pMVar1 = (this->fields).bodyObject;
  if ((pMVar1 != (MVBodyObject *)0x0) &&
     (pAVar2 = (pMVar1->fields).avatarBlinker, pAVar2 != (AvatarBlinker *)0x0)) {
    (pAVar2->fields)._.visible = 0;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void EnableBodyBlinker() */

void Assembly-CSharp.dll::MVBody::MVBody_EnableBodyBlinker(MVBody *this,MethodInfo *method)

{
  pMVar1 = (this->fields).bodyObject;
  if ((pMVar1 != (MVBodyObject *)0x0) &&
     (pAVar2 = (pMVar1->fields).avatarBlinker, pAVar2 != (AvatarBlinker *)0x0)) {
    (pAVar2->fields)._.visible = 1;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void EndPreviewAccessory() */

void Assembly-CSharp.dll::MVBody::MVBody_EndPreviewAccessory(MVBody *this,MethodInfo *method)

{
  pBVar1 = (this->fields).previewBodyAccessoriesController;
  if (pBVar1 != (BodyAccessoriesController *)0x0) {
    BodyAccessoriesController::BodyAccessoriesController_Destroy(pBVar1,(MethodInfo *)0x0);
    bVar2 = iRam_? != 0;
    (this->fields).previewBodyAccessoriesController = (BodyAccessoriesController *)0x0;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).previewBodyAccessoriesController >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    pBVar1 = (this->fields).bodyAccessoriesController;
    if (pBVar1 != (BodyAccessoriesController *)0x0) {
      BodyAccessoriesController::BodyAccessoriesController_set_AccessoryMoveOverride
                (pBVar1,1,(MethodInfo *)0x0);
      pBVar1 = (this->fields).bodyAccessoriesController;
      if (pBVar1 != (BodyAccessoriesController *)0x0) {
        accessoryData = (pBVar1->fields).accessoryData;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pBVar7 = (this->fields).bodyClone;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pBVar7 != (BodyClone *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pBVar7->fields)._._._._.m_CachedPtr != (void *)0x0) {
            pBVar7 = (this->fields).bodyClone;
            if ((pBVar7 == (BodyClone *)0x0) ||
               (pBVar1 = (pBVar7->fields).bodyAccessoriesController,
               pBVar1 == (BodyAccessoriesController *)0x0)) {
              FUN_?();
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            BodyAccessoriesController::BodyAccessoriesController_RefreshAccessories
                      (pBVar1,accessoryData,(MethodInfo *)0x0);
          }
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Dictionary`2[System.Object,System.Object] GetAccessoryData() */

Dictionary_2_System_Object_System_Object_ *
Assembly-CSharp.dll::MVBody::MVBody_GetAccessoryData(MVBody *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__BlueprintData);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_d);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._.blueprintData;
  auStackX_8[0] = 4;
  this_00 = (Enum *)FUN_?(TypeInfo__MV__Common__BlueprintData,auStackX_8);
  key = mscorlib.dll::System::Enum::Enum_ToString_2(this_00,StringLiteral_d,(MethodInfo *)0x0);
  if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar2)();
    return pDVar1;
  }
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
           Dictionary_2_System_Object_System_Object__get_Item
                     (pDVar1,(Object *)key,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar3 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((pDVar1->klass->_1).naturalAligment < bVar3) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar1->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      FUN_?(pDVar1,
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
      pcVar2 = (code *)swi(3);
      pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar2)();
      return pDVar1;
    }
  }
  return pDVar1;
}


/* Single GetAccessoryOffset(AccessorySlotType) */

float Assembly-CSharp.dll::MVBody::MVBody_GetAccessoryOffset
                (MVBody *this,AccessorySlotType__Enum slot,MethodInfo *method)

{
  if ((this->fields).previewBodyAccessoriesController == (BodyAccessoriesController *)0x0) {
    pBVar1 = (this->fields).bodyAccessoriesController;
  }
  else {
    pBVar1 = (this->fields).previewBodyAccessoriesController;
  }
  if (pBVar1 != (BodyAccessoriesController *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MV__Common__AvatarAccessoryData);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_d);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar2 = (pBVar1->fields).accessoryData;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Number);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135
        & 1) == 0) {
      FUN_?();
    }
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    aRStack_3[0]._pointer._value = (void *)0x0;
    aRStack_3[0]._length = 0;
    aRStack_3[0]._12_4_ = 0;
    pSVar4 = mscorlib.dll::System::Number::Number_FormatInt32
                       (slot,aRStack_3,(IFormatProvider *)0x0,(MethodInfo *)0x0);
    if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (pDVar2,(Object *)pSVar4,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      auStackX_10[0] = 3;
      this_00 = (Enum *)FUN_?(TypeInfo__MV__Common__AvatarAccessoryData,auStackX_10);
      pSVar4 = mscorlib.dll::System::Enum::Enum_ToString_2
                         (this_00,StringLiteral_d,(MethodInfo *)0x0);
      if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        bVar5 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((pDVar2->klass->_1).naturalAligment < bVar5) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar2->klass->_1).typeHierarchy[(ulonglong)bVar5 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          FUN_?(pDVar2,
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                       );
          pcVar6 = (code *)swi(3);
          fVar7 = (float)(*pcVar6)();
          return fVar7;
        }
        pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (pDVar2,(Object *)pSVar4,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (pOVar8 != (Object *)0x0) {
          if ((pOVar8->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
            return *(float *)&pOVar8[1].klass;
          }
          FUN_?(pOVar8,lRam_?);
          pcVar6 = (code *)swi(3);
          fVar7 = (float)(*pcVar6)();
          return fVar7;
        }
      }
    }
    FUN_?();
    pcVar6 = (code *)swi(3);
    fVar7 = (float)(*pcVar6)();
    return fVar7;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  fVar7 = (float)(*pcVar6)();
  return fVar7;
}


/* Single GetAccessoryScale(AccessorySlotType) */

float Assembly-CSharp.dll::MVBody::MVBody_GetAccessoryScale
                (MVBody *this,AccessorySlotType__Enum slot,MethodInfo *method)

{
  if ((this->fields).previewBodyAccessoriesController == (BodyAccessoriesController *)0x0) {
    pBVar1 = (this->fields).bodyAccessoriesController;
  }
  else {
    pBVar1 = (this->fields).previewBodyAccessoriesController;
  }
  if (pBVar1 != (BodyAccessoriesController *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MV__Common__AvatarAccessoryData);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_d);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar2 = (pBVar1->fields).accessoryData;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Number);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135
        & 1) == 0) {
      FUN_?();
    }
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    aRStack_3[0]._pointer._value = (void *)0x0;
    aRStack_3[0]._length = 0;
    aRStack_3[0]._12_4_ = 0;
    pSVar4 = mscorlib.dll::System::Number::Number_FormatInt32
                       (slot,aRStack_3,(IFormatProvider *)0x0,(MethodInfo *)0x0);
    if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (pDVar2,(Object *)pSVar4,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      auStackX_10[0] = 5;
      this_00 = (Enum *)FUN_?(TypeInfo__MV__Common__AvatarAccessoryData,auStackX_10);
      pSVar4 = mscorlib.dll::System::Enum::Enum_ToString_2
                         (this_00,StringLiteral_d,(MethodInfo *)0x0);
      if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        bVar5 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((pDVar2->klass->_1).naturalAligment < bVar5) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar2->klass->_1).typeHierarchy[(ulonglong)bVar5 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          FUN_?(pDVar2,
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                       );
          pcVar6 = (code *)swi(3);
          fVar7 = (float)(*pcVar6)();
          return fVar7;
        }
        pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (pDVar2,(Object *)pSVar4,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (pOVar8 != (Object *)0x0) {
          if ((pOVar8->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
            return *(float *)&pOVar8[1].klass;
          }
          FUN_?(pOVar8,lRam_?);
          pcVar6 = (code *)swi(3);
          fVar7 = (float)(*pcVar6)();
          return fVar7;
        }
      }
    }
    FUN_?();
    pcVar6 = (code *)swi(3);
    fVar7 = (float)(*pcVar6)();
    return fVar7;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  fVar7 = (float)(*pcVar6)();
  return fVar7;
}


/* MVCubeModelInstance GetBodyPart(String) */

MVCubeModelInstance *
Assembly-CSharp.dll::MVBody::MVBody_GetBodyPart(MVBody *this,String *part,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVCubeModelInstance);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (MVCubeModelInstance *)
           MVBlueprintBase::MVBlueprintBase_GetChild((MVBlueprintBase *)this,part,(MethodInfo *)0x0)
  ;
  pMVar2 = (MVCubeModelInstance *)0x0;
  if (pMVar1 != (MVCubeModelInstance *)0x0) {
    bVar3 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
    if (((pMVar1->klass->_1).naturalAligment < bVar3) ||
       (bVar4 = true,
       (MVCubeModelInstance__Class *)(pMVar1->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
       TypeInfo__MVCubeModelInstance)) {
      bVar4 = false;
    }
    if (bVar4) {
      pMVar2 = pMVar1;
    }
  }
  return pMVar2;
}


/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::MVBody::MVBody_GetLocalBounds
                   (Bounds *__return_storage_ptr__,MVBody *this,BoundsContext__Enum boundsContext,
                   MethodInfo *method)

{
  uVar1 = _UNK_?;
  uVar2 = (ulonglong)_UNK_?;
  (__return_storage_ptr__->m_Center).x = (float)(int)(uVar2 << 0x20);
  (__return_storage_ptr__->m_Center).y = (float)(int)((uVar2 << 0x20) >> 0x20);
  (__return_storage_ptr__->m_Center).z = 0.0;
  fVar3 = _UNK_?;
  (__return_storage_ptr__->m_Extents).x = (float)_UNK_?;
  (__return_storage_ptr__->m_Extents).y = (float)uVar1;
  (__return_storage_ptr__->m_Extents).z = fVar3;
  return __return_storage_ptr__;
}


/* IModelingConstraint GetModelConstaint(MVCubeModelInstance) */

IModelingConstraint *
Assembly-CSharp.dll::MVBody::MVBody_GetModelConstaint
          (MVBody *this,MVCubeModelInstance *cubeModel,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_IModelingConstraint>__Add_int__IModelingConstraint_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_IModelingConstraint>__TryGetValue_int__IModelingConstraint__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ModelingBoxCountConstraint);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields)._.idChildMap;
  key = (Object *)0x0;
  pMStackX_20 = (ModelingBoxConstraint *)0x0;
  if (cubeModel != (MVCubeModelInstance *)0x0) {
    IStackX_8._0_4_ = (cubeModel->fields)._._._.id;
    pOVar1 = (Object *)FUN_?(uRam_?,&IStackX_8);
    if (this_00 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        0x0) {
      iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
               UIElements::StyleComplexSelector+PseudoStateData]::
               Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                         (this_00,pOVar1,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          ->klass->rgctx_data[0x21].method);
      if (iVar2 < 0) {
        return (IModelingConstraint *)pMStackX_20;
      }
      pDVar3 = (Dictionary_2_System_Int32_System_Object_ *)(this->fields).constraints;
      if (pDVar3 != (Dictionary_2_System_Int32_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryGetValue
                  (pDVar3,(cubeModel->fields)._._._.id,(Object **)&pMStackX_20,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_IModelingConstraint>__TryGetValue_int__IModelingConstraint__
                  );
        if (pMStackX_20 != (ModelingBoxConstraint *)0x0) {
          return (IModelingConstraint *)pMStackX_20;
        }
        IStackX_8._0_4_ = (cubeModel->fields)._._._.id;
        this_01 = (this->fields)._.idChildMap;
        pOVar1 = (Object *)FUN_?(uRam_?,&IStackX_8);
        if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__get_Item
                              (this_01,pOVar1,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
          if (pOVar1 != (Object *)0x0) {
            if (pOVar1->klass == pORam0000000182dbdde0) {
              key = pOVar1;
            }
            if (key == (Object *)0x0) {
              FUN_?(pOVar1);
              pcVar4 = (code *)swi(3);
              pIVar5 = (IModelingConstraint *)(*pcVar4)();
              return pIVar5;
            }
          }
          pMVar6 = (this->fields).bodyObject;
          if ((pMVar6 != (MVBodyObject *)0x0) &&
             (pBVar7 = (pMVar6->fields).bodyData, pBVar7 != (BodyData *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pDVar8 = (pBVar7->fields).partMap;
            pOVar9 = (pBVar7->fields).PartConstraintsBoxMin;
            if ((pDVar8 != (Dictionary_2_System_String_System_Int32_ *)0x0) &&
               (IVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Object,System::Int32Enum]::
                         Dictionary_2_System_Object_System_Int32Enum__get_Item
                                   ((Dictionary_2_System_Object_System_Int32Enum_ *)pDVar8,key,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                                   ), pOVar9 != (ObscuredFloat__Array__Array *)0x0)) {
              if ((Int32Enum__Enum)pOVar9->max_length <= IVar10) {
code_?:
                FUN_?();
                pcVar4 = (code *)swi(3);
                pIVar5 = (IModelingConstraint *)(*pcVar4)();
                return pIVar5;
              }
              pVVar11 = BodyData::BodyData_GetVectorFromObscuredFloatArray
                                  (&VStack_12,pOVar9->vector[(int)IVar10],(MethodInfo *)0x0);
              pMVar6 = (this->fields).bodyObject;
              uStack_13._0_4_ = pVVar11->x;
              uStack_13._4_4_ = pVVar11->y;
              fVar14 = pVVar11->z;
              if ((pMVar6 != (MVBodyObject *)0x0) &&
                 (pBVar7 = (pMVar6->fields).bodyData, pBVar7 != (BodyData *)0x0)) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pDVar8 = (pBVar7->fields).partMap;
                pOVar9 = (pBVar7->fields).PartConstraintsBoxMax;
                if ((pDVar8 != (Dictionary_2_System_String_System_Int32_ *)0x0) &&
                   (IVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Object,System::Int32Enum]::
                             Dictionary_2_System_Object_System_Int32Enum__get_Item
                                       ((Dictionary_2_System_Object_System_Int32Enum_ *)pDVar8,key,
                                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                                       ), pOVar9 != (ObscuredFloat__Array__Array *)0x0)) {
                  if ((Int32Enum__Enum)pOVar9->max_length <= IVar10) goto code_?;
                  pVVar11 = BodyData::BodyData_GetVectorFromObscuredFloatArray
                                      ((Vector3 *)aOStack_15,pOVar9->vector[(int)IVar10],
                                       (MethodInfo *)0x0);
                  pMVar6 = (this->fields).bodyObject;
                  VStack_12.x = pVVar11->x;
                  VStack_12.y = pVVar11->y;
                  fVar16 = pVVar11->z;
                  if ((pMVar6 != (MVBodyObject *)0x0) &&
                     (pBVar7 = (pMVar6->fields).bodyData, pBVar7 != (BodyData *)0x0)) {
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                                   );
                      LOCK();
                      UNLOCK();
                      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pDVar8 = (pBVar7->fields).partMap;
                    pOVar17 = (pBVar7->fields).PartConstraintsMinCubes;
                    if ((pDVar8 != (Dictionary_2_System_String_System_Int32_ *)0x0) &&
                       (IVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                 Object,System::Int32Enum]::
                                 Dictionary_2_System_Object_System_Int32Enum__get_Item
                                           ((Dictionary_2_System_Object_System_Int32Enum_ *)pDVar8,
                                            key,
                                            MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                                           ), pOVar17 != (ObscuredInt__Array *)0x0)) {
                      if ((Int32Enum__Enum)pOVar17->max_length <= IVar10) goto code_?;
                      pOVar18 = pOVar17->vector + (int)IVar10;
                      uVar19._0_4_ = pOVar18->currentCryptoKey;
                      uVar19._4_4_ = pOVar18->hiddenValue;
                      uVar20._0_4_ = pOVar18->fakeValue;
                      uVar20._4_1_ = pOVar18->inited;
                      uVar20._5_3_ = *(undefined3 *)&pOVar18->field_0xd;
                      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                                   field_0x1c == 0) {
                        FUN_?();
                      }
                      aOStack_15[0]._0_8_ = uVar19;
                      aOStack_15[0]._8_8_ = uVar20;
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                                   field_0x1c == 0) {
                        FUN_?();
                      }
                      iVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                               ObscuredInt::ObscuredInt_InternalDecrypt
                                         (aOStack_15,(MethodInfo *)0x0);
                      this_02 = (ModelingBoxConstraint *)
                                FUN_?(TypeInfo__ModelingBoxCountConstraint);
                      uVar19 = 0;
                      IStackX_8._0_4_ = CONCAT22((short)(int)VStack_12.y,(short)(int)VStack_12.x);
                      IStackX_8.z = (int16_t)(int)fVar16;
                      uStackX_10 = CONCAT22((short)(int)uStack_13._4_4_,(short)(int)(float)uStack_13
                                           );
                      VStack_12.y._0_2_ = (short)(int)fVar14;
                      VStack_12.x = (float)uStackX_10;
                      ModelingBoxConstraint::ModelingBoxConstraint__ctor_1
                                (this_02,(IntVector *)&VStack_12,&IStackX_8,(MethodInfo *)0x0);
                      bVar21 = iRam_? != 0;
                      this_02[1].klass = (ModelingBoxConstraint__Class *)cubeModel;
                      if (bVar21) {
                        uVar19 = 0xADDR;
                        uVar22 = (uint)((ulonglong)(this_02 + 1) >> 0xc);
                        uVar23 = (ulonglong)((uVar22 & 0x1fffff) >> 6);
                        do {
                          uVar24 = *(ulonglong *)(uVar23 * 8 + 0xADDR);
                          puVar25 = (ulonglong *)(uVar23 * 8 + 0xADDR);
                          LOCK();
                          bVar21 = uVar24 == *puVar25;
                          if (bVar21) {
                            *puVar25 = uVar24 | 1L << (uVar22 & 0x3f);
                          }
                          UNLOCK();
                        } while (!bVar21);
                      }
                      *(int32_t *)&this_02[1].monitor = iVar2;
                      pDVar3 = (Dictionary_2_System_Int32_System_Object_ *)
                               (this->fields).constraints;
                      pMStackX_20 = this_02;
                      if (pDVar3 != (Dictionary_2_System_Int32_System_Object_ *)0x0) {
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,System::Object]::Dictionary_2_System_Int32_System_Object__TryInsert
                                  (pDVar3,(cubeModel->fields)._._._.id,(Object *)this_02,
                                   (InsertionBehavior__Enum)
                                   CONCAT71((int7)((ulonglong)uVar19 >> 8),2),
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_IModelingConstraint>__Add_int__IModelingConstraint_
                                   ->klass->rgctx_data[0x22].method);
                        return (IModelingConstraint *)pMStackX_20;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pIVar5 = (IModelingConstraint *)(*pcVar4)();
  return pIVar5;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVBody::MVBody_Initialize(MVBody *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Trying_to_initialize_body_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__more_than_once);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).initialized != 0) {
    pSVar1 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&this->fields,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_5
                        (StringLiteral_Trying_to_initialize_body_,pSVar1,
                         StringLiteral__more_than_once,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar2 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar2 == (ILogger_1 *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    LStack_4._current = (Object *)pSVar1;
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar2,2);
    return;
  }
  MVBlueprintBase::MVBlueprintBase_Initialize((MVBlueprintBase *)this,(MethodInfo *)0x0);
  pMVar5 = 
  UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
  ;
  this_00 = (this->fields)._._._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    if ((
        UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                   );
    }
    pMVar6 = (MeshFilter__Array *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
              GameObject_GetComponentsInChildren_4
                        (this_00,0,((pMVar5->field7_0x38).rgctx_data)->method);
    pMVar7 = (this->fields).bodyObject;
    if ((pMVar7 != (MVBodyObject *)0x0) &&
       (pAVar8 = (pMVar7->fields).avatarBlinker, pAVar8 != (AvatarBlinker *)0x0)) {
      bVar9 = iRam_? != 0;
      (pAVar8->fields)._.meshFilters = pMVar6;
      if (bVar9) {
        uVar10 = (uint)((ulonglong)&(pAVar8->fields)._.meshFilters >> 0xc);
        puVar11 = (ulonglong *)((ulonglong)((uVar10 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar12 = *puVar11;
          LOCK();
          uVar13 = *puVar11;
          if (uVar12 == uVar13) {
            *puVar11 = uVar12 | 1L << (uVar10 & 0x3f);
          }
          UNLOCK();
        } while (uVar12 != uVar13);
      }
      MVBody_InitializeCommon(this,(MethodInfo *)0x0);
      if ((this->fields).hasAvatarBeenAttached == 0) {
        MVBody_set_CollidersEnabled(this,1,(MethodInfo *)0x0);
        pMVar7 = (this->fields).bodyObject;
        if ((pMVar7 == (MVBodyObject *)0x0) ||
           (pAVar14 = (pMVar7->fields).avatarBlobShadowController,
           pAVar14 == (AvatarBlobShadowController *)0x0)) goto DAT_?;
        bVar15 = 0;
      }
      else {
        MVBody_set_CollidersEnabled(this,0,(MethodInfo *)0x0);
        pMVar7 = (this->fields).bodyObject;
        if ((pMVar7 == (MVBodyObject *)0x0) ||
           (pAVar14 = (pMVar7->fields).avatarBlobShadowController,
           pAVar14 == (AvatarBlobShadowController *)0x0)) goto DAT_?;
        bVar15 = 1;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)pAVar14,bVar15,(MethodInfo *)0x0);
      (this->fields).initialized = 1;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Renderer>__Dispose__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Renderer>__MoveNext__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Renderer>__get_Current__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Renderer>__GetEnumerator__
                     );
        LOCK();
        UNLOCK();
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pLVar16 = (this->fields).renderers;
      if (pLVar16 != (List_1_UnityEngine_Renderer_ *)0x0) {
        if (iRam_? != 0) {
          uVar10 = (uint)((ulonglong)&puStack_17 >> 0xc);
          puVar11 = (ulonglong *)((ulonglong)((uVar10 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar12 = *puVar11;
            LOCK();
            uVar13 = *puVar11;
            if (uVar12 == uVar13) {
              *puVar11 = uVar12 | 1L << (ulonglong)(uVar10 & 0x3f);
            }
            UNLOCK();
          } while (uVar12 != uVar13);
        }
        puStack_18 = (undefined1 *)((ulonglong)(uint)(pLVar16->fields)._version << 0x20);
        puStack_19 = (undefined *)0x0;
        LStack_4._8_8_ = puStack_18;
        LStack_4._current = (Object *)0x0;
        puStack_17 = (undefined *)0x0;
        puStack_18 = (undefined1 *)&LStack_4;
        LStack_4._list = (List_1_System_Object_ *)pLVar16;
        while (bVar15 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                       Object]::List_1_T_Enumerator_System_Object__MoveNext
                                 (&LStack_4,
                                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Renderer>__MoveNext__
                                 ), pAVar8 = (AvatarBlinker *)LStack_4._current, bVar15 != 0) {
          bVar15 = (this->fields).visible;
          if ((AvatarBlinker *)LStack_4._current == (AvatarBlinker *)0x0)
          goto code_?;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar20 = (((AvatarBlinker__Fields *)((longlong)pAVar8 + 0x10))->_)._._._._.m_CachedPtr;
          if (pvVar20 == (void *)0x0) goto code_?;
          pcVar3 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0))
          goto code_?;
          pcRam_? = pcVar3;
          (*pcRam_?)(pvVar20,bVar15);
          unaff_RDI = pAVar8;
        }
        if ((this->fields).shadowVisible != 0) {
          pMVar7 = (this->fields).bodyObject;
          if (pMVar7 == (MVBodyObject *)0x0) goto code_?;
          unaff_RDI = (AvatarBlinker *)(pMVar7->fields).avatarBlobShadowController;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (unaff_RDI != (AvatarBlinker *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if ((unaff_RDI->fields)._._._._._.m_CachedPtr != (void *)0x0) {
              pMVar7 = (this->fields).bodyObject;
              if ((pMVar7 == (MVBodyObject *)0x0) ||
                 (pAVar14 = (pMVar7->fields).avatarBlobShadowController,
                 pAVar14 == (AvatarBlobShadowController *)0x0)) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                        ((Behaviour *)pAVar14,(this->fields).visible,(MethodInfo *)0x0);
            }
          }
        }
        pMVar7 = (this->fields).bodyObject;
        if (pMVar7 != (MVBodyObject *)0x0) {
          unaff_RDI = (pMVar7->fields).avatarBlinker;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (unaff_RDI != (AvatarBlinker *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if ((unaff_RDI->fields)._._._._._.m_CachedPtr != (void *)0x0) {
              pMVar7 = (this->fields).bodyObject;
              if ((pMVar7 == (MVBodyObject *)0x0) ||
                 (pAVar8 = (pMVar7->fields).avatarBlinker, pAVar8 == (AvatarBlinker *)0x0))
              goto code_?;
              (pAVar8->fields)._.visible = (this->fields).visible;
            }
          }
          this_01 = (this->fields).bodyAccessoriesController;
          if (this_01 != (BodyAccessoriesController *)0x0) {
            BodyAccessoriesController::BodyAccessoriesController_UpdateAccessoryVisibility
                      (this_01,(this->fields).visible,(MethodInfo *)0x0);
            return;
          }
        }
      }
code_?:
      FUN_?();
      pAVar8 = unaff_RDI;
code_?:
      uVar21 = func_?(&UNK_?);
      FUN_?(uVar21);
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar8,(MethodInfo *)0x0);
code_?:
      FUN_?();
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
DAT_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void InitializeCommon() */

void Assembly-CSharp.dll::MVBody::MVBody_InitializeCommon(MVBody *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BodyAccessoriesController);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVBody_AttachCubes(this,(MethodInfo *)0x0);
  pMVar1 = (this->fields).bodyObject;
  bodyWoId = (this->fields)._._._._.id;
  if (pMVar1 != (MVBodyObject *)0x0) {
    bodyData = (pMVar1->fields).bodyData;
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)FUN_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::UIR::UIRenderDevice+DisableForceGammaMaterial]::
    Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    isVisible = (this->fields).visible;
    pBVar2 = (BodyAccessoriesController *)FUN_?(TypeInfo__BodyAccessoriesController);
    BodyAccessoriesController::BodyAccessoriesController__ctor
              (pBVar2,bodyWoId,bodyData,(Dictionary_2_System_Object_System_Object_ *)this_00,
               isVisible,(MethodInfo *)0x0);
    bVar3 = iRam_? != 0;
    (this->fields).bodyAccessoriesController = pBVar2;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).bodyAccessoriesController >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
    pBVar2 = (this->fields).bodyAccessoriesController;
    accessoryData = MVBody_GetAccessoryData(this,(MethodInfo *)0x0);
    if (pBVar2 != (BodyAccessoriesController *)0x0) {
      BodyAccessoriesController::BodyAccessoriesController_RefreshAccessories
                (pBVar2,accessoryData,(MethodInfo *)0x0);
      pBVar2 = (this->fields).bodyAccessoriesController;
      if (pBVar2 != (BodyAccessoriesController *)0x0) {
        MVBody_UpdateBodyClone(this,(pBVar2->fields).accessoryData,(MethodInfo *)0x0);
        pMVar1 = (this->fields).bodyObject;
        if ((pMVar1 != (MVBodyObject *)0x0) &&
           (obj = (pMVar1->fields).boneAnimation, obj != (BoneAnimation *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                          ,1,0);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (obj == (BoneAnimation *)0x0) {
            FUN_?();
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pvVar9 = (obj->fields)._._._._.m_CachedPtr;
          if (pvVar9 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pcVar8 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
            uVar10 = func_?(&UNK_?);
            FUN_?(uVar10,0);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pcRam_? = pcVar8;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)(pvVar9,1);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void InitializeHealth(Single) */

void Assembly-CSharp.dll::MVBody::MVBody_InitializeHealth
               (MVBody *this,float currentHealthAmount,MethodInfo *method)

{
  pMVar1 = (this->fields).bodyObject;
  if ((pMVar1 != (MVBodyObject *)0x0) &&
     (pAVar2 = (pMVar1->fields).avatarBlinker, pAVar2 != (AvatarBlinker *)0x0)) {
    (pAVar2->fields).previousBlinkHealth = currentHealthAmount;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVBody::MVBody_InitializeInventory(MVBody *this,MethodInfo *method)

{
  MVGroup::MVGroup_InitializeInventory((MVGroup *)this,(MethodInfo *)0x0);
  MVBody_InitializeCommon(this,(MethodInfo *)0x0);
  MVBody_set_CollidersEnabled(this,0,(MethodInfo *)0x0);
  pMVar1 = (this->fields).bodyObject;
  if ((pMVar1 == (MVBodyObject *)0x0) ||
     (obj = (pMVar1->fields).avatarBlobShadowController, obj == (AvatarBlobShadowController *)0x0))
  {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                  ,0,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (AvatarBlobShadowController *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar3 = (obj->fields)._._._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar3,0);
  return;
}


/* Void InitializeShield(Single) */

void Assembly-CSharp.dll::MVBody::MVBody_InitializeShield
               (MVBody *this,float currentShieldAmount,MethodInfo *method)

{
  pMVar1 = (this->fields).bodyObject;
  if ((pMVar1 != (MVBodyObject *)0x0) &&
     (pAVar2 = (pMVar1->fields).avatarBlinker, pAVar2 != (AvatarBlinker *)0x0)) {
    (pAVar2->fields).previousBlinkShield = currentShieldAmount;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean IsAccessoryEquipped(Int32) */

bool Assembly-CSharp.dll::MVBody::MVBody_IsAccessoryEquipped
               (MVBody *this,int32_t streamingAssetId,MethodInfo *method)

{
  pBVar1 = (this->fields).bodyAccessoriesController;
  if (pBVar1 == (BodyAccessoriesController *)0x0) {
    auStack_2._8_8_ = &UNK_?;
    FUN_?();
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__AvatarAccessoryData);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_d);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((pBVar1->fields).accessoryData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    bVar4 = 0;
  }
  else {
    pDStack_5 = (pBVar1->fields).accessoryData;
    uStack_6 = 0;
    uStack_7 = 0;
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)&pDStack_5 >> 0xc);
      puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar10 = *puVar9;
        LOCK();
        uVar11 = *puVar9;
        if (uVar10 == uVar11) {
          *puVar9 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (uVar10 != uVar11);
    }
    uStack_12 = (ulonglong)(uint)(pDStack_5->fields)._version;
    uStack_13 = 2;
    auStack_2._8_8_ = uStack_12;
    pOStack_14 = (Object *)0x0;
    pDStack_15 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    uStack_16._0_4_ = 2;
    uStack_16._4_4_ = 0;
    auStack_2._0_8_ = pDStack_5;
    do {
      bVar4 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                         auStack_2,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                        );
      this_00 = pDStack_15;
      if (bVar4 == 0) goto code_?;
      auStackX_8[0] = 1;
      this_01 = (Enum *)FUN_?(TypeInfo__MV__Common__AvatarAccessoryData,auStackX_8);
      lVar17 = 0;
      key = mscorlib.dll::System::Enum::Enum_ToString_2(this_01,StringLiteral_d,(MethodInfo *)0x0);
      if (this_00 == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        pDVar18 = (Dictionary_2_System_Object_System_Object___Class *)FUN_?();
code_?:
        FUN_?(pDVar18,lVar17);
        pDVar19 = pDVar18;
code_?:
        FUN_?();
code_?:
        FUN_?(this_00,pDVar19);
        FUN_?();
        pcVar3 = (code *)swi(3);
        bVar4 = (*pcVar3)();
        return bVar4;
      }
      pIVar20 = (this_00->_0).image;
      bVar21 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      pDVar19 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if ((*(byte *)&pIVar20[4].assembly < bVar21) ||
         (*(Dictionary_2_System_Object_System_Object___Class **)
           ((longlong)pIVar20[2].codeGenModule + (ulonglong)bVar21 * 8 + -8) !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
      goto code_?;
      pDVar19 = this_00;
      pDVar18 = (Dictionary_2_System_Object_System_Object___Class *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)key,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
      if (pDVar18 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
      goto code_?;
      pIVar20 = (pDVar18->_0).image;
      lVar22._0_4_ = pIVar20->token;
      lVar22._4_1_ = pIVar20->dynamic;
      lVar22._5_3_ = *(undefined3 *)&pIVar20->field_0x45;
      lVar17 = lRam_?;
      if (lVar22 != *(longlong *)(lRam_? + 0x40)) goto code_?;
    } while (*(int *)&(pDVar18->_0).name != streamingAssetId);
    bVar4 = 1;
  }
  return bVar4;
}


/* Boolean IsAccessorySlotOccupied(AccessorySlotType) */

bool Assembly-CSharp.dll::MVBody::MVBody_IsAccessorySlotOccupied
               (MVBody *this,AccessorySlotType__Enum accessorySlotType,MethodInfo *method)

{
  pBVar1 = (this->fields).bodyAccessoriesController;
  if (pBVar1 != (BodyAccessoriesController *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)(pBVar1->fields).accessoryData;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Number);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135
        & 1) == 0) {
      FUN_?();
    }
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    aRStack_2[0]._pointer._value = (void *)0x0;
    aRStack_2[0]._length = 0;
    aRStack_2[0]._12_4_ = 0;
    key = mscorlib.dll::System::Number::Number_FormatInt32
                    (accessorySlotType,aRStack_2,(IFormatProvider *)0x0,(MethodInfo *)0x0);
    if (this_00 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        0x0) {
      iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        (this_00,(Object *)key,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                         ->klass->rgctx_data[0x21].method);
      return (byte)((uint)iVar3 >> 0x1f) ^ 1;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void OnAnimationUpdate(Object) */

void Assembly-CSharp.dll::MVBody::MVBody_OnAnimationUpdate
               (MVBody *this,Object *newAnimationData,MethodInfo *method)

{
  pMVar1 = (this->fields).bodyObject;
  if ((pMVar1 == (MVBodyObject *)0x0) ||
     (pBVar2 = (pMVar1->fields).boneAnimation, pBVar2 == (BoneAnimation *)0x0)) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_timeStamp);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_state);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (newAnimationData == (Object *)0x0) goto code_?;
  bVar4 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
          naturalAligment;
  if (((newAnimationData->klass->_1).naturalAligment < bVar4) ||
     ((Dictionary_2_System_Object_System_Object___Class *)
      (newAnimationData->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
    FUN_?(newAnimationData);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pOVar5 = (Object__Class *)
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      ((Dictionary_2_System_Object_System_Object_ *)newAnimationData,
                       (Object *)StringLiteral_state,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  pOVar6 = (Object__Class *)0x0;
  if (pOVar5 != (Object__Class *)0x0) {
    if ((pOVar5->_0).image == pIRam0000000182dbdde0) {
      pOVar6 = pOVar5;
    }
    if (pOVar6 == (Object__Class *)0x0) {
      FUN_?(pOVar5);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      ((Dictionary_2_System_Object_System_Object_ *)newAnimationData,
                       (Object *)StringLiteral_timeStamp,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  if (pOVar7 == (Object *)0x0) goto code_?;
  if ((pOVar7->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar7);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar8 = *(int32_t *)&pOVar7[1].klass;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AnimationData,pOVar6,iVar8,0,unaff_RDI);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<AnimationData>__Enqueue_AnimationData_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((pBVar2->fields).OnAnimationChange != (Action_1_String_ *)0x0) {
    pAVar9 = (pBVar2->fields).OnAnimationChange;
    (*(pAVar9->fields)._._.invoke_impl)((pAVar9->fields)._._.method_code,pOVar6);
  }
  if ((pBVar2->fields).isLocal == 0) {
    pQVar10 = (pBVar2->fields).animationQueue;
    pOVar7 = (Object *)FUN_?(TypeInfo__AnimationData);
    bVar11 = iRam_? != 0;
    pOVar7[1].klass = pOVar6;
    if (bVar11) {
      uVar12 = (uint)((ulonglong)(pOVar7 + 1) >> 0xc);
      lVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6) * 8;
      do {
        uVar14 = *(ulonglong *)(lVar13 + 0xADDR);
        puVar15 = (ulonglong *)(lVar13 + 0xADDR);
        LOCK();
        bVar11 = uVar14 == *puVar15;
        if (bVar11) {
          *puVar15 = uVar14 | 1L << (ulonglong)(uVar12 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
    *(int32_t *)&pOVar7[1].monitor = iVar8;
    if (pQVar10 == (Queue_1_AnimationData_ *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
    Queue_1_System_Object__Enqueue
              ((Queue_1_System_Object_ *)pQVar10,pOVar7,
               MethodInfo__System__Collections__Generic__Queue<AnimationData>__Enqueue_AnimationData_
              );
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__Queue<AnimationData>__Dequeue__,0);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__Collections__Generic__Queue<AnimationData>__get_Count__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__TransformNetworkManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pQVar10 = (pBVar2->fields).animationQueue;
    iVar16 = TypeInfo__TransformNetworkManager->static_fields->_DelayedTime_k__BackingField + 0x14;
    if (pQVar10 == (Queue_1_AnimationData_ *)0x0) goto code_?;
    pAVar17 = (pBVar2->fields).nextAnim;
    if ((pQVar10->fields)._size < 1) {
      if ((pAVar17 != (AnimationData *)0x0) && ((pAVar17->fields).timeStamp <= iVar16)) {
        (pBVar2->fields).currentAnim = pAVar17;
        func_?(&(pBVar2->fields).currentAnim);
        (pBVar2->fields).nextAnim = (AnimationData *)0x0;
        func_?(&(pBVar2->fields).nextAnim);
      }
    }
    else {
      if (pAVar17 == (AnimationData *)0x0) {
        if (pQVar10 == (Queue_1_AnimationData_ *)0x0) goto code_?;
        pAVar17 = (AnimationData *)
                  mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                  Queue_1_System_Object__Dequeue
                            ((Queue_1_System_Object_ *)pQVar10,
                             MethodInfo__System__Collections__Generic__Queue<AnimationData>__Dequeue__
                            );
        bVar11 = iRam_? != 0;
        (pBVar2->fields).nextAnim = pAVar17;
        if (bVar11) {
          uVar12 = (uint)((ulonglong)&(pBVar2->fields).nextAnim >> 0xc);
          uVar14 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
          do {
            uVar18 = *(ulonglong *)(uVar14 * 8 + 0xADDR);
            puVar15 = (ulonglong *)(uVar14 * 8 + 0xADDR);
            LOCK();
            bVar11 = uVar18 == *puVar15;
            if (bVar11) {
              *puVar15 = uVar18 | 1L << (ulonglong)(uVar12 & 0x3f);
            }
            UNLOCK();
          } while (!bVar11);
        }
      }
      if ((pBVar2->fields).nextAnim != (AnimationData *)0x0) {
        if (((pBVar2->fields).currentAnim == (AnimationData *)0x0) &&
           (pAVar17 = (pBVar2->fields).nextAnim, (pAVar17->fields).timeStamp <= iVar16)) {
          (pBVar2->fields).currentAnim = pAVar17;
          func_?(&(pBVar2->fields).currentAnim);
          (pBVar2->fields).nextAnim = (AnimationData *)0x0;
          func_?(&(pBVar2->fields).nextAnim);
        }
        pAVar17 = (pBVar2->fields).nextAnim;
        while (pAVar17 != (AnimationData *)0x0) {
          pAVar17 = (pBVar2->fields).nextAnim;
          if (pAVar17 == (AnimationData *)0x0) goto code_?;
          if (iVar16 < (pAVar17->fields).timeStamp) break;
          pQVar10 = (pBVar2->fields).animationQueue;
          if (pQVar10 == (Queue_1_AnimationData_ *)0x0) goto code_?;
          if ((pQVar10->fields)._size < 1) break;
          bVar11 = iRam_? != 0;
          (pBVar2->fields).currentAnim = (pBVar2->fields).nextAnim;
          if (bVar11) {
            uVar12 = (uint)((ulonglong)&(pBVar2->fields).currentAnim >> 0xc);
            uVar14 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
            do {
              uVar18 = *(ulonglong *)(uVar14 * 8 + 0xADDR);
              puVar15 = (ulonglong *)(uVar14 * 8 + 0xADDR);
              LOCK();
              bVar11 = uVar18 == *puVar15;
              if (bVar11) {
                *puVar15 = uVar18 | 1L << (ulonglong)(uVar12 & 0x3f);
              }
              UNLOCK();
            } while (!bVar11);
          }
          pQVar10 = (pBVar2->fields).animationQueue;
          if (pQVar10 == (Queue_1_AnimationData_ *)0x0) goto code_?;
          pAVar17 = (AnimationData *)
                    mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                    Queue_1_System_Object__Dequeue
                              ((Queue_1_System_Object_ *)pQVar10,
                               MethodInfo__System__Collections__Generic__Queue<AnimationData>__Dequeue__
                              );
          bVar11 = iRam_? != 0;
          (pBVar2->fields).nextAnim = pAVar17;
          if (bVar11) {
            uVar12 = (uint)((ulonglong)&(pBVar2->fields).nextAnim >> 0xc);
            uVar14 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
            do {
              uVar18 = *(ulonglong *)(uVar14 * 8 + 0xADDR);
              puVar15 = (ulonglong *)(uVar14 * 8 + 0xADDR);
              LOCK();
              bVar11 = uVar18 == *puVar15;
              if (bVar11) {
                *puVar15 = uVar18 | 1L << (ulonglong)(uVar12 & 0x3f);
              }
              UNLOCK();
            } while (!bVar11);
          }
          pAVar17 = (pBVar2->fields).nextAnim;
        }
      }
    }
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_Jump);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((pBVar2->fields).currentAnim != (AnimationData *)0x0) {
      if ((pBVar2->fields).prevAnim != (AnimationData *)0x0) {
        pSVar19 = (((pBVar2->fields).currentAnim)->fields).state;
        pSVar20 = (((pBVar2->fields).prevAnim)->fields).state;
        if (pSVar19 == pSVar20) {
          return;
        }
        if ((((pSVar19 != (String *)0x0) && (pSVar20 != (String *)0x0)) &&
            ((pSVar19->fields)._stringLength == (pSVar20->fields)._stringLength)) &&
           (bVar21 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                               ((uint8_t *)&(pSVar19->fields)._firstChar,
                                (uint8_t *)&(pSVar20->fields)._firstChar,
                                (longlong)(pSVar19->fields)._stringLength * 2,(MethodInfo *)0x0),
           bVar21 != 0)) {
          return;
        }
      }
      pSVar19 = StringLiteral_Jump;
      pAVar17 = (pBVar2->fields).currentAnim;
      if (pAVar17 == (AnimationData *)0x0) goto code_?;
      pSVar20 = (pAVar17->fields).state;
      if ((pSVar20 == StringLiteral_Jump) ||
         (((pSVar20 != (String *)0x0 && (StringLiteral_Jump != (String *)0x0)) &&
          (((pSVar20->fields)._stringLength == (StringLiteral_Jump->fields)._stringLength &&
           (bVar21 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                               ((uint8_t *)&(pSVar20->fields)._firstChar,
                                (uint8_t *)&(StringLiteral_Jump->fields)._firstChar,
                                (longlong)(pSVar20->fields)._stringLength * 2,(MethodInfo *)0x0),
           bVar21 != 0)))))) {
        pAVar22 = (pBVar2->fields).avatarAnimation;
        if (pAVar22 == (Animation *)0x0) goto code_?;
        UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_RewindNamed
                  (pAVar22,pSVar19,(MethodInfo *)0x0);
        pAVar17 = (pBVar2->fields).currentAnim;
        if ((pAVar17 == (AnimationData *)0x0) ||
           (pAVar22 = (pBVar2->fields).avatarAnimation, pAVar22 == (Animation *)0x0))
        goto code_?;
        UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_3
                  (pAVar22,(pAVar17->fields).state,PlayMode__Enum_StopAll,(MethodInfo *)0x0);
      }
      else {
        pAVar17 = (pBVar2->fields).currentAnim;
        if ((pAVar17 == (AnimationData *)0x0) ||
           (pAVar22 = (pBVar2->fields).avatarAnimation, pAVar22 == (Animation *)0x0))
        goto code_?;
        UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_CrossFade
                  (pAVar22,(pAVar17->fields).state,_UNK_?,PlayMode__Enum_StopAll,
                   (MethodInfo *)0x0);
      }
      pAVar17 = (pBVar2->fields).currentAnim;
      if (pAVar17 == (AnimationData *)0x0) goto code_?;
      iVar16 = (pAVar17->fields).timeStamp;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__TransformNetworkManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (iVar16 < TypeInfo__TransformNetworkManager->static_fields->_DelayedTime_k__BackingField) {
        iVar16 = FUN_?();
        pAVar17 = (pBVar2->fields).currentAnim;
        if (pAVar17 == (AnimationData *)0x0) {
code_?:
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar23 = (pAVar17->fields).timeStamp;
        pAVar22 = (pBVar2->fields).avatarAnimation;
        if ((pAVar22 == (Animation *)0x0) ||
           (pAVar24 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                                (pAVar22,(pAVar17->fields).state,(MethodInfo *)0x0),
           pAVar24 == (AnimationState *)0x0)) goto code_?;
        pvVar25 = (pAVar24->fields)._.m_Ptr;
        if (pvVar25 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar24,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar26 = func_?(&UNK_?);
          FUN_?(uVar26,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
        fVar27 = (float)(iVar16 - iVar23) * _UNK_?;
        fVar28 = (float)(*pcRam_?)(pvVar25);
        pAVar17 = (pBVar2->fields).currentAnim;
        if (((pAVar17 == (AnimationData *)0x0) ||
            (pAVar22 = (pBVar2->fields).avatarAnimation, pAVar22 == (Animation *)0x0)) ||
           (pAVar24 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                                (pAVar22,(pAVar17->fields).state,(MethodInfo *)0x0),
           pAVar24 == (AnimationState *)0x0)) goto code_?;
        pvVar25 = (pAVar24->fields)._.m_Ptr;
        if (pvVar25 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar24,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar26 = func_?(&UNK_?);
          FUN_?(uVar26,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
        (*pcRam_?)(pvVar25,fVar27 / fVar28);
      }
      (pBVar2->fields).prevAnim = (pBVar2->fields).currentAnim;
      if (iRam_? != 0) {
        uVar12 = (uint)((ulonglong)&(pBVar2->fields).prevAnim >> 0xc);
        uVar14 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
        do {
          uVar18 = *(ulonglong *)(uVar14 * 8 + 0xADDR);
          puVar15 = (ulonglong *)(uVar14 * 8 + 0xADDR);
          LOCK();
          bVar11 = uVar18 == *puVar15;
          if (bVar11) {
            *puVar15 = uVar18 | 1L << (uVar12 & 0x3f);
          }
          UNLOCK();
        } while (!bVar11);
      }
      iVar16 = iRam_?;
      (pBVar2->fields).currentAnim = (AnimationData *)0x0;
      if (iVar16 != 0) {
        uVar12 = (uint)((ulonglong)&(pBVar2->fields).currentAnim >> 0xc);
        uVar14 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
        do {
          uVar18 = *(ulonglong *)(uVar14 * 8 + 0xADDR);
          puVar15 = (ulonglong *)(uVar14 * 8 + 0xADDR);
          LOCK();
          bVar11 = uVar18 == *puVar15;
          if (bVar11) {
            *puVar15 = uVar18 | 1L << (uVar12 & 0x3f);
          }
          UNLOCK();
        } while (!bVar11);
      }
    }
    return;
  }
  pAVar17 = (AnimationData *)FUN_?(TypeInfo__AnimationData);
  iVar16 = iRam_?;
  (pAVar17->fields).state = (String *)pOVar6;
  if (iVar16 != 0) {
    uVar12 = (uint)((ulonglong)&pAVar17->fields >> 0xc);
    lVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6) * 8;
    do {
      uVar14 = *(ulonglong *)(lVar13 + 0xADDR);
      puVar15 = (ulonglong *)(lVar13 + 0xADDR);
      LOCK();
      bVar11 = uVar14 == *puVar15;
      if (bVar11) {
        *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
      }
      UNLOCK();
      iVar16 = iRam_?;
    } while (!bVar11);
  }
  (pAVar17->fields).timeStamp = iVar8;
  (pBVar2->fields).currentAnim = pAVar17;
  if (iVar16 != 0) {
    uVar12 = (uint)((ulonglong)&(pBVar2->fields).currentAnim >> 0xc);
    lVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6) * 8;
    do {
      uVar14 = *(ulonglong *)(lVar13 + 0xADDR);
      puVar15 = (ulonglong *)(lVar13 + 0xADDR);
      LOCK();
      bVar11 = uVar14 == *puVar15;
      if (bVar11) {
        *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
      }
      UNLOCK();
    } while (!bVar11);
  }
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Jump,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((pBVar2->fields).currentAnim != (AnimationData *)0x0) {
    if ((pBVar2->fields).prevAnim != (AnimationData *)0x0) {
      pSVar19 = (((pBVar2->fields).currentAnim)->fields).state;
      pSVar20 = (((pBVar2->fields).prevAnim)->fields).state;
      if (pSVar19 == pSVar20) {
        return;
      }
      if (((pSVar19 != (String *)0x0) && (pSVar20 != (String *)0x0)) &&
         (((pSVar19->fields)._stringLength == (pSVar20->fields)._stringLength &&
          (bVar21 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                              ((uint8_t *)&(pSVar19->fields)._firstChar,
                               (uint8_t *)&(pSVar20->fields)._firstChar,
                               (longlong)(pSVar19->fields)._stringLength * 2,(MethodInfo *)0x0),
          bVar21 != 0)))) {
        return;
      }
    }
    pSVar19 = StringLiteral_Jump;
    pAVar17 = (pBVar2->fields).currentAnim;
    if (pAVar17 == (AnimationData *)0x0) goto DAT_?;
    pSVar20 = (pAVar17->fields).state;
    if ((pSVar20 == StringLiteral_Jump) ||
       ((((pSVar20 != (String *)0x0 && (StringLiteral_Jump != (String *)0x0)) &&
         ((pSVar20->fields)._stringLength == (StringLiteral_Jump->fields)._stringLength)) &&
        (bVar21 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                            ((uint8_t *)&(pSVar20->fields)._firstChar,
                             (uint8_t *)&(StringLiteral_Jump->fields)._firstChar,
                             (longlong)(pSVar20->fields)._stringLength * 2,(MethodInfo *)0x0),
        bVar21 != 0)))) {
      pAVar22 = (pBVar2->fields).avatarAnimation;
      if (pAVar22 == (Animation *)0x0) goto DAT_?;
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_RewindNamed
                (pAVar22,pSVar19,(MethodInfo *)0x0);
      pAVar17 = (pBVar2->fields).currentAnim;
      if ((pAVar17 == (AnimationData *)0x0) ||
         (pAVar22 = (pBVar2->fields).avatarAnimation, pAVar22 == (Animation *)0x0))
      goto DAT_?;
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_3
                (pAVar22,(pAVar17->fields).state,PlayMode__Enum_StopAll,(MethodInfo *)0x0);
    }
    else {
      pAVar17 = (pBVar2->fields).currentAnim;
      if ((pAVar17 == (AnimationData *)0x0) ||
         (pAVar22 = (pBVar2->fields).avatarAnimation, pAVar22 == (Animation *)0x0))
      goto DAT_?;
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_CrossFade
                (pAVar22,(pAVar17->fields).state,_UNK_?,PlayMode__Enum_StopAll,
                 (MethodInfo *)0x0);
    }
    pAVar17 = (pBVar2->fields).currentAnim;
    if (pAVar17 == (AnimationData *)0x0) goto DAT_?;
    iVar16 = (pAVar17->fields).timeStamp;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__TransformNetworkManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (iVar16 < TypeInfo__TransformNetworkManager->static_fields->_DelayedTime_k__BackingField) {
      iVar16 = FUN_?();
      pAVar17 = (pBVar2->fields).currentAnim;
      if (pAVar17 == (AnimationData *)0x0) {
DAT_?:
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar23 = (pAVar17->fields).timeStamp;
      pAVar22 = (pBVar2->fields).avatarAnimation;
      if ((pAVar22 == (Animation *)0x0) ||
         (pAVar24 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                              (pAVar22,(pAVar17->fields).state,(MethodInfo *)0x0),
         pAVar24 == (AnimationState *)0x0)) goto DAT_?;
      pvVar25 = (pAVar24->fields)._.m_Ptr;
      if (pvVar25 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar24,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar26 = func_?(&UNK_?);
        FUN_?(uVar26,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      fVar27 = (float)(iVar16 - iVar23) * _UNK_?;
      fVar28 = (float)(*pcRam_?)(pvVar25);
      pAVar17 = (pBVar2->fields).currentAnim;
      if (((pAVar17 == (AnimationData *)0x0) ||
          (pAVar22 = (pBVar2->fields).avatarAnimation, pAVar22 == (Animation *)0x0)) ||
         (pAVar24 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                              (pAVar22,(pAVar17->fields).state,(MethodInfo *)0x0),
         pAVar24 == (AnimationState *)0x0)) goto DAT_?;
      pvVar25 = (pAVar24->fields)._.m_Ptr;
      if (pvVar25 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar24,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar26 = func_?(&UNK_?);
        FUN_?(uVar26,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      (*pcRam_?)(pvVar25,fVar27 / fVar28);
    }
    (pBVar2->fields).prevAnim = (pBVar2->fields).currentAnim;
    if (iRam_? != 0) {
      uVar12 = (uint)((ulonglong)&(pBVar2->fields).prevAnim >> 0xc);
      uVar14 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
      do {
        uVar18 = *(ulonglong *)(uVar14 * 8 + 0xADDR);
        puVar15 = (ulonglong *)(uVar14 * 8 + 0xADDR);
        LOCK();
        bVar11 = uVar18 == *puVar15;
        if (bVar11) {
          *puVar15 = uVar18 | 1L << (uVar12 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
    iVar16 = iRam_?;
    (pBVar2->fields).currentAnim = (AnimationData *)0x0;
    if (iVar16 != 0) {
      uVar12 = (uint)((ulonglong)&(pBVar2->fields).currentAnim >> 0xc);
      uVar14 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
      do {
        uVar18 = *(ulonglong *)(uVar14 * 8 + 0xADDR);
        puVar15 = (ulonglong *)(uVar14 * 8 + 0xADDR);
        LOCK();
        bVar11 = uVar18 == *puVar15;
        if (bVar11) {
          *puVar15 = uVar18 | 1L << (uVar12 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
  }
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVBody::MVBody_OnDataUpdate(MVBody *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_OnDataUpdate);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVBlueprintBase::MVBlueprintBase_MapDataToFields((MVBlueprintBase *)this,(MethodInfo *)0x0);
  pBVar1 = (this->fields).bodyAccessoriesController;
  accessoryData = MVBody_GetAccessoryData(this,(MethodInfo *)0x0);
  if (pBVar1 != (BodyAccessoriesController *)0x0) {
    BodyAccessoriesController::BodyAccessoriesController_RefreshAccessories
              (pBVar1,accessoryData,(MethodInfo *)0x0);
    pBVar1 = (this->fields).bodyAccessoriesController;
    if (pBVar1 != (BodyAccessoriesController *)0x0) {
      MVBody_UpdateBodyClone(this,(pBVar1->fields).accessoryData,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar2 = StringLiteral_OnDataUpdate;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__ILogger);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pIVar3 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
      if (pIVar3 != (ILogger_1 *)0x0) {
        FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar3,3,pSVar2);
        return;
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnHealthUpdate(Object) */

void Assembly-CSharp.dll::MVBody::MVBody_OnHealthUpdate
               (MVBody *this,Object *newHealthData,MethodInfo *method)

{
  pMVar1 = (this->fields).bodyObject;
  if (((pMVar1 != (MVBodyObject *)0x0) &&
      (this_00 = (pMVar1->fields).avatarBlinker, this_00 != (AvatarBlinker *)0x0)) &&
     (newHealthData != (Object *)0x0)) {
    if ((newHealthData->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40))
    {
      fVar2 = *(float *)&newHealthData[1].klass;
      if (fVar2 < (this_00->fields).previousBlinkHealth) {
        BlinkerBase::BlinkerBase_StartBlinking
                  ((BlinkerBase *)this_00,BlinkType__Enum_Damage,_UNK_?,(MethodInfo *)0x0);
      }
      (this_00->fields).previousBlinkHealth = fVar2;
      return;
    }
    FUN_?(newHealthData);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnShieldUpdate(Object) */

void Assembly-CSharp.dll::MVBody::MVBody_OnShieldUpdate
               (MVBody *this,Object *newShieldData,MethodInfo *method)

{
  pMVar1 = (this->fields).bodyObject;
  if (((pMVar1 != (MVBodyObject *)0x0) &&
      (this_00 = (pMVar1->fields).avatarBlinker, this_00 != (AvatarBlinker *)0x0)) &&
     (newShieldData != (Object *)0x0)) {
    if ((newShieldData->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40))
    {
      fVar2 = *(float *)&newShieldData[1].klass;
      if (fVar2 < (this_00->fields).previousBlinkShield) {
        BlinkerBase::BlinkerBase_StartBlinking
                  ((BlinkerBase *)this_00,BlinkType__Enum_ShieldDamage,_UNK_?,
                   (MethodInfo *)0x0);
      }
      (this_00->fields).previousBlinkShield = fVar2;
      return;
    }
    FUN_?(newShieldData);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void PreviewAccessory(AccessoryDataClient) */

void Assembly-CSharp.dll::MVBody::MVBody_PreviewAccessory
               (MVBody *this,AccessoryDataClient *viewItem,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__AvatarAccessoryData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BodyAccessoriesController);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_d);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
            *)FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  pDVar2 = MVBody_GetAccessoryData(this,(MethodInfo *)0x0);
  pDVar2 = MVWorldObject.dll::MV::WorldObject::HashtableFunctions::
           HashtableFunctions_DeepCopyHashTable_1(pDVar2,(MethodInfo *)0x0);
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
            *)FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  uStackX_10 = CONCAT62(uStackX_10._2_6_,2);
  pEVar3 = (Enum *)FUN_?(TypeInfo__MV__Common__AvatarAccessoryData,&uStackX_10);
  pSVar4 = mscorlib.dll::System::Enum::Enum_ToString_2(pEVar3,StringLiteral_d,(MethodInfo *)0x0);
  if (viewItem != (AccessoryDataClient *)0x0) {
    uStackX_10 = CONCAT44(uStackX_10._4_4_,(viewItem->fields)._.slot);
    pOVar5 = (Object *)FUN_?(uRam_?,&uStackX_10);
    if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                   *)0x0) {
      uVar6 = CONCAT71((int7)((ulonglong)in_R9 >> 8),1);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar4,pOVar5,
                 (InsertionBehavior__Enum)uVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_10 = CONCAT62(uStackX_10._2_6_,1);
      pEVar3 = (Enum *)FUN_?(TypeInfo__MV__Common__AvatarAccessoryData,&uStackX_10);
      pSVar4 = mscorlib.dll::System::Enum::Enum_ToString_2
                          (pEVar3,StringLiteral_d,(MethodInfo *)0x0);
      uStackX_10 = CONCAT44(uStackX_10._4_4_,(viewItem->fields)._.sAID);
      pOVar5 = (Object *)FUN_?(uRam_?,&uStackX_10);
      uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar4,pOVar5,
                 (InsertionBehavior__Enum)uVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_10 = CONCAT62(uStackX_10._2_6_,3);
      pEVar3 = (Enum *)FUN_?(TypeInfo__MV__Common__AvatarAccessoryData,&uStackX_10);
      pSVar4 = mscorlib.dll::System::Enum::Enum_ToString_2
                          (pEVar3,StringLiteral_d,(MethodInfo *)0x0);
      uStackX_10 = uStackX_10 & 0xffffffff00000000;
      pOVar5 = (Object *)FUN_?(uRam_?,&uStackX_10);
      uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar4,pOVar5,
                 (InsertionBehavior__Enum)uVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_10 = CONCAT62(uStackX_10._2_6_,5);
      pEVar3 = (Enum *)FUN_?(TypeInfo__MV__Common__AvatarAccessoryData,&uStackX_10);
      pSVar4 = mscorlib.dll::System::Enum::Enum_ToString_2
                          (pEVar3,StringLiteral_d,(MethodInfo *)0x0);
      uStackX_10 = CONCAT44(uStackX_10._4_4_,0x3f800000);
      pOVar5 = (Object *)FUN_?(uRam_?,&uStackX_10);
      uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar4,pOVar5,
                 (InsertionBehavior__Enum)uVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_10 = CONCAT62(uStackX_10._2_6_,4);
      pEVar3 = (Enum *)FUN_?(TypeInfo__MV__Common__AvatarAccessoryData,&uStackX_10);
      pSVar4 = mscorlib.dll::System::Enum::Enum_ToString_2
                          (pEVar3,StringLiteral_d,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)pSVar4,
                 (Object *)(viewItem->fields)._.url,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar6 >> 8),1),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      iVar7 = (viewItem->fields)._.slot;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Number);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
           field_0x135 & 1) == 0) {
        FUN_?();
      }
      if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
        FUN_?();
      }
      uVar6 = 0;
      auStack_8 = (undefined1  [8])0x0;
      uStack_9._0_4_ = 0;
      uStack_9._4_4_ = 0;
      pSVar4 = mscorlib.dll::System::Number::Number_FormatInt32
                          (iVar7,(ReadOnlySpan_1_Char_ *)auStack_8,(IFormatProvider *)0x0,
                           (MethodInfo *)0x0);
      if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  (pDVar2,(Object *)pSVar4,(Object *)pDVar1,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar6 >> 8),1),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        pBVar10 = (this->fields).bodyAccessoriesController;
        if (pBVar10 != (BodyAccessoriesController *)0x0) {
          BodyAccessoriesController::BodyAccessoriesController_set_AccessoryMoveOverride
                    (pBVar10,0,(MethodInfo *)0x0);
          pMVar11 = (this->fields).bodyObject;
          iVar7 = (this->fields)._._._._.id;
          if (pMVar11 != (MVBodyObject *)0x0) {
            bodyData = (pMVar11->fields).bodyData;
            pBVar10 = (BodyAccessoriesController *)
                      FUN_?(TypeInfo__BodyAccessoriesController);
            BodyAccessoriesController::BodyAccessoriesController__ctor
                      (pBVar10,iVar7,bodyData,pDVar2,1,(MethodInfo *)0x0);
            bVar12 = iRam_? != 0;
            (this->fields).previewBodyAccessoriesController = pBVar10;
            if (bVar12) {
              uVar13 = (uint)((ulonglong)&(this->fields).previewBodyAccessoriesController >> 0xc);
              uVar14 = (ulonglong)((uVar13 & 0x1fffff) >> 6);
              do {
                uVar15 = *(ulonglong *)(uVar14 * 8 + 0xADDR);
                puVar16 = (ulonglong *)(uVar14 * 8 + 0xADDR);
                LOCK();
                bVar12 = uVar15 == *puVar16;
                if (bVar12) {
                  *puVar16 = uVar15 | 1L << (uVar13 & 0x3f);
                }
                UNLOCK();
              } while (!bVar12);
            }
            pBVar10 = (this->fields).previewBodyAccessoriesController;
            if (pBVar10 != (BodyAccessoriesController *)0x0) {
              BodyAccessoriesController::BodyAccessoriesController_RefreshAccessories
                        (pBVar10,pDVar2,(MethodInfo *)0x0);
              pBVar10 = (this->fields).previewBodyAccessoriesController;
              if (pBVar10 != (BodyAccessoriesController *)0x0) {
                BodyAccessoriesController::BodyAccessoriesController_set_AccessoryMoveOverride
                          (pBVar10,1,(MethodInfo *)0x0);
                pBVar10 = (this->fields).previewBodyAccessoriesController;
                if (pBVar10 != (BodyAccessoriesController *)0x0) {
                  pDVar2 = (pBVar10->fields).accessoryData;
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__Object);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pBVar17 = (this->fields).bodyClone;
                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__Object);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__Object);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (pBVar17 != (BodyClone *)0x0) {
                    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    if ((pBVar17->fields)._._._._.m_CachedPtr != (void *)0x0) {
                      pBVar17 = (this->fields).bodyClone;
                      if ((pBVar17 == (BodyClone *)0x0) ||
                         (pBVar10 = (pBVar17->fields).bodyAccessoriesController,
                         pBVar10 == (BodyAccessoriesController *)0x0)) {
                        FUN_?();
                        pcVar18 = (code *)swi(3);
                        (*pcVar18)();
                        return;
                      }
                      BodyAccessoriesController::BodyAccessoriesController_RefreshAccessories
                                (pBVar10,pDVar2,(MethodInfo *)0x0);
                    }
                  }
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void RefreshAccessories() */

void Assembly-CSharp.dll::MVBody::MVBody_RefreshAccessories(MVBody *this,MethodInfo *method)

{
  pBVar1 = (this->fields).bodyAccessoriesController;
  pDVar2 = MVBody_GetAccessoryData(this,(MethodInfo *)0x0);
  if (pBVar1 != (BodyAccessoriesController *)0x0) {
    BodyAccessoriesController::BodyAccessoriesController_RefreshAccessories
              (pBVar1,pDVar2,(MethodInfo *)0x0);
    pBVar1 = (this->fields).bodyAccessoriesController;
    if (pBVar1 != (BodyAccessoriesController *)0x0) {
      pDVar2 = (pBVar1->fields).accessoryData;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pBVar3 = (this->fields).bodyClone;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pBVar3 != (BodyClone *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pBVar3->fields)._._._._.m_CachedPtr != (void *)0x0) {
          pBVar3 = (this->fields).bodyClone;
          if ((pBVar3 == (BodyClone *)0x0) ||
             (pBVar1 = (pBVar3->fields).bodyAccessoriesController,
             pBVar1 == (BodyAccessoriesController *)0x0)) {
            FUN_?();
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          BodyAccessoriesController::BodyAccessoriesController_RefreshAccessories
                    (pBVar1,pDVar2,(MethodInfo *)0x0);
        }
      }
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void StartAnimation(String) */

void Assembly-CSharp.dll::MVBody::MVBody_StartAnimation
               (MVBody *this,String *newAnimation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 == (MVGameControllerBase *)0x0) ||
     (this_00 = (pMVar1->fields).game, this_00 == (MVNetworkGame *)0x0)) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar3 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
  pMVar4 = (this->fields).bodyObject;
  if ((pMVar4 == (MVBodyObject *)0x0) ||
     (pBVar5 = (pMVar4->fields).boneAnimation, pBVar5 == (BoneAnimation *)0x0))
  goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AnimationData,newAnimation,iVar3,0,unaff_RDI);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<AnimationData>__Enqueue_AnimationData_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((pBVar5->fields).OnAnimationChange != (Action_1_String_ *)0x0) {
    pAVar6 = (pBVar5->fields).OnAnimationChange;
    (*(pAVar6->fields)._._.invoke_impl)((pAVar6->fields)._._.method_code,newAnimation);
  }
  if ((pBVar5->fields).isLocal == 0) {
    pQVar7 = (pBVar5->fields).animationQueue;
    item = (Object *)FUN_?(TypeInfo__AnimationData);
    bVar8 = iRam_? != 0;
    item[1].klass = (Object__Class *)newAnimation;
    if (bVar8) {
      uVar9 = (uint)((ulonglong)(item + 1) >> 0xc);
      lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
      do {
        uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
        puVar12 = (ulonglong *)(lVar10 + 0xADDR);
        LOCK();
        bVar8 = uVar11 == *puVar12;
        if (bVar8) {
          *puVar12 = uVar11 | 1L << (ulonglong)(uVar9 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    *(int32_t *)&item[1].monitor = iVar3;
    if (pQVar7 == (Queue_1_AnimationData_ *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
    Queue_1_System_Object__Enqueue
              ((Queue_1_System_Object_ *)pQVar7,item,
               MethodInfo__System__Collections__Generic__Queue<AnimationData>__Enqueue_AnimationData_
              );
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__Queue<AnimationData>__Dequeue__,0);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__Collections__Generic__Queue<AnimationData>__get_Count__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__TransformNetworkManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pQVar7 = (pBVar5->fields).animationQueue;
    iVar13 = TypeInfo__TransformNetworkManager->static_fields->_DelayedTime_k__BackingField + 0x14;
    if (pQVar7 == (Queue_1_AnimationData_ *)0x0) goto code_?;
    pAVar14 = (pBVar5->fields).nextAnim;
    if ((pQVar7->fields)._size < 1) {
      if ((pAVar14 != (AnimationData *)0x0) && ((pAVar14->fields).timeStamp <= iVar13)) {
        (pBVar5->fields).currentAnim = pAVar14;
        func_?(&(pBVar5->fields).currentAnim);
        (pBVar5->fields).nextAnim = (AnimationData *)0x0;
        func_?(&(pBVar5->fields).nextAnim);
      }
    }
    else {
      if (pAVar14 == (AnimationData *)0x0) {
        if (pQVar7 == (Queue_1_AnimationData_ *)0x0) goto code_?;
        pAVar14 = (AnimationData *)
                  mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                  Queue_1_System_Object__Dequeue
                            ((Queue_1_System_Object_ *)pQVar7,
                             MethodInfo__System__Collections__Generic__Queue<AnimationData>__Dequeue__
                            );
        bVar8 = iRam_? != 0;
        (pBVar5->fields).nextAnim = pAVar14;
        if (bVar8) {
          uVar9 = (uint)((ulonglong)&(pBVar5->fields).nextAnim >> 0xc);
          uVar11 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
          do {
            uVar15 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
            puVar12 = (ulonglong *)(uVar11 * 8 + 0xADDR);
            LOCK();
            bVar8 = uVar15 == *puVar12;
            if (bVar8) {
              *puVar12 = uVar15 | 1L << (ulonglong)(uVar9 & 0x3f);
            }
            UNLOCK();
          } while (!bVar8);
        }
      }
      if ((pBVar5->fields).nextAnim != (AnimationData *)0x0) {
        if (((pBVar5->fields).currentAnim == (AnimationData *)0x0) &&
           (pAVar14 = (pBVar5->fields).nextAnim, (pAVar14->fields).timeStamp <= iVar13)) {
          (pBVar5->fields).currentAnim = pAVar14;
          func_?(&(pBVar5->fields).currentAnim);
          (pBVar5->fields).nextAnim = (AnimationData *)0x0;
          func_?(&(pBVar5->fields).nextAnim);
        }
        pAVar14 = (pBVar5->fields).nextAnim;
        while (pAVar14 != (AnimationData *)0x0) {
          pAVar14 = (pBVar5->fields).nextAnim;
          if (pAVar14 == (AnimationData *)0x0) goto code_?;
          if (iVar13 < (pAVar14->fields).timeStamp) break;
          pQVar7 = (pBVar5->fields).animationQueue;
          if (pQVar7 == (Queue_1_AnimationData_ *)0x0) goto code_?;
          if ((pQVar7->fields)._size < 1) break;
          bVar8 = iRam_? != 0;
          (pBVar5->fields).currentAnim = (pBVar5->fields).nextAnim;
          if (bVar8) {
            uVar9 = (uint)((ulonglong)&(pBVar5->fields).currentAnim >> 0xc);
            uVar11 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
            do {
              uVar15 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
              puVar12 = (ulonglong *)(uVar11 * 8 + 0xADDR);
              LOCK();
              bVar8 = uVar15 == *puVar12;
              if (bVar8) {
                *puVar12 = uVar15 | 1L << (ulonglong)(uVar9 & 0x3f);
              }
              UNLOCK();
            } while (!bVar8);
          }
          pQVar7 = (pBVar5->fields).animationQueue;
          if (pQVar7 == (Queue_1_AnimationData_ *)0x0) goto code_?;
          pAVar14 = (AnimationData *)
                    mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                    Queue_1_System_Object__Dequeue
                              ((Queue_1_System_Object_ *)pQVar7,
                               MethodInfo__System__Collections__Generic__Queue<AnimationData>__Dequeue__
                              );
          bVar8 = iRam_? != 0;
          (pBVar5->fields).nextAnim = pAVar14;
          if (bVar8) {
            uVar9 = (uint)((ulonglong)&(pBVar5->fields).nextAnim >> 0xc);
            uVar11 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
            do {
              uVar15 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
              puVar12 = (ulonglong *)(uVar11 * 8 + 0xADDR);
              LOCK();
              bVar8 = uVar15 == *puVar12;
              if (bVar8) {
                *puVar12 = uVar15 | 1L << (ulonglong)(uVar9 & 0x3f);
              }
              UNLOCK();
            } while (!bVar8);
          }
          pAVar14 = (pBVar5->fields).nextAnim;
        }
      }
    }
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_Jump);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((pBVar5->fields).currentAnim != (AnimationData *)0x0) {
      if ((pBVar5->fields).prevAnim != (AnimationData *)0x0) {
        pSVar16 = (((pBVar5->fields).currentAnim)->fields).state;
        pSVar17 = (((pBVar5->fields).prevAnim)->fields).state;
        if (pSVar16 == pSVar17) {
          return;
        }
        if ((((pSVar16 != (String *)0x0) && (pSVar17 != (String *)0x0)) &&
            ((pSVar16->fields)._stringLength == (pSVar17->fields)._stringLength)) &&
           (bVar18 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                               ((uint8_t *)&(pSVar16->fields)._firstChar,
                                (uint8_t *)&(pSVar17->fields)._firstChar,
                                (longlong)(pSVar16->fields)._stringLength * 2,(MethodInfo *)0x0),
           bVar18 != 0)) {
          return;
        }
      }
      pSVar16 = StringLiteral_Jump;
      pAVar14 = (pBVar5->fields).currentAnim;
      if (pAVar14 == (AnimationData *)0x0) goto code_?;
      pSVar17 = (pAVar14->fields).state;
      if ((pSVar17 == StringLiteral_Jump) ||
         (((pSVar17 != (String *)0x0 && (StringLiteral_Jump != (String *)0x0)) &&
          (((pSVar17->fields)._stringLength == (StringLiteral_Jump->fields)._stringLength &&
           (bVar18 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                               ((uint8_t *)&(pSVar17->fields)._firstChar,
                                (uint8_t *)&(StringLiteral_Jump->fields)._firstChar,
                                (longlong)(pSVar17->fields)._stringLength * 2,(MethodInfo *)0x0),
           bVar18 != 0)))))) {
        pAVar19 = (pBVar5->fields).avatarAnimation;
        if (pAVar19 == (Animation *)0x0) goto code_?;
        UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_RewindNamed
                  (pAVar19,pSVar16,(MethodInfo *)0x0);
        pAVar14 = (pBVar5->fields).currentAnim;
        if ((pAVar14 == (AnimationData *)0x0) ||
           (pAVar19 = (pBVar5->fields).avatarAnimation, pAVar19 == (Animation *)0x0))
        goto code_?;
        UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_3
                  (pAVar19,(pAVar14->fields).state,PlayMode__Enum_StopAll,(MethodInfo *)0x0);
      }
      else {
        pAVar14 = (pBVar5->fields).currentAnim;
        if ((pAVar14 == (AnimationData *)0x0) ||
           (pAVar19 = (pBVar5->fields).avatarAnimation, pAVar19 == (Animation *)0x0))
        goto code_?;
        UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_CrossFade
                  (pAVar19,(pAVar14->fields).state,_UNK_?,PlayMode__Enum_StopAll,
                   (MethodInfo *)0x0);
      }
      pAVar14 = (pBVar5->fields).currentAnim;
      if (pAVar14 == (AnimationData *)0x0) goto code_?;
      iVar13 = (pAVar14->fields).timeStamp;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__TransformNetworkManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (iVar13 < TypeInfo__TransformNetworkManager->static_fields->_DelayedTime_k__BackingField) {
        iVar13 = FUN_?();
        pAVar14 = (pBVar5->fields).currentAnim;
        if (pAVar14 == (AnimationData *)0x0) {
code_?:
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar20 = (pAVar14->fields).timeStamp;
        pAVar19 = (pBVar5->fields).avatarAnimation;
        if ((pAVar19 == (Animation *)0x0) ||
           (pAVar21 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                                (pAVar19,(pAVar14->fields).state,(MethodInfo *)0x0),
           pAVar21 == (AnimationState *)0x0)) goto code_?;
        pvVar22 = (pAVar21->fields)._.m_Ptr;
        if (pvVar22 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar21,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar23 = func_?(&UNK_?);
          FUN_?(uVar23,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        fVar24 = (float)(iVar13 - iVar20) * _UNK_?;
        fVar25 = (float)(*pcRam_?)(pvVar22);
        pAVar14 = (pBVar5->fields).currentAnim;
        if (((pAVar14 == (AnimationData *)0x0) ||
            (pAVar19 = (pBVar5->fields).avatarAnimation, pAVar19 == (Animation *)0x0)) ||
           (pAVar21 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                                (pAVar19,(pAVar14->fields).state,(MethodInfo *)0x0),
           pAVar21 == (AnimationState *)0x0)) goto code_?;
        pvVar22 = (pAVar21->fields)._.m_Ptr;
        if (pvVar22 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar21,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar23 = func_?(&UNK_?);
          FUN_?(uVar23,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)(pvVar22,fVar24 / fVar25);
      }
      (pBVar5->fields).prevAnim = (pBVar5->fields).currentAnim;
      if (iRam_? != 0) {
        uVar9 = (uint)((ulonglong)&(pBVar5->fields).prevAnim >> 0xc);
        uVar11 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
        do {
          uVar15 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
          puVar12 = (ulonglong *)(uVar11 * 8 + 0xADDR);
          LOCK();
          bVar8 = uVar15 == *puVar12;
          if (bVar8) {
            *puVar12 = uVar15 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      iVar13 = iRam_?;
      (pBVar5->fields).currentAnim = (AnimationData *)0x0;
      if (iVar13 != 0) {
        uVar9 = (uint)((ulonglong)&(pBVar5->fields).currentAnim >> 0xc);
        uVar11 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
        do {
          uVar15 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
          puVar12 = (ulonglong *)(uVar11 * 8 + 0xADDR);
          LOCK();
          bVar8 = uVar15 == *puVar12;
          if (bVar8) {
            *puVar12 = uVar15 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
    }
    return;
  }
  pAVar14 = (AnimationData *)FUN_?(TypeInfo__AnimationData);
  iVar13 = iRam_?;
  (pAVar14->fields).state = newAnimation;
  if (iVar13 != 0) {
    uVar9 = (uint)((ulonglong)&pAVar14->fields >> 0xc);
    lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
    do {
      uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
      puVar12 = (ulonglong *)(lVar10 + 0xADDR);
      LOCK();
      bVar8 = uVar11 == *puVar12;
      if (bVar8) {
        *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
      }
      UNLOCK();
      iVar13 = iRam_?;
    } while (!bVar8);
  }
  (pAVar14->fields).timeStamp = iVar3;
  (pBVar5->fields).currentAnim = pAVar14;
  if (iVar13 != 0) {
    uVar9 = (uint)((ulonglong)&(pBVar5->fields).currentAnim >> 0xc);
    lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
    do {
      uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
      puVar12 = (ulonglong *)(lVar10 + 0xADDR);
      LOCK();
      bVar8 = uVar11 == *puVar12;
      if (bVar8) {
        *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Jump,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((pBVar5->fields).currentAnim != (AnimationData *)0x0) {
    if ((pBVar5->fields).prevAnim != (AnimationData *)0x0) {
      pSVar16 = (((pBVar5->fields).currentAnim)->fields).state;
      pSVar17 = (((pBVar5->fields).prevAnim)->fields).state;
      if (pSVar16 == pSVar17) {
        return;
      }
      if (((pSVar16 != (String *)0x0) && (pSVar17 != (String *)0x0)) &&
         (((pSVar16->fields)._stringLength == (pSVar17->fields)._stringLength &&
          (bVar18 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                              ((uint8_t *)&(pSVar16->fields)._firstChar,
                               (uint8_t *)&(pSVar17->fields)._firstChar,
                               (longlong)(pSVar16->fields)._stringLength * 2,(MethodInfo *)0x0),
          bVar18 != 0)))) {
        return;
      }
    }
    pSVar16 = StringLiteral_Jump;
    pAVar14 = (pBVar5->fields).currentAnim;
    if (pAVar14 == (AnimationData *)0x0) goto DAT_?;
    pSVar17 = (pAVar14->fields).state;
    if ((pSVar17 == StringLiteral_Jump) ||
       ((((pSVar17 != (String *)0x0 && (StringLiteral_Jump != (String *)0x0)) &&
         ((pSVar17->fields)._stringLength == (StringLiteral_Jump->fields)._stringLength)) &&
        (bVar18 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                            ((uint8_t *)&(pSVar17->fields)._firstChar,
                             (uint8_t *)&(StringLiteral_Jump->fields)._firstChar,
                             (longlong)(pSVar17->fields)._stringLength * 2,(MethodInfo *)0x0),
        bVar18 != 0)))) {
      pAVar19 = (pBVar5->fields).avatarAnimation;
      if (pAVar19 == (Animation *)0x0) goto DAT_?;
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_RewindNamed
                (pAVar19,pSVar16,(MethodInfo *)0x0);
      pAVar14 = (pBVar5->fields).currentAnim;
      if ((pAVar14 == (AnimationData *)0x0) ||
         (pAVar19 = (pBVar5->fields).avatarAnimation, pAVar19 == (Animation *)0x0))
      goto DAT_?;
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_3
                (pAVar19,(pAVar14->fields).state,PlayMode__Enum_StopAll,(MethodInfo *)0x0);
    }
    else {
      pAVar14 = (pBVar5->fields).currentAnim;
      if ((pAVar14 == (AnimationData *)0x0) ||
         (pAVar19 = (pBVar5->fields).avatarAnimation, pAVar19 == (Animation *)0x0))
      goto DAT_?;
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_CrossFade
                (pAVar19,(pAVar14->fields).state,_UNK_?,PlayMode__Enum_StopAll,
                 (MethodInfo *)0x0);
    }
    pAVar14 = (pBVar5->fields).currentAnim;
    if (pAVar14 == (AnimationData *)0x0) goto DAT_?;
    iVar13 = (pAVar14->fields).timeStamp;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__TransformNetworkManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (iVar13 < TypeInfo__TransformNetworkManager->static_fields->_DelayedTime_k__BackingField) {
      iVar13 = FUN_?();
      pAVar14 = (pBVar5->fields).currentAnim;
      if (pAVar14 == (AnimationData *)0x0) {
DAT_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar20 = (pAVar14->fields).timeStamp;
      pAVar19 = (pBVar5->fields).avatarAnimation;
      if ((pAVar19 == (Animation *)0x0) ||
         (pAVar21 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                              (pAVar19,(pAVar14->fields).state,(MethodInfo *)0x0),
         pAVar21 == (AnimationState *)0x0)) goto DAT_?;
      pvVar22 = (pAVar21->fields)._.m_Ptr;
      if (pvVar22 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar21,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar23 = func_?(&UNK_?);
        FUN_?(uVar23,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      fVar24 = (float)(iVar13 - iVar20) * _UNK_?;
      fVar25 = (float)(*pcRam_?)(pvVar22);
      pAVar14 = (pBVar5->fields).currentAnim;
      if (((pAVar14 == (AnimationData *)0x0) ||
          (pAVar19 = (pBVar5->fields).avatarAnimation, pAVar19 == (Animation *)0x0)) ||
         (pAVar21 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                              (pAVar19,(pAVar14->fields).state,(MethodInfo *)0x0),
         pAVar21 == (AnimationState *)0x0)) goto DAT_?;
      pvVar22 = (pAVar21->fields)._.m_Ptr;
      if (pvVar22 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar21,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar23 = func_?(&UNK_?);
        FUN_?(uVar23,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)(pvVar22,fVar24 / fVar25);
    }
    (pBVar5->fields).prevAnim = (pBVar5->fields).currentAnim;
    if (iRam_? != 0) {
      uVar9 = (uint)((ulonglong)&(pBVar5->fields).prevAnim >> 0xc);
      uVar11 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
      do {
        uVar15 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
        puVar12 = (ulonglong *)(uVar11 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar15 == *puVar12;
        if (bVar8) {
          *puVar12 = uVar15 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    iVar13 = iRam_?;
    (pBVar5->fields).currentAnim = (AnimationData *)0x0;
    if (iVar13 != 0) {
      uVar9 = (uint)((ulonglong)&(pBVar5->fields).currentAnim >> 0xc);
      uVar11 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
      do {
        uVar15 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
        puVar12 = (ulonglong *)(uVar11 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar15 == *puVar12;
        if (bVar8) {
          *puVar12 = uVar15 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
  }
  return;
}


/* Void StartBlinking(BlinkType, Single) */

void Assembly-CSharp.dll::MVBody::MVBody_StartBlinking
               (MVBody *this,BlinkType__Enum type,float duration,MethodInfo *method)

{
  pMVar1 = (this->fields).bodyObject;
  if ((pMVar1 == (MVBodyObject *)0x0) ||
     (pAVar2 = (pMVar1->fields).avatarBlinker, pAVar2 == (AvatarBlinker *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Item_BlinkType_
                  ,CONCAT44(in_register_00000014,type),in_R8,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (pAVar2->fields)._.blinkers;
  if ((this_00 != (Dictionary_2_BlinkType_Blinker_ *)0x0) &&
     (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,type,
                          MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Item_BlinkType_
                         ), pOVar4 != (Object *)0x0)) {
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    uVar6 = (*pcRam_?)();
    *(float *)((longlong)&pOVar4[1].monitor + 4) = duration;
    *(undefined4 *)&pOVar4[1].monitor = uVar6;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void StopBlinking(BlinkType) */

void Assembly-CSharp.dll::MVBody::MVBody_StopBlinking
               (MVBody *this,BlinkType__Enum type,MethodInfo *method)

{
  pMVar1 = (this->fields).bodyObject;
  if ((pMVar1 != (MVBodyObject *)0x0) &&
     (pAVar2 = (pMVar1->fields).avatarBlinker, pAVar2 != (AvatarBlinker *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Item_BlinkType_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (pAVar2->fields)._.blinkers;
    if (this_00 != (Dictionary_2_BlinkType_Blinker_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,type,
                          MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Item_BlinkType_
                         );
      if (pOVar3 != (Object *)0x0) {
        pOVar3[1].monitor = (MonitorData *)0x0;
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SyncOffset(AccessorySlotType, Single) */

void Assembly-CSharp.dll::MVBody::MVBody_SyncOffset
               (MVBody *this,AccessorySlotType__Enum slot,float offset,MethodInfo *method)

{
  if ((this->fields).previewBodyAccessoriesController != (BodyAccessoriesController *)0x0) {
    return;
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  fVar2 = (float)(this->fields)._._._._.id;
  if (pMVar1 != (MVNetworkGame_OperationRequests *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Byte_System_Object_ *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    afStackX_8[0] = fVar2;
    pOVar3 = (Object *)FUN_?(uRam_?,afStackX_8);
    if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      uVar4 = CONCAT71((int7)((ulonglong)method >> 8),1);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__TryInsert
                (this_00,0x7e,pOVar3,(InsertionBehavior__Enum)uVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
                 ->klass->rgctx_data[0x22].method);
      afStackX_8[0] = (float)slot;
      pOVar3 = (Object *)FUN_?(uRam_?,afStackX_8);
      uVar5 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__TryInsert
                (this_00,0x71,pOVar3,(InsertionBehavior__Enum)uVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
                 ->klass->rgctx_data[0x22].method);
      afStackX_8[0] = offset;
      pOVar3 = (Object *)FUN_?(uRam_?,afStackX_8);
      method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
                  ->klass->rgctx_data[0x22].method;
      uVar4 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x72);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__TryInsert
                (this_00,0x72,pOVar3,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar5 >> 8),1),method_00);
      pPVar6 = (pMVar1->fields).peer;
      if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      if (pPVar6 != (PhotonPeer *)0x0) {
        (*(pPVar6->klass->vtable).SendOperation.methodPtr)
                  (pPVar6,CONCAT71((int7)((ulonglong)uVar4 >> 8),0x33),this_00,
                   TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                   (pPVar6->klass->vtable).SendOperation.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SyncScale(AccessorySlotType, Single) */

void Assembly-CSharp.dll::MVBody::MVBody_SyncScale
               (MVBody *this,AccessorySlotType__Enum slot,float scale,MethodInfo *method)

{
  if ((this->fields).previewBodyAccessoriesController != (BodyAccessoriesController *)0x0) {
    return;
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  fVar2 = (float)(this->fields)._._._._.id;
  if (pMVar1 != (MVNetworkGame_OperationRequests *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Byte_System_Object_ *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    afStackX_8[0] = fVar2;
    pOVar3 = (Object *)FUN_?(uRam_?,afStackX_8);
    if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      uVar4 = CONCAT71((int7)((ulonglong)method >> 8),1);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__TryInsert
                (this_00,0x7e,pOVar3,(InsertionBehavior__Enum)uVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
                 ->klass->rgctx_data[0x22].method);
      afStackX_8[0] = (float)slot;
      pOVar3 = (Object *)FUN_?(uRam_?,afStackX_8);
      uVar5 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__TryInsert
                (this_00,0x71,pOVar3,(InsertionBehavior__Enum)uVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
                 ->klass->rgctx_data[0x22].method);
      afStackX_8[0] = scale;
      pOVar3 = (Object *)FUN_?(uRam_?,afStackX_8);
      method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
                  ->klass->rgctx_data[0x22].method;
      uVar4 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x22);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__TryInsert
                (this_00,0x22,pOVar3,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar5 >> 8),1),method_00);
      pPVar6 = (pMVar1->fields).peer;
      if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      if (pPVar6 != (PhotonPeer *)0x0) {
        (*(pPVar6->klass->vtable).SendOperation.methodPtr)
                  (pPVar6,CONCAT71((int7)((ulonglong)uVar4 >> 8),99),this_00,
                   TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                   (pPVar6->klass->vtable).SendOperation.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void ToggleBlinking(Boolean) */

void Assembly-CSharp.dll::MVBody::MVBody_ToggleBlinking
               (MVBody *this,bool shouldShowBlinking,MethodInfo *method)

{
  pMVar1 = (this->fields).bodyObject;
  if ((pMVar1 != (MVBodyObject *)0x0) &&
     (pAVar2 = (pMVar1->fields).avatarBlinker, pAVar2 != (AvatarBlinker *)0x0)) {
    (pAVar2->fields)._.visible = shouldShowBlinking;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateBlinking() */

void Assembly-CSharp.dll::MVBody::MVBody_UpdateBlinking(MVBody *this,MethodInfo *method)

{
  pMVar1 = (this->fields).bodyObject;
  if ((pMVar1 == (MVBodyObject *)0x0) ||
     (pAVar2 = (pMVar1->fields).avatarBlinker, pAVar2 == (AvatarBlinker *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Values__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BlinkType,_Blinker>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((((pAVar2->fields)._.visible == 0) ||
      ((pAVar2->fields)._.blinkers == (Dictionary_2_BlinkType_Blinker_ *)0x0)) ||
     (pDVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                TypeConverterRegistry+ConverterKey,System::Object]::
                Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                          ((Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                            *)(pAVar2->fields)._.blinkers,
                           MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Values__
                          ),
     pDVar4 ==
     (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
      *)0x0)) {
    return;
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(pAVar2->fields)._.blinkers;
  if ((this_00 ==
       (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
     || (pDVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                   ::TypeConverterRegistry+ConverterKey,System::Object]::
                   Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                             (this_00,
                              MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Values__
                             ),
        pDVar4 ==
        (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
         *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pDStack_5 = (pDVar4->fields)._dictionary;
  ppDStack_6 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 **)0x0;
  uStack_7 = 0;
  if (iRam_? != 0) {
    uVar8 = (uint)((ulonglong)&pDStack_9 >> 0xc);
    puVar10 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar11 = *puVar10;
      LOCK();
      uVar12 = *puVar10;
      if (uVar11 == uVar12) {
        *puVar10 = uVar11 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (uVar11 != uVar12);
  }
  if (pDStack_5 ==
      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
  {
    pDStack_9 = pDStack_5;
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uStack_13._4_4_ = (pDStack_5->fields)._version;
  uStack_7 = 0;
  uStack_13._0_4_ = 0;
  pBStack_14 = (Blinker *)0x0;
  pDStack_9 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                *)0x0;
  ppDStack_6 = &pDStack_5;
code_?:
  if (pDStack_5 !=
      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
  {
    if (uStack_13._4_4_ == (pDStack_5->fields)._version) {
      do {
        if (pDStack_5 ==
            (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )0x0) goto code_?;
        if ((uint)(pDStack_5->fields)._count <= (uint)uStack_13) {
          return;
        }
        pDVar15 = (pDStack_5->fields)._entries;
        lVar16 = (longlong)(int)(uint)uStack_13;
        uVar8 = (uint)uStack_13 + 1;
        if (pDVar15 == (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                       *)0x0) goto code_?;
        if ((uint)pDVar15->max_length <= (uint)uStack_13) {
          uStack_13._0_4_ = uVar8;
          FUN_?();
          goto code_?;
        }
        uStack_13._0_4_ = uVar8;
      } while ((&pDVar15->vector[0].hashCode)[lVar16 * 6] < 0);
      pBStack_14 = *(Blinker **)((longlong)&pDVar15->vector[0].key + lVar16 * 0x18 + 8);
      func_?();
      this_02 = pBStack_14;
      if (pBStack_14 != (Blinker *)0x0) goto code_?;
      goto code_?;
    }
    goto code_?;
  }
code_?:
  FUN_?();
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
code_?:
  bVar17 = Blinker::Blinker_get_IsExpired(pBStack_14,(MethodInfo *)0x0);
  if ((bVar17 == 0) &&
     ((*(pAVar2->klass->vtable).BeforeDraw.methodPtr)(),
     (pAVar2->fields)._.meshFilters != (MeshFilter__Array *)0x0)) {
    pMVar18 = (pAVar2->fields)._.meshFilters;
    for (uVar8 = 0; uVar19 = (uint)pMVar18->max_length, (int)uVar8 < (int)uVar19; uVar8 = uVar8 + 1
        ) {
      if (uVar19 <= uVar8) goto code_?;
      this_01 = pMVar18->vector[(int)uVar8];
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (this_01 != (MeshFilter *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((this_01->fields)._._.m_CachedPtr != (void *)0x0) {
          this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this_01,(MethodInfo *)0x0);
          if (this_03 == (GameObject *)0x0) goto code_?;
          bVar17 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                   GameObject_get_activeInHierarchy(this_03,(MethodInfo *)0x0);
          if (bVar17 != 0) {
            tfm = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_01,(MethodInfo *)0x0);
            mesh = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh
                             (this_01,(MethodInfo *)0x0);
            if (this_02 == (Blinker *)0x0) goto code_?;
            Blinker::Blinker_Draw
                      (this_02,mesh,tfm,(pAVar2->fields)._.targetCamera,(pAVar2->fields)._.layerMask
                       ,(MethodInfo *)0x0);
          }
        }
      }
    }
  }
  goto code_?;
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  uVar8 = (uint)uStack_13;
code_?:
  uStack_13._0_4_ = uVar8;
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::
  ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0)
  ;
  goto code_?;
}


/* Void UpdateBodyClone(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVBody::MVBody_UpdateBodyClone
               (MVBody *this,Dictionary_2_System_Object_System_Object_ *accessoryData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).bodyClone;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pBVar1 != (BodyClone *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pBVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pBVar1 = (this->fields).bodyClone;
      if ((pBVar1 == (BodyClone *)0x0) ||
         (this_00 = (pBVar1->fields).bodyAccessoriesController,
         this_00 == (BodyAccessoriesController *)0x0)) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      BodyAccessoriesController::BodyAccessoriesController_RefreshAccessories
                (this_00,accessoryData,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void UpdateVisibility() */

void Assembly-CSharp.dll::MVBody::MVBody_UpdateVisibility(MVBody *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Renderer>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Renderer>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Renderer>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Renderer>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).renderers;
  if (pLVar1 != (List_1_UnityEngine_Renderer_ *)0x0) {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&uStack_3 >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (ulonglong)(uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    pLStack_7 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar1->fields)._version << 0x20);
    uStack_8 = 0;
    LStack_9._8_8_ = pLStack_7;
    LStack_9._current = (Object *)0x0;
    uStack_3 = 0;
    pLStack_7 = &LStack_9;
    LStack_9._list = (List_1_System_Object_ *)pLVar1;
    while (bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             (&LStack_9,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Renderer>__MoveNext__
                             ), pAVar11 = (AvatarBlinker *)LStack_9._current, bVar10 != 0) {
      bVar10 = (this->fields).visible;
      if ((AvatarBlinker *)LStack_9._current == (AvatarBlinker *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar12 = (((AvatarBlinker__Fields *)((longlong)pAVar11 + 0x10))->_)._._._._.m_CachedPtr;
      if (pvVar12 == (void *)0x0) goto code_?;
      pcVar13 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0))
      goto code_?;
      pcRam_? = pcVar13;
      (*pcRam_?)(pvVar12,bVar10);
      unaff_RDI = pAVar11;
    }
    if ((this->fields).shadowVisible != 0) {
      pMVar14 = (this->fields).bodyObject;
      if (pMVar14 == (MVBodyObject *)0x0) goto code_?;
      unaff_RDI = (AvatarBlinker *)(pMVar14->fields).avatarBlobShadowController;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (unaff_RDI != (AvatarBlinker *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((unaff_RDI->fields)._._._._._.m_CachedPtr != (void *)0x0) {
          pMVar14 = (this->fields).bodyObject;
          if ((pMVar14 == (MVBodyObject *)0x0) ||
             (this_00 = (pMVar14->fields).avatarBlobShadowController,
             this_00 == (AvatarBlobShadowController *)0x0)) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)this_00,(this->fields).visible,(MethodInfo *)0x0);
        }
      }
    }
    pMVar14 = (this->fields).bodyObject;
    if (pMVar14 != (MVBodyObject *)0x0) {
      unaff_RDI = (pMVar14->fields).avatarBlinker;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (unaff_RDI != (AvatarBlinker *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((unaff_RDI->fields)._._._._._.m_CachedPtr != (void *)0x0) {
          pMVar14 = (this->fields).bodyObject;
          if ((pMVar14 == (MVBodyObject *)0x0) ||
             (pAVar11 = (pMVar14->fields).avatarBlinker, pAVar11 == (AvatarBlinker *)0x0))
          goto code_?;
          (pAVar11->fields)._.visible = (this->fields).visible;
        }
      }
      this_01 = (this->fields).bodyAccessoriesController;
      if (this_01 != (BodyAccessoriesController *)0x0) {
        BodyAccessoriesController::BodyAccessoriesController_UpdateAccessoryVisibility
                  (this_01,(this->fields).visible,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pAVar11 = unaff_RDI;
code_?:
  uVar15 = func_?(&UNK_?);
  FUN_?(uVar15);
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar11,(MethodInfo *)0x0);
code_?:
  FUN_?();
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* MVBody(Dictionary`2[System.Object,System.Object], Dictionary`2[System.Int32,MVWorldObjectClient])
    */

void Assembly-CSharp.dll::MVBody::MVBody__ctor
               (MVBody *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__BlueprintData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_IModelingConstraint>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_IModelingConstraint>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Collider>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVCubeModelInstance>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Renderer>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<MVCubeModelInstance>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Collider>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Renderer>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatar);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVBodyObject);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVBuildModeAvatar);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_d);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Accessory_data_not_found__This_s);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Player);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).collidersEnabled = 1;
  (this->fields).shadowVisible = 1;
  (this->fields).visible = 1;
  this_03 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_IModelingConstraint>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_03,
             MethodInfo__System__Collections__Generic__Dictionary<int,_IModelingConstraint>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).constraints = (Dictionary_2_System_Int32_IModelingConstraint_ *)this_03;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).constraints >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_04 = (List_1_UnityEngine_Renderer_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Renderer>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_04,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Renderer>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).renderers = this_04;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).renderers >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_05 = (List_1_UnityEngine_Collider_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Collider>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_05,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Collider>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).colliders = this_05;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).colliders >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_06 = (List_1_MVCubeModelInstance_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<MVCubeModelInstance>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_06,
             MethodInfo__System__Collections__Generic__List<MVCubeModelInstance>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).attachedPartModels = this_06;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).attachedPartModels >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar7 = (pVVar6->zeroVector).y;
  fVar8 = (pVVar6->zeroVector).z;
  (this->fields).modelScale.x = (pVVar6->zeroVector).x;
  (this->fields).modelScale.y = fVar7;
  (this->fields).modelScale.z = fVar8;
  if (bVar1) {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar9 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar9 == (PrefabPool *)0x0) goto code_?;
  MVBlueprintBase::MVBlueprintBase__ctor_1
            ((MVBlueprintBase *)this,data,(ObjectPrefab *)(pPVar9->fields).mvBodyPrefab,worldObjects
             ,(MethodInfo *)0x0);
  pMVar10 = (MVBodyObject *)(this->fields)._._._.component;
  if (pMVar10 == (MVBodyObject *)0x0) {
    (this->fields).bodyObject = (MVBodyObject *)0x0;
  }
  else {
    bVar11 = (TypeInfo__MVBodyObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pMVar10->klass)->_1).naturalAligment < bVar11) ||
       ((((ObjectPrefab__Class *)pMVar10->klass)->_1).typeHierarchy[(ulonglong)bVar11 - 1] !=
        (Il2CppClass *)TypeInfo__MVBodyObject)) {
      FUN_?(pMVar10);
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    (this->fields).bodyObject = pMVar10;
    bVar11 = (TypeInfo__MVBodyObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pMVar10->klass)->_1).naturalAligment < bVar11) ||
       ((((ObjectPrefab__Class *)pMVar10->klass)->_1).typeHierarchy[(ulonglong)bVar11 - 1] !=
        (Il2CppClass *)TypeInfo__MVBodyObject)) {
      FUN_?(pMVar10);
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).bodyObject >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pOStackX_10 = (Object *)0x0;
  if (worldObjects == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0)
  goto code_?;
  pOVar13 = (Object__Class *)
            MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
  ;
  bVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
           Dictionary_2_System_Int32_System_Object__TryGetValue
                     ((Dictionary_2_System_Int32_System_Object_ *)worldObjects,
                      (this->fields)._._._._.groupId,&pOStackX_10,
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                     );
  if ((bVar14 != 0) && (pOStackX_10 != (Object *)0x0)) {
    pOVar13 = pOStackX_10->klass;
    bVar11 = (TypeInfo__MVAvatar->_1).naturalAligment;
    if ((bVar11 <= (pOVar13->_1).naturalAligment) &&
       ((MVAvatar__Class *)(pOVar13->_1).typeHierarchy[(ulonglong)bVar11 - 1] == TypeInfo__MVAvatar))
    {
      if (pOStackX_10 == (Object *)0x0) goto code_?;
      (this->fields).hasAvatarBeenAttached = 1;
    }
    if (pOStackX_10 != (Object *)0x0) {
      pOVar13 = pOStackX_10->klass;
      bVar11 = (TypeInfo__MVBuildModeAvatar->_1).naturalAligment;
      if (((bVar11 <= (pOVar13->_1).naturalAligment) &&
          ((MVBuildModeAvatar__Class *)(pOVar13->_1).typeHierarchy[(ulonglong)bVar11 - 1] ==
           TypeInfo__MVBuildModeAvatar)) && (pOStackX_10 != (Object *)0x0)) {
        (this->fields).hasAvatarBeenAttached = 1;
      }
    }
  }
code_?:
  piVar15 = &(this->fields)._._._.previewLayerMask;
  *piVar15 = *piVar15 | 0x1000;
  bVar1 = iRam_? != 0;
  (this->fields)._LayerToSetTo_k__BackingField = StringLiteral_Player;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._LayerToSetTo_k__BackingField >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_00 = (this->fields)._._._.gameObject;
  iVar16 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                     ((this->fields)._LayerToSetTo_k__BackingField,(MethodInfo *)0x0);
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
              (this_00,iVar16,(MethodInfo *)0x0);
    this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)(this->fields)._.blueprintData;
    auStackX_8[0] = 4;
    pEVar17 = (Enum *)FUN_?(TypeInfo__MV__Common__BlueprintData,auStackX_8);
    pSVar18 = mscorlib.dll::System::Enum::Enum_ToString_2(pEVar17,StringLiteral_d,(MethodInfo *)0x0)
    ;
    if (this_01 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        0x0) {
      iVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
               UIElements::StyleComplexSelector+PseudoStateData]::
               Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                         (this_01,(Object *)pSVar18,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          ->klass->rgctx_data[0x21].method);
      if (iVar16 < 0) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_Accessory_data_not_found__This_s,(MethodInfo *)0x0);
        this_02 = (this->fields)._.blueprintData;
        auStackX_8[0] = 4;
        pEVar17 = (Enum *)FUN_?(TypeInfo__MV__Common__BlueprintData,auStackX_8);
        pSVar18 = mscorlib.dll::System::Enum::Enum_ToString_2
                            (pEVar17,StringLiteral_d,(MethodInfo *)0x0);
        this_07 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                   *)FUN_?(
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
        Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                  (this_07,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        if (this_02 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  (this_02,(Object *)pSVar18,(Object *)this_07,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pOVar13 >> 8),1),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Boolean get_AccessoryMoveOverride() */

bool Assembly-CSharp.dll::MVBody::MVBody_get_AccessoryMoveOverride(MVBody *this,MethodInfo *method)

{
  pBVar1 = (this->fields).bodyAccessoriesController;
  if (pBVar1 != (BodyAccessoriesController *)0x0) {
    return (pBVar1->fields).accessoryMoveOverride;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* BoneAnimation get_Animation() */

BoneAnimation * Assembly-CSharp.dll::MVBody::MVBody_get_Animation(MVBody *this,MethodInfo *method)

{
  pMVar1 = (this->fields).bodyObject;
  if (pMVar1 != (MVBodyObject *)0x0) {
    return (pMVar1->fields).boneAnimation;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pBVar3 = (BoneAnimation *)(*pcVar2)();
  return pBVar3;
}


/* AvatarBlobShadowController get_BlobShadow() */

AvatarBlobShadowController *
Assembly-CSharp.dll::MVBody::MVBody_get_BlobShadow(MVBody *this,MethodInfo *method)

{
  pMVar1 = (this->fields).bodyObject;
  if (pMVar1 != (MVBodyObject *)0x0) {
    return (pMVar1->fields).avatarBlobShadowController;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pAVar3 = (AvatarBlobShadowController *)(*pcVar2)();
  return pAVar3;
}


/* BodyData get_BodyData() */

BodyData * Assembly-CSharp.dll::MVBody::MVBody_get_BodyData(MVBody *this,MethodInfo *method)

{
  pMVar1 = (this->fields).bodyObject;
  if (pMVar1 != (MVBodyObject *)0x0) {
    return (pMVar1->fields).bodyData;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pBVar3 = (BodyData *)(*pcVar2)();
  return pBVar3;
}


/* Boolean get_CollidersEnabled() */

bool Assembly-CSharp.dll::MVBody::MVBody_get_CollidersEnabled(MVBody *this,MethodInfo *method)

{
  return (this->fields).collidersEnabled;
}


/* Boolean get_ForceHidden() */

bool Assembly-CSharp.dll::MVBody::MVBody_get_ForceHidden(MVBody *this,MethodInfo *method)

{
  return (this->fields).forceHidden;
}


/* Boolean get_IsPlayerBody() */

bool Assembly-CSharp.dll::MVBody::MVBody_get_IsPlayerBody(MVBody *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._._._.group;
  if (pMVar1 != (MVGroup *)0x0) {
    return (pMVar1->fields)._.group != (MVGroup *)0x0;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean get_ShadowVisible() */

bool Assembly-CSharp.dll::MVBody::MVBody_get_ShadowVisible(MVBody *this,MethodInfo *method)

{
  return (this->fields).shadowVisible;
}


/* Boolean get_Visible() */

bool Assembly-CSharp.dll::MVBody::MVBody_get_Visible(MVBody *this,MethodInfo *method)

{
  return (this->fields).visible;
}


/* Void set_AccessoryMoveOverride(Boolean) */

void Assembly-CSharp.dll::MVBody::MVBody_set_AccessoryMoveOverride
               (MVBody *this,bool value,MethodInfo *method)

{
  this_01 = (this->fields).bodyAccessoriesController;
  if (this_01 == (BodyAccessoriesController *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__GetEnumerator__
                  ,CONCAT71(in_register_00000011,value),0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  SelectionHelperAvatarAccessory__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionHelperAvatarAccessory>_bool_____
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_2 = (undefined1  [8])0x0;
  uStack_3._0_4_ = 0;
  uStack_3._4_4_ = 0;
  KStack_4.key = 0;
  KStack_4._4_4_ = 0;
  KStack_4.value = (Object *)0x0;
  uStack_5._0_4_ = 0;
  uStack_5._4_4_ = 0;
  (this_01->fields).accessoryMoveOverride = value;
  if (value == 0) {
    this_00 = (this_01->fields).bodyData;
    if ((this_00 != (BodyData *)0x0) &&
       (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_00,(MethodInfo *)0x0), pGVar6 != (GameObject *)0x0)) {
      p_Var6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
               GameObject_GetComponentsInChildren_4
                         (pGVar6,1,
                          SelectionHelperAvatarAccessory__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionHelperAvatarAccessory>_bool_____
                         );
      uVar7 = 0;
      if (p_Var6 != (_Il2CppFullySharedGenericType__Array *)0x0) {
        pp_Var8 = p_Var6->vector;
        while( true ) {
          if ((int)p_Var6->max_length <= (int)uVar7) {
            return;
          }
          if ((uint)p_Var6->max_length <= uVar7) {
            FUN_?();
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if ((Component *)*pp_Var8 == (Component *)0x0) break;
          pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)*pp_Var8,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                    ((Object_1 *)pGVar6,0.0,(MethodInfo *)0x0);
          uVar7 = uVar7 + 1;
          pp_Var8 = pp_Var8 + 1;
        }
      }
    }
  }
  else {
    pDStack_8 = (Dictionary_2_System_UInt32_System_Object_ *)(this_01->fields).accessoryMap;
    if (pDStack_8 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)&pDStack_8 >> 0xc);
        uVar9 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
        do {
          uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
          puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
          LOCK();
          bVar12 = uVar10 == *puVar11;
          if (bVar12) {
            *puVar11 = uVar10 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar12);
      }
      uStack_13 = (ulonglong)(uint)(pDStack_8->fields)._version;
      uStack_14 = 2;
      uStack_15 = 0;
      uStack_16 = 0;
      uStack_3 = (undefined *)uStack_13;
      KStack_4.key = 0;
      KStack_4._4_4_ = 0;
      KStack_4.value = (Object *)0x0;
      uStack_5._0_4_ = 2;
      uStack_5._4_4_ = 0;
      auStack_2 = (undefined1  [8])pDStack_8;
      while (bVar17 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                     Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                               ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                                auStack_2,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__MoveNext__
                               ), bVar17 != 0) {
        BodyAccessoriesController::BodyAccessoriesController_MakeAccessorySelectable
                  (this_01,(AvatarAccessory *)KStack_4.value,KStack_4.key,(MethodInfo *)0x0);
      }
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void set_CollidersEnabled(Boolean) */

void Assembly-CSharp.dll::MVBody::MVBody_set_CollidersEnabled
               (MVBody *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Collider>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Collider>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Collider>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).collidersEnabled = value;
  LStack_1._list = (List_1_System_Object_ *)(this->fields).colliders;
  if ((List_1_UnityEngine_Collider_ *)LStack_1._list == (List_1_UnityEngine_Collider_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)
                (uint)(((List_1_UnityEngine_Collider_ *)LStack_1._list)->fields)._version << 0x20);
  uStack_9 = 0;
  LStack_1._8_8_ = pLStack_8;
  LStack_1._current = (Object *)0x0;
  uStack_4 = 0;
  pLStack_8 = &LStack_1;
  while( true ) {
    bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_1,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Collider>__MoveNext__
                      );
    obj = LStack_1._current;
    if (bVar10 == 0) {
      return;
    }
    bVar10 = (this->fields).collidersEnabled;
    if (LStack_1._current == (Object *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Collider>_UnityEngine__Collider_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pOVar11 = obj[1].klass;
    if (pOVar11 == (Object__Class *)0x0) break;
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar12 = func_?(&UNK_?);
      FUN_?(uVar12);
      break;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pOVar11,bVar10);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
code_?:
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_ForceHidden(Boolean) */

void Assembly-CSharp.dll::MVBody::MVBody_set_ForceHidden(MVBody *this,bool value,MethodInfo *method)

{
  if ((this->fields).forceHidden == value) {
    return;
  }
  (this->fields).forceHidden = value;
  (this->fields).shadowVisible = value ^ 1;
  (this->fields).visible = value ^ 1;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Renderer>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Renderer>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Renderer>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Renderer>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).renderers;
  if (pLVar1 != (List_1_UnityEngine_Renderer_ *)0x0) {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&uStack_3 >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (ulonglong)(uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    pLStack_7 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar1->fields)._version << 0x20);
    uStack_8 = 0;
    LStack_9._8_8_ = pLStack_7;
    LStack_9._current = (Object *)0x0;
    uStack_3 = 0;
    pLStack_7 = &LStack_9;
    LStack_9._list = (List_1_System_Object_ *)pLVar1;
    while (bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             (&LStack_9,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Renderer>__MoveNext__
                             ), pAVar11 = (AvatarBlinker *)LStack_9._current, bVar10 != 0) {
      bVar10 = (this->fields).visible;
      if ((AvatarBlinker *)LStack_9._current == (AvatarBlinker *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar12 = (((AvatarBlinker__Fields *)((longlong)pAVar11 + 0x10))->_)._._._._.m_CachedPtr;
      if (pvVar12 == (void *)0x0) goto code_?;
      pcVar13 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0))
      goto code_?;
      pcRam_? = pcVar13;
      (*pcRam_?)(pvVar12,bVar10);
      unaff_RDI = pAVar11;
    }
    if ((this->fields).shadowVisible != 0) {
      pMVar14 = (this->fields).bodyObject;
      if (pMVar14 == (MVBodyObject *)0x0) goto code_?;
      unaff_RDI = (AvatarBlinker *)(pMVar14->fields).avatarBlobShadowController;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (unaff_RDI != (AvatarBlinker *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((unaff_RDI->fields)._._._._._.m_CachedPtr != (void *)0x0) {
          pMVar14 = (this->fields).bodyObject;
          if ((pMVar14 == (MVBodyObject *)0x0) ||
             (this_00 = (pMVar14->fields).avatarBlobShadowController,
             this_00 == (AvatarBlobShadowController *)0x0)) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)this_00,(this->fields).visible,(MethodInfo *)0x0);
        }
      }
    }
    pMVar14 = (this->fields).bodyObject;
    if (pMVar14 != (MVBodyObject *)0x0) {
      unaff_RDI = (pMVar14->fields).avatarBlinker;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (unaff_RDI != (AvatarBlinker *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((unaff_RDI->fields)._._._._._.m_CachedPtr != (void *)0x0) {
          pMVar14 = (this->fields).bodyObject;
          if ((pMVar14 == (MVBodyObject *)0x0) ||
             (pAVar11 = (pMVar14->fields).avatarBlinker, pAVar11 == (AvatarBlinker *)0x0))
          goto code_?;
          (pAVar11->fields)._.visible = (this->fields).visible;
        }
      }
      this_01 = (this->fields).bodyAccessoriesController;
      if (this_01 != (BodyAccessoriesController *)0x0) {
        BodyAccessoriesController::BodyAccessoriesController_UpdateAccessoryVisibility
                  (this_01,(this->fields).visible,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pAVar11 = unaff_RDI;
code_?:
  uVar15 = func_?(&UNK_?);
  FUN_?(uVar15);
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar11,(MethodInfo *)0x0);
code_?:
  FUN_?();
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void set_ShadowVisible(Boolean) */

void Assembly-CSharp.dll::MVBody::MVBody_set_ShadowVisible
               (MVBody *this,bool value,MethodInfo *method)

{
  if (((this->fields).forceHidden != 0) || ((this->fields).shadowVisible == value)) {
    return;
  }
  (this->fields).shadowVisible = value;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Renderer>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Renderer>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Renderer>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Renderer>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).renderers;
  if (pLVar1 != (List_1_UnityEngine_Renderer_ *)0x0) {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&uStack_3 >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (ulonglong)(uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    pLStack_7 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar1->fields)._version << 0x20);
    uStack_8 = 0;
    LStack_9._8_8_ = pLStack_7;
    LStack_9._current = (Object *)0x0;
    uStack_3 = 0;
    pLStack_7 = &LStack_9;
    LStack_9._list = (List_1_System_Object_ *)pLVar1;
    while (bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             (&LStack_9,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Renderer>__MoveNext__
                             ), pAVar11 = (AvatarBlinker *)LStack_9._current, bVar10 != 0) {
      bVar10 = (this->fields).visible;
      if ((AvatarBlinker *)LStack_9._current == (AvatarBlinker *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar12 = (((AvatarBlinker__Fields *)((longlong)pAVar11 + 0x10))->_)._._._._.m_CachedPtr;
      if (pvVar12 == (void *)0x0) goto code_?;
      pcVar13 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0))
      goto code_?;
      pcRam_? = pcVar13;
      (*pcRam_?)(pvVar12,bVar10);
      unaff_RDI = pAVar11;
    }
    if ((this->fields).shadowVisible != 0) {
      pMVar14 = (this->fields).bodyObject;
      if (pMVar14 == (MVBodyObject *)0x0) goto code_?;
      unaff_RDI = (AvatarBlinker *)(pMVar14->fields).avatarBlobShadowController;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (unaff_RDI != (AvatarBlinker *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((unaff_RDI->fields)._._._._._.m_CachedPtr != (void *)0x0) {
          pMVar14 = (this->fields).bodyObject;
          if ((pMVar14 == (MVBodyObject *)0x0) ||
             (this_00 = (pMVar14->fields).avatarBlobShadowController,
             this_00 == (AvatarBlobShadowController *)0x0)) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)this_00,(this->fields).visible,(MethodInfo *)0x0);
        }
      }
    }
    pMVar14 = (this->fields).bodyObject;
    if (pMVar14 != (MVBodyObject *)0x0) {
      unaff_RDI = (pMVar14->fields).avatarBlinker;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (unaff_RDI != (AvatarBlinker *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((unaff_RDI->fields)._._._._._.m_CachedPtr != (void *)0x0) {
          pMVar14 = (this->fields).bodyObject;
          if ((pMVar14 == (MVBodyObject *)0x0) ||
             (pAVar11 = (pMVar14->fields).avatarBlinker, pAVar11 == (AvatarBlinker *)0x0))
          goto code_?;
          (pAVar11->fields)._.visible = (this->fields).visible;
        }
      }
      this_01 = (this->fields).bodyAccessoriesController;
      if (this_01 != (BodyAccessoriesController *)0x0) {
        BodyAccessoriesController::BodyAccessoriesController_UpdateAccessoryVisibility
                  (this_01,(this->fields).visible,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pAVar11 = unaff_RDI;
code_?:
  uVar15 = func_?(&UNK_?);
  FUN_?(uVar15);
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar11,(MethodInfo *)0x0);
code_?:
  FUN_?();
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void set_Visible(Boolean) */

void Assembly-CSharp.dll::MVBody::MVBody_set_Visible(MVBody *this,bool value,MethodInfo *method)

{
  if (((this->fields).forceHidden != 0) || ((this->fields).visible == value)) {
    return;
  }
  (this->fields).visible = value;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Renderer>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Renderer>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Renderer>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Renderer>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).renderers;
  if (pLVar1 != (List_1_UnityEngine_Renderer_ *)0x0) {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&uStack_3 >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (ulonglong)(uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    pLStack_7 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar1->fields)._version << 0x20);
    uStack_8 = 0;
    LStack_9._8_8_ = pLStack_7;
    LStack_9._current = (Object *)0x0;
    uStack_3 = 0;
    pLStack_7 = &LStack_9;
    LStack_9._list = (List_1_System_Object_ *)pLVar1;
    while (bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             (&LStack_9,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Renderer>__MoveNext__
                             ), pAVar11 = (AvatarBlinker *)LStack_9._current, bVar10 != 0) {
      bVar10 = (this->fields).visible;
      if ((AvatarBlinker *)LStack_9._current == (AvatarBlinker *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar12 = (((AvatarBlinker__Fields *)((longlong)pAVar11 + 0x10))->_)._._._._.m_CachedPtr;
      if (pvVar12 == (void *)0x0) goto code_?;
      pcVar13 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0))
      goto code_?;
      pcRam_? = pcVar13;
      (*pcRam_?)(pvVar12,bVar10);
      unaff_RDI = pAVar11;
    }
    if ((this->fields).shadowVisible != 0) {
      pMVar14 = (this->fields).bodyObject;
      if (pMVar14 == (MVBodyObject *)0x0) goto code_?;
      unaff_RDI = (AvatarBlinker *)(pMVar14->fields).avatarBlobShadowController;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (unaff_RDI != (AvatarBlinker *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((unaff_RDI->fields)._._._._._.m_CachedPtr != (void *)0x0) {
          pMVar14 = (this->fields).bodyObject;
          if ((pMVar14 == (MVBodyObject *)0x0) ||
             (this_00 = (pMVar14->fields).avatarBlobShadowController,
             this_00 == (AvatarBlobShadowController *)0x0)) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)this_00,(this->fields).visible,(MethodInfo *)0x0);
        }
      }
    }
    pMVar14 = (this->fields).bodyObject;
    if (pMVar14 != (MVBodyObject *)0x0) {
      unaff_RDI = (pMVar14->fields).avatarBlinker;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (unaff_RDI != (AvatarBlinker *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((unaff_RDI->fields)._._._._._.m_CachedPtr != (void *)0x0) {
          pMVar14 = (this->fields).bodyObject;
          if ((pMVar14 == (MVBodyObject *)0x0) ||
             (pAVar11 = (pMVar14->fields).avatarBlinker, pAVar11 == (AvatarBlinker *)0x0))
          goto code_?;
          (pAVar11->fields)._.visible = (this->fields).visible;
        }
      }
      this_01 = (this->fields).bodyAccessoriesController;
      if (this_01 != (BodyAccessoriesController *)0x0) {
        BodyAccessoriesController::BodyAccessoriesController_UpdateAccessoryVisibility
                  (this_01,(this->fields).visible,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pAVar11 = unaff_RDI;
code_?:
  uVar15 = func_?(&UNK_?);
  FUN_?(uVar15);
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar11,(MethodInfo *)0x0);
code_?:
  FUN_?();
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}

