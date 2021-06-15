
/* Void AlignModel(String, Transform, GameObject) */

void Assembly-CSharp.dll::MVBody::MVBody_AlignModel
               (MVBody *this,String *boneName,Transform *bone,GameObject *model,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  pQStack_2 = (Quaternion__Class *)0x0;
  iStack_3 = 0;
  pMVar4 = (this->fields).bodyObject;
  if ((pMVar4 == (MVBodyObject *)0x0) ||
     (this_00 = (pMVar4->fields).bodyData, this_00 == (BodyData *)0x0)) goto code_?;
  pVVar5 = BodyData::BodyData_GetPartBoneSpacePosition
                      (&VStack_6,this_00,boneName,(MethodInfo *)0x0);
  uStack_1._0_4_ = pVVar5->x;
  uStack_1._4_4_ = pVVar5->y;
  pQStack_2 = (Quaternion__Class *)pVVar5->z;
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?();
  }
  pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                      ((Quaternion *)&stack0xffffffc4,(MethodInfo *)0x0);
  fVar8 = pQVar7->x;
  VStack_9.x = pQVar7->y;
  VStack_9.y = pQVar7->z;
  VStack_9.z = pQVar7->w;
  if (boneName == (String *)0x0) goto code_?;
  unaff_EDI = boneName;
  if (TypeInfo__MVBody->static_fields->__f__switch_map1 ==
      (Dictionary_2_System_String_System_Int32_ *)0x0) {
    pDVar10 = (Dictionary_2_System_String_System_Int32_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<System::String,_int>
                             );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::Object]::
    Dictionary_2_WinningConditionType_System_Object___ctor_3
              ((Dictionary_2_WinningConditionType_System_Object_ *)pDVar10,8,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Dictionary_int_
              );
    if (pDVar10 == (Dictionary_2_System_String_System_Int32_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
    Dictionary_2_System_Object_System_Int32__Add
              ((Dictionary_2_System_Object_System_Int32_ *)pDVar10,(Object *)StringLiteral_Head,0,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
    Dictionary_2_System_Object_System_Int32__Add
              ((Dictionary_2_System_Object_System_Int32_ *)pDVar10,(Object *)StringLiteral_Torso,1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
    Dictionary_2_System_Object_System_Int32__Add
              ((Dictionary_2_System_Object_System_Int32_ *)pDVar10,(Object *)StringLiteral_RArm,2,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
    Dictionary_2_System_Object_System_Int32__Add
              ((Dictionary_2_System_Object_System_Int32_ *)pDVar10,(Object *)StringLiteral_LArm,3,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
    Dictionary_2_System_Object_System_Int32__Add
              ((Dictionary_2_System_Object_System_Int32_ *)pDVar10,(Object *)StringLiteral_RUpLeg,4,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
    Dictionary_2_System_Object_System_Int32__Add
              ((Dictionary_2_System_Object_System_Int32_ *)pDVar10,(Object *)StringLiteral_RLowLeg,5
               ,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
    Dictionary_2_System_Object_System_Int32__Add
              ((Dictionary_2_System_Object_System_Int32_ *)pDVar10,(Object *)StringLiteral_LUpLeg,6,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
    Dictionary_2_System_Object_System_Int32__Add
              ((Dictionary_2_System_Object_System_Int32_ *)pDVar10,(Object *)StringLiteral_LLowLeg,7
               ,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
              );
    TypeInfo__MVBody->static_fields->__f__switch_map1 = pDVar10;
  }
  pDVar10 = TypeInfo__MVBody->static_fields->__f__switch_map1;
  if (pDVar10 == (Dictionary_2_System_String_System_Int32_ *)0x0) goto code_?;
  bVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
           Dictionary_2_System_Object_System_Int32__TryGetValue
                     ((Dictionary_2_System_Object_System_Int32_ *)pDVar10,(Object *)boneName,
                      &iStack_3,
                      MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__TryGetValue_System__String__System__Int32__
                     );
  if (bVar11 == 0) goto code_?;
  switch(iStack_3) {
  case 0:
    if (bone == (Transform *)0x0) goto code_?;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                        (&VStack_12,bone,(MethodInfo *)0x0);
    VStack_6.y = pVVar5->x;
    VStack_6.z = pVVar5->y;
    boneName = (String *)pVVar5->z;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                        (&VStack_9,bone,(MethodInfo *)0x0);
    VStack_12.y = pVVar5->x;
    VStack_12.z = pVVar5->y;
    fVar8 = pVVar5->z;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      pQStack_2 = TypeInfo__UnityEngine__Quaternion;
      uStack_1 = CONCAT44(&UNK_?,(undefined4)uStack_1);
      func_?();
    }
    fVar13 = VStack_12.y;
    fVar14 = VStack_12.z;
    uVar15 = VStack_6._4_8_;
    goto code_?;
  case 1:
    if (bone == (Transform *)0x0) goto code_?;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                        (&VStack_9,bone,(MethodInfo *)0x0);
    VStack_6.y = pVVar5->x;
    VStack_6.z = pVVar5->y;
    fVar8 = pVVar5->z;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      VStack_9.z = (float)TypeInfo__UnityEngine__Vector3;
      VStack_9.y = (float)&UNK_?;
      func_?();
    }
    a_00.z = fVar8;
    a_00.x = VStack_6.y;
    a_00.y = VStack_6.z;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_UnaryNegation
                        (&VStack_9,a_00,(MethodInfo *)0x0);
    VStack_12.y = pVVar5->x;
    VStack_12.z = pVVar5->y;
    boneName = (String *)pVVar5->z;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                        (&VStack_9,bone,(MethodInfo *)0x0);
    break;
  case 2:
    if (bone == (Transform *)0x0) goto code_?;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                        (&VStack_9,bone,(MethodInfo *)0x0);
    VStack_6.y = pVVar5->x;
    VStack_6.z = pVVar5->y;
    fVar8 = pVVar5->z;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      VStack_9.z = (float)TypeInfo__UnityEngine__Vector3;
      VStack_9.y = (float)&UNK_?;
      func_?();
    }
    a.z = fVar8;
    a.x = VStack_6.y;
    a.y = VStack_6.z;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_UnaryNegation
                        (&VStack_9,a,(MethodInfo *)0x0);
    VStack_12.y = pVVar5->x;
    VStack_12.z = pVVar5->y;
    boneName = (String *)pVVar5->z;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                        (&VStack_9,bone,(MethodInfo *)0x0);
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_UnaryNegation
                        (&VStack_9,*pVVar5,(MethodInfo *)0x0);
    break;
  case 3:
    if (bone == (Transform *)0x0) goto code_?;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                        (&VStack_9,bone,(MethodInfo *)0x0);
    VStack_6.y = pVVar5->x;
    VStack_6.z = pVVar5->y;
    fVar8 = pVVar5->z;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      VStack_9.z = (float)TypeInfo__UnityEngine__Vector3;
      VStack_9.y = (float)&UNK_?;
      func_?();
    }
    a_01.z = fVar8;
    a_01.x = VStack_6.y;
    a_01.y = VStack_6.z;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_UnaryNegation
                        (&VStack_9,a_01,(MethodInfo *)0x0);
    VStack_12.y = pVVar5->x;
    VStack_12.z = pVVar5->y;
    boneName = (String *)pVVar5->z;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                        (&VStack_9,bone,(MethodInfo *)0x0);
    break;
  case 4:
  case 6:
    if (bone == (Transform *)0x0) goto code_?;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                        (&VStack_9,bone,(MethodInfo *)0x0);
    goto code_?;
  case 5:
  case 7:
    if (bone == (Transform *)0x0) goto code_?;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                        (&VStack_9,bone,(MethodInfo *)0x0);
code_?:
    VStack_12.y = pVVar5->x;
    VStack_12.z = pVVar5->y;
    boneName = (String *)pVVar5->z;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                        (&VStack_9,bone,(MethodInfo *)0x0);
    break;
  default:
    goto code_?;
  }
  VStack_6.y = pVVar5->x;
  VStack_6.z = pVVar5->y;
  fVar8 = pVVar5->z;
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Quaternion);
  }
  fVar13 = VStack_6.y;
  fVar14 = VStack_6.z;
  uVar15 = VStack_12._4_8_;
code_?:
  forward.z = (float)boneName;
  forward.x = (float)uVar15;
  forward.y = SUB84(uVar15,4);
  upwards.y = fVar14;
  upwards.x = fVar13;
  upwards.z = fVar8;
  pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation
                      ((Quaternion *)&stack0xffffffc4,forward,upwards,(MethodInfo *)0x0);
  fVar8 = pQVar7->x;
  VStack_9.x = pQVar7->y;
  VStack_9.y = pQVar7->z;
  VStack_9.z = pQVar7->w;
code_?:
  uVar16 = (this->fields).modelScale.x;
  uVar17 = (this->fields).modelScale.y;
  func_?(&uStack_1,uVar16,uVar17,(this->fields).modelScale.z,0);
  unaff_EDI = boneName;
  if ((model != (GameObject *)0x0) &&
     (pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (model,(MethodInfo *)0x0), pTVar18 != (Transform *)0x0)) {
    value.y = VStack_9.x;
    value.x = fVar8;
    value.z = VStack_9.y;
    value.w = VStack_9.z;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (pTVar18,value,(MethodInfo *)0x0);
    pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (model,(MethodInfo *)0x0);
    if (pTVar18 != (Transform *)0x0) {
      translation.z = (float)pQStack_2;
      translation.x = (float)(undefined4)uStack_1;
      translation.y = (float)uStack_1._4_4_;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Translate_1
                (pTVar18,translation,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  uVar15 = func_?(0);
  in_AF = 9 < ((byte)uVar15 & 0xf) | in_AF;
  uVar19 = CONCAT31((int3)((ulonglong)uVar15 >> 8),(byte)uVar15 + in_AF * -6) & 0xffffff0f;
  iVar20 = CONCAT22((short)(uVar19 >> 0x10),
                    CONCAT11((char)((ulonglong)uVar15 >> 8) - in_AF,(char)uVar19));
  pbVar21 = (byte *)((int)&unaff_EDI[0x1833104].klass + (int)((ulonglong)uVar15 >> 0x20));
  bVar22 = *pbVar21;
  bVar23 = (byte)((ulonglong)uVar15 >> 0x28);
  bVar24 = *pbVar21 + bVar23;
  *pbVar21 = bVar24 + in_AF;
  uVar25 = iVar20 + 2;
  bVar26 = (byte)((ulonglong)uVar15 >> 0x20);
  bVar27 = CARRY1((byte)this,bVar26) ||
           CARRY1((byte)this + bVar26,CARRY1(bVar22,bVar23) || CARRY1(bVar24,in_AF));
  pbVar21 = (byte *)(iVar20 + 0x12);
  bVar22 = *pbVar21;
  bVar24 = *pbVar21 - (byte)uVar25;
  *pbVar21 = bVar24 - bVar27;
  puVar28 = (uint *)(iVar20 + 0x12);
  uVar29 = (uint)(bVar22 < (byte)uVar25 || bVar24 < bVar27);
  uVar19 = *puVar28;
  uVar30 = *puVar28;
  *puVar28 = (uVar30 - uVar25) - uVar29;
  *(int *)(iVar20 + 0x12) =
       (*(int *)(iVar20 + 0x12) - uVar25) - (uint)(uVar19 < uVar25 || uVar30 - uVar25 < uVar29);
  pcVar31 = (code *)swi(3);
  (*pcVar31)(0x4f104019);
  return;
}


/* Void ApplyAccessoryOffset(Single, AccessorySlotType) */

void Assembly-CSharp.dll::MVBody::MVBody_ApplyAccessoryOffset
               (MVBody *this,float yOffset,AccessorySlotType__Enum slot,MethodInfo *method)

{
  pBVar1 = (this->fields).previewBodyAccessoriesController;
  if (pBVar1 == (BodyAccessoriesController *)0x0) {
    pBVar1 = (this->fields).bodyAccessoriesController;
    if (pBVar1 == (BodyAccessoriesController *)0x0) goto code_?;
    BodyAccessoriesController::BodyAccessoriesController_ApplyAccessoryOffset
              (pBVar1,yOffset,slot,(MethodInfo *)0x0);
    pBVar1 = (this->fields).bodyAccessoriesController;
  }
  else {
    BodyAccessoriesController::BodyAccessoriesController_ApplyAccessoryOffset
              (pBVar1,yOffset,slot,(MethodInfo *)0x0);
    pBVar1 = (this->fields).previewBodyAccessoriesController;
  }
  if (pBVar1 != (BodyAccessoriesController *)0x0) {
    accessoryData =
         (Dictionary_2_System_Object_System_Object_ *)
         MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes
         ::KogamaSettingNumericBase`1[System::Single]::
         KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                   ((KogamaSettingNumericBase_1_System_Single_ *)pBVar1,(MethodInfo *)0x0);
    MVBody_UpdateBodyClone(this,accessoryData,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ApplyAccessorySize(Single, AccessorySlotType) */

void Assembly-CSharp.dll::MVBody::MVBody_ApplyAccessorySize
               (MVBody *this,float size,AccessorySlotType__Enum slot,MethodInfo *method)

{
  pBVar1 = (this->fields).previewBodyAccessoriesController;
  if (pBVar1 == (BodyAccessoriesController *)0x0) {
    pBVar1 = (this->fields).bodyAccessoriesController;
    if (pBVar1 == (BodyAccessoriesController *)0x0) goto code_?;
    BodyAccessoriesController::BodyAccessoriesController_ApplySizeChange
              (pBVar1,size,slot,(MethodInfo *)0x0);
    pBVar1 = (this->fields).bodyAccessoriesController;
  }
  else {
    BodyAccessoriesController::BodyAccessoriesController_ApplySizeChange
              (pBVar1,size,slot,(MethodInfo *)0x0);
    pBVar1 = (this->fields).previewBodyAccessoriesController;
  }
  if (pBVar1 != (BodyAccessoriesController *)0x0) {
    accessoryData =
         (Dictionary_2_System_Object_System_Object_ *)
         MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes
         ::KogamaSettingNumericBase`1[System::Single]::
         KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                   ((KogamaSettingNumericBase_1_System_Single_ *)pBVar1,(MethodInfo *)0x0);
    MVBody_UpdateBodyClone(this,accessoryData,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Attach(MVAvatar, Boolean) */

void Assembly-CSharp.dll::MVBody::MVBody_Attach
               (MVBody *this,MVAvatar *mvAvatar,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).hasAvatarBeenAttached = 1;
  if (mvAvatar == (MVAvatar *)0x0) {
    return;
  }
  pMVar1 = (this->fields).bodyObject;
  if (pMVar1 != (MVBodyObject *)0x0) {
    pBVar2 = (pMVar1->fields).boneAnimation;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pBVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pMVar1 = (this->fields).bodyObject;
      if ((pMVar1 == (MVBodyObject *)0x0) ||
         (pBVar2 = (pMVar1->fields).boneAnimation, pBVar2 == (BoneAnimation *)0x0))
      goto code_?;
      BoneAnimation::BoneAnimation_Attach(pBVar2,mvAvatar,isLocal,(MethodInfo *)0x0);
    }
    pMVar1 = (this->fields).bodyObject;
    if (pMVar1 != (MVBodyObject *)0x0) {
      pAVar4 = (pMVar1->fields).avatarBlinker;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pAVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        pMVar1 = (this->fields).bodyObject;
        if ((pMVar1 == (MVBodyObject *)0x0) ||
           (pAVar4 = (pMVar1->fields).avatarBlinker, pAVar4 == (AvatarBlinker *)0x0))
        goto code_?;
        GamePassesTextBubble::GamePassesTextBubble_set_DeactivateAfterFade
                  ((GamePassesTextBubble *)pAVar4,(this->fields).visible,(MethodInfo *)0x0);
        pMVar1 = (this->fields).bodyObject;
        if ((pMVar1 == (MVBodyObject *)0x0) ||
           (pAVar4 = (pMVar1->fields).avatarBlinker, pAVar4 == (AvatarBlinker *)0x0))
        goto code_?;
        ContextMenuController::ContextMenuController_PointerIsDown
                  ((ContextMenuController *)pAVar4,(MethodInfo *)0x0);
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
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void AttachCube(String) */

void Assembly-CSharp.dll::MVBody::MVBody_AttachCube
               (MVBody *this,String *boneName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).bodyObject;
  if ((pMVar1 != (MVBodyObject *)0x0) &&
     (this_00 = (pMVar1->fields).bodyData, this_00 != (BodyData *)0x0)) {
    value = BodyData::BodyData_GetPartBone_1(this_00,boneName,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pMVar2 = MVBlueprintBase::MVBlueprintBase_GetChild
                       ((MVBlueprintBase *)this,boneName,(MethodInfo *)0x0);
    if (pMVar2 == (MVWorldObjectClient *)0x0) {
      this_02 = (MVWorldObjectClient *)0x0;
    }
    else {
      bVar3 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
      if (((pMVar2->klass->_1).naturalAligment < bVar3) ||
         ((MVCubeModelInstance__Class *)(pMVar2->klass->_1).typeHierarchy[bVar3 - 1] !=
          TypeInfo__MVCubeModelInstance)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      this_02 = (MVWorldObjectClient *)0x0;
      if (bVar4) {
        this_02 = pMVar2;
      }
    }
    this_01 = (this->fields).attachedPartModels;
    if (this_01 != (List_1_MVCubeModelInstance_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)this_01,(UIPushOption__Enum)this_02,
                 MethodInfo__System__Collections__Generic__List<MVCubeModelInstance>__Add_MVCubeModelInstance_
                );
      if (this_02 != (MVWorldObjectClient *)0x0) {
        gameObject = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                               ((DayNightCycle *)this_02,(MethodInfo *)0x0);
        pIStack_5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                    Collection_1_VoxelHit__get_Items
                              ((Collection_1_VoxelHit_ *)this_02,(MethodInfo *)0x0);
        arg2 = (Object *)func_?(TypeInfo__System__Int32,&pIStack_5);
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        value_00 = mscorlib.dll::System::String::String_Concat_1
                             ((Object *)boneName,(Object *)StringLiteral__model_,arg2,
                              (MethodInfo *)0x0);
        if (gameObject != (CelestialParam *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                    ((Object_1 *)gameObject,value_00,(MethodInfo *)0x0);
          layer = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                            ((this->fields)._LayerToSetTo_k__BackingField,(MethodInfo *)0x0);
          LayerUtil::LayerUtil_SetLayerRecursively_4
                    ((GameObject *)gameObject,layer,(MethodInfo *)0x0);
          pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             ((GameObject *)gameObject,(MethodInfo *)0x0);
          if (pTVar6 != (Transform *)0x0) {
            pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                               ((Vector3 *)(auStack_8 + 4),pTVar6,(MethodInfo *)0x0);
            fVar9 = pVVar7->y;
            fVar10 = pVVar7->z;
            (this->fields).modelScale.x = pVVar7->x;
            (this->fields).modelScale.y = fVar9;
            (this->fields).modelScale.z = fVar10;
            pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               ((GameObject *)gameObject,(MethodInfo *)0x0);
            if (pTVar6 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                        (pTVar6,value,(MethodInfo *)0x0);
              pLStack_11 = (List_1_UnityEngine_Renderer_ *)
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform((GameObject *)gameObject,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                func_?(TypeInfo__UnityEngine__Vector3);
              }
              pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                                 ((Vector3 *)(auStack_8 + 4),(MethodInfo *)0x0);
              if (pLStack_11 != (List_1_UnityEngine_Renderer_ *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                          ((Transform *)pLStack_11,*pVVar7,(MethodInfo *)0x0);
                pLStack_11 = (List_1_UnityEngine_Renderer_ *)
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_get_transform((GameObject *)gameObject,(MethodInfo *)0x0);
                if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000
                     ) != 0) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
                  func_?(TypeInfo__UnityEngine__Quaternion);
                }
                pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                          Quaternion_get_identity((Quaternion *)auStack_8,(MethodInfo *)0x0);
                if (pLStack_11 != (List_1_UnityEngine_Renderer_ *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                            ((Transform *)pLStack_11,*pQVar12,(MethodInfo *)0x0);
                  pLStack_11 = (List_1_UnityEngine_Renderer_ *)(this->fields).colliders;
                  pUVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_GetComponentsInChildren_29
                                      ((GameObject *)gameObject,
                                       UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                                      );
                  if (pLStack_11 != (List_1_UnityEngine_Renderer_ *)0x0) {
                    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                    List_1_UIPushOption__Add
                              ((List_1_UIPushOption_ *)pLStack_11,(UIPushOption__Enum)pUVar13,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Collider>__Add_UnityEngine__Collider_
                              );
                    pLStack_11 = (this->fields).renderers;
                    pUVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_GetComponentsInChildren_29
                                        ((GameObject *)gameObject,
                                         UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Renderer>__
                                        );
                    if (pLStack_11 != (List_1_UnityEngine_Renderer_ *)0x0) {
                      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                      List_1_UIPushOption__Add
                                ((List_1_UIPushOption_ *)pLStack_11,(UIPushOption__Enum)pUVar13,
                                 MethodInfo__System__Collections__Generic__List<UnityEngine::Renderer>__Add_UnityEngine__Renderer_
                                );
                      MVBody_AlignModel(this,boneName,value,(GameObject *)gameObject,
                                        (MethodInfo *)0x0);
                      return;
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
  func_?(0);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void AttachCubes() */

void Assembly-CSharp.dll::MVBody::MVBody_AttachCubes(MVBody *this,MethodInfo *method)

{
  pIStack_1 = (Il2CppClass *)0xffffffff;
  pIStack_2 = (Il2CppClass *)&DAT_?;
  pIStack_3 = (Il2CppClass *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pIStack_3;
  puStack_4 = &stack0xffffff8c;
  puVar5 = &stack0xffffff8c;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._16_4_ = (Object *)0x0;
  iStack_7 = 0;
  KStack_8.key = 0;
  KStack_8.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MethodInfo *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  CStack_9.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_9.monitor = (MonitorData *)0x0;
  CStack_9.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_9.fields.syncRoot = (Object *)0x0;
  func_?();
  _Stack_20.__klassIndex = -1;
  this_00 = (this->fields)._.childIdMap;
  _Stack_18.dummy = &stack0xffffff8c;
  puStack_4 = &stack0xffffff8c;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    _Stack_18.dummy = &stack0xffffff8c;
    puStack_4 = &stack0xffffff8c;
    pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                        (auStack_6 + 0x14),
                        (Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                       );
    auStack_6._0_4_ = pDVar10->dictionary;
    auStack_6._4_4_ = pDVar10->next;
    auStack_6._8_4_ = pDVar10->stamp;
    auStack_6._12_4_ = (pDVar10->current).key;
    auStack_6._16_4_ = (pDVar10->current).value;
    pIStack_1 = (Il2CppClass *)0x0;
    while (cVar11 = func_?(), cVar11 != '\0') {
      KStack_8 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                            );
      auStack_6._0_4_ = &KStack_8;
      auStack_6._4_4_ =
           MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
      ;
      pSVar12 = (String *)func_?();
      boneName = (String *)0x0;
      if (pSVar12 != (String *)0x0) {
        if (pSVar12->klass == TypeInfo__System__String) {
          boneName = pSVar12;
        }
        if (boneName == (String *)0x0) {
          iVar13 = func_?(pSVar12,TypeInfo__System__String);
          goto code_?;
        }
      }
      MVBody_AttachCube(this,boneName,(MethodInfo *)0x0);
    }
    iVar14 = 0;
    ((_Stack_18.type)->data).__klassIndex = 0x4c;
    pIStack_1 = (Il2CppClass *)0xffffffff;
    func_?();
    iVar13 = iStack_7;
    unaff_ESI = iVar14;
    if (iStack_7 == 0) {
      if ((_Stack_18.array)->etype == (Il2CppType *)0x4c) {
        iVar14 = -1;
      }
      this_01 = (List_1_UnityEngine_Color32_ *)(this->fields).renderers;
      if (this_01 == (List_1_UnityEngine_Color32_ *)0x0) goto code_?;
      pLVar15 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
               List_1_UnityEngine_Color32__GetEnumerator
                         ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_16,this_01,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Renderer>__GetEnumerator__
                         );
      CStack_9.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar15->l
      ;
      CStack_9.monitor = (MonitorData *)pLVar15->next;
      CStack_9.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar15->ver;
      CStack_9.fields.syncRoot = (Object *)(pLVar15->current).rgba;
      pIStack_1 = (Il2CppClass *)0x2;
      while (cVar11 = func_?(), unaff_ESI = iStack_7, cVar11 != '\0') {
        this_02 = (Renderer *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            (&CStack_9,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Renderer>__get_Current__
                            );
        if (this_02 == (Renderer *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  (this_02,(this->fields).visible,(MethodInfo *)0x0);
      }
      *(undefined4 *)((int)_Stack_18.dummy + iVar14 * 4 + 4) = 0x91;
      pIStack_1 = (Il2CppClass *)0xffffffff;
      func_?(&CStack_9,
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Renderer>__Dispose__
                     );
      if (unaff_ESI == 0) {
        *unaff_FS_OFFSET = pIStack_3;
        return;
      }
    }
    else {
code_?:
      func_?(iVar13,0,0);
    }
    func_?(unaff_ESI,0,0);
  }
code_?:
  func_?(0);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = MVBlueprintBase::MVBlueprintBase_Clone
                     ((MVBlueprintBase *)this,ownerActorNumber,cloneGroupId,cloneBookkeeping,
                      worldObjects,prototypes,(MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObjectClient *)0x0) {
    func_?();
  }
  else {
    bVar2 = (TypeInfo__MVBody->_1).naturalAligment;
    if (((pMVar1->klass->_1).naturalAligment < bVar2) ||
       ((MVBody__Class *)(pMVar1->klass->_1).typeHierarchy[bVar2 - 1] != TypeInfo__MVBody)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    pMVar4 = (MVWorldObjectClient *)0x0;
    if (bVar3) {
      pMVar4 = pMVar1;
    }
    if (pMVar4 != (MVWorldObjectClient *)0x0) {
      *(undefined1 *)((int)&pMVar4[1].fields._.rotation.x + 1) = 0;
      return pMVar4;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pMVar1 = (MVWorldObjectClient *)(*pcVar5)();
  return pMVar1;
}


/* GameObject CopyByValue() */

GameObject * Assembly-CSharp.dll::MVBody::MVBody_CopyByValue(MVBody *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = (this->fields).visible;
  if (bVar1 == 0) {
    (this->fields).visible = 1;
    MVBody_UpdateVisibility(this,(MethodInfo *)0x0);
  }
  original = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                       ((DayNightCycle *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bodyCloneGO = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                          ((XpBoostParticlePreviewer *)original,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                          );
  MVBody_CopyMaterialsByValue(this,(GameObject *)bodyCloneGO,(MethodInfo *)0x0);
  if ((this->fields).visible != bVar1) {
    (this->fields).visible = bVar1;
    MVBody_UpdateVisibility(this,(MethodInfo *)0x0);
  }
  return (GameObject *)bodyCloneGO;
}


/* Void CopyMaterialsByValue(GameObject) */

void Assembly-CSharp.dll::MVBody::MVBody_CopyMaterialsByValue
               (MVBody *this,GameObject *bodyCloneGO,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (bodyCloneGO != (GameObject *)0x0) {
    pUVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentsInChildren_29
                       (bodyCloneGO,
                        UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                       );
    puVar2 = (undefined1 *)0x0;
    if (pUVar1 != (UseInteratorVisualization__Array *)0x0) {
      ppUVar3 = pUVar1->vector;
      while( true ) {
        if ((int)pUVar1->max_length <= (int)puVar2) {
          return;
        }
        if ((undefined1 *)pUVar1->max_length <= puVar2) break;
        pUStack_4 = *ppUVar3;
        puVar5 = &UNK_?;
        pLVar6 = TypeInfo__System__Collections__Generic__List<UnityEngine::Material>;
        this_00 = (List_1_VoxelHit_ *)func_?();
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
        List_1_UnityEngine_Vector4___ctor
                  ((List_1_UnityEngine_Vector4_ *)this_00,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__List__);
        if (pUStack_4 == (UseInteratorVisualization *)0x0) goto code_?;
        pMVar7 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_sharedMaterials
                           ((Renderer *)pUStack_4,(MethodInfo *)0x0);
        iVar8 = 0;
        while( true ) {
          if (pMVar7 == (Material__Array *)0x0) goto code_?;
          if ((int)pMVar7->max_length <= iVar8) break;
          x = (Object_1 *)func_?(iVar8);
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                            (x,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar9 == 0) {
            source = TypeInfo__UnityEngine__Material;
            this_01 = (Material *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor_1
                      (this_01,(Material *)source,(MethodInfo *)0x0);
            if (this_00 == (List_1_VoxelHit_ *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
            List_1_UIPushOption__Add
                      ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)this_01,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__Add_UnityEngine__Material_
                      );
          }
          iVar8 = iVar8 + 1;
        }
        if (this_00 == (List_1_VoxelHit_ *)0x0) goto code_?;
        value = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
                List_1_VoxelHit__ToArray
                          (this_00,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__ToArray__
                          );
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterials
                  ((Renderer *)pUStack_4,(Material__Array *)value,(MethodInfo *)0x0);
        puVar2 = (undefined1 *)((int)&(pLVar6->_0).image + 1);
        ppUVar3 = (UseInteratorVisualization **)(puVar5 + 4);
      }
      uVar10 = func_?(0,0);
      func_?(uVar10);
    }
  }
code_?:
  func_?(0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* GameObject CreateClone() */

GameObject * Assembly-CSharp.dll::MVBody::MVBody_CreateClone(MVBody *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  original = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                       ((DayNightCycle *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                      ((XpBoostParticlePreviewer *)original,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                      );
  if ((this_00 != (XpBoostParticlePreviewer *)0x0) &&
     (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         ((GameObject *)this_00,(MethodInfo *)0x0), pTVar1 != (Transform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
              (pTVar1,(Transform *)0x0,(MethodInfo *)0x0);
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       ((GameObject *)this_00,(MethodInfo *)0x0);
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        ((GameObject *)this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffe0,this_01,(MethodInfo *)0x0);
      a = *pVVar2;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                         ((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                         ((Vector3 *)&stack0xffffffe0,*pVVar2,10.0,(MethodInfo *)0x0);
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         ((Vector3 *)&stack0xffffffe0,a,*pVVar2,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar1,*pVVar2,(MethodInfo *)0x0);
        this_02 = (BodyClone *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                            ((GameObject *)this_00,
                             BodyClone_MethodInfo__UnityEngine__GameObject__AddComponent<BodyClone>__
                            );
        (this->fields).bodyClone = this_02;
        if ((this_02 != (BodyClone *)0x0) &&
           (pUVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                     GameObject_GetComponentsInChildren_29
                               ((GameObject *)this_02,
                                AvatarAccessory__MethodInfo__UnityEngine__Component__GetComponentsInChildren<AvatarAccessory>______
                               ), pUVar3 != (UseInteratorVisualization__Array *)0x0)) {
          uVar4 = pUVar3->max_length - 1;
          if (-1 < (int)uVar4) {
            ppUVar5 = pUVar3->vector + (pUVar3->max_length - 1);
            do {
              if (pUVar3->max_length <= uVar4) goto code_?;
              if (*ppUVar5 == (UseInteratorVisualization *)0x0) goto code_?;
              pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)*ppUVar5,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0
                  ) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                        ((Object_1 *)pGVar6,(MethodInfo *)0x0);
              ppUVar5 = ppUVar5 + -1;
              uVar4 = uVar4 - 1;
            } while (-1 < (int)uVar4);
          }
          bodyWoId = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                     Collection_1_VoxelHit__get_Items
                               ((Collection_1_VoxelHit_ *)&stack0xffffffe0,(MethodInfo *)0x0);
          accessoryData = MVBody_GetAccessoryData((MVBody *)&stack0xffffffe0,(MethodInfo *)0x0);
          if (in_stack_7 != (BodyClone *)0x0) {
            BodyClone::BodyClone_Initialize
                      (in_stack_7,(int32_t)bodyWoId,accessoryData,(MethodInfo *)0x0);
            return (GameObject *)this_00;
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  func_?();
  pcVar8 = (code *)swi(3);
  pGVar6 = (GameObject *)(*pcVar8)();
  return pGVar6;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVBody::MVBody_Destroy(MVBody *this,MethodInfo *method)

{
  MVWorldObjectClient::MVWorldObjectClient_Destroy((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  this_00 = (this->fields).bodyAccessoriesController;
  if (this_00 != (BodyAccessoriesController *)0x0) {
    BodyAccessoriesController::BodyAccessoriesController_Destroy(this_00,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).bodyClone;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pBVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return;
  }
  pBVar1 = (this->fields).bodyClone;
  if (pBVar1 != (BodyClone *)0x0) {
    BodyClone::BodyClone_Destroy(pBVar1,(MethodInfo *)0x0);
    pBVar1 = (this->fields).bodyClone;
    if (pBVar1 != (BodyClone *)0x0) {
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)pBVar1,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)obj,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void DestroyClone() */

void Assembly-CSharp.dll::MVBody::MVBody_DestroyClone(MVBody *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).bodyClone;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pBVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return;
  }
  pBVar1 = (this->fields).bodyClone;
  if (pBVar1 != (BodyClone *)0x0) {
    BodyClone::BodyClone_Destroy(pBVar1,(MethodInfo *)0x0);
    pBVar1 = (this->fields).bodyClone;
    if (pBVar1 != (BodyClone *)0x0) {
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)pBVar1,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)obj,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Detach() */

void Assembly-CSharp.dll::MVBody::MVBody_Detach(MVBody *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).bodyObject;
  if ((pMVar1 != (MVBodyObject *)0x0) &&
     (this_00 = (pMVar1->fields).boneAnimation, this_00 != (BoneAnimation *)0x0)) {
    BoneAnimation::BoneAnimation_Detach(this_00,(MethodInfo *)0x0);
    pMVar1 = (this->fields).bodyObject;
    if (pMVar1 != (MVBodyObject *)0x0) {
      pAVar2 = (pMVar1->fields).avatarBlinker;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pAVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        pMVar1 = (this->fields).bodyObject;
        if ((pMVar1 == (MVBodyObject *)0x0) ||
           (pAVar2 = (pMVar1->fields).avatarBlinker, pAVar2 == (AvatarBlinker *)0x0))
        goto code_?;
        ContextMenuController::ContextMenuController_OnContextMenuPop
                  ((ContextMenuController *)pAVar2,(MethodInfo *)0x0);
      }
      pMVar1 = (this->fields).bodyObject;
      if ((pMVar1 != (MVBodyObject *)0x0) &&
         (this_01 = (pMVar1->fields).avatarBlobShadowController,
         this_01 != (AvatarBlobShadowController *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)this_01,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  func_?(0);
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
  func_?(0);
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
    pBVar1 = (this->fields).bodyAccessoriesController;
    (this->fields).previewBodyAccessoriesController = (BodyAccessoriesController *)0x0;
    if (pBVar1 != (BodyAccessoriesController *)0x0) {
      BodyAccessoriesController::BodyAccessoriesController_UpdateAccessoryVisibility
                (pBVar1,1,(MethodInfo *)0x0);
      pBVar1 = (this->fields).bodyAccessoriesController;
      if (pBVar1 != (BodyAccessoriesController *)0x0) {
        BodyAccessoriesController::BodyAccessoriesController_set_AccessoryMoveOverride
                  (pBVar1,1,(MethodInfo *)0x0);
        pBVar1 = (this->fields).bodyAccessoriesController;
        if (pBVar1 != (BodyAccessoriesController *)0x0) {
          accessoryData =
               (Dictionary_2_System_Object_System_Object_ *)
               MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
               KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
               KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                         ((KogamaSettingNumericBase_1_System_Single_ *)pBVar1,(MethodInfo *)0x0);
          MVBody_UpdateBodyClone(this,accessoryData,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Dictionary`2[System.Object,System.Object] GetAccessoryData() */

Dictionary_2_System_Object_System_Object_ *
Assembly-CSharp.dll::MVBody::MVBody_GetAccessoryData(MVBody *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = this;
  this = (MVBody *)0x4;
  this_01 = (Dictionary_2_System_Object_System_Object___Class *)(pMVar1->fields)._.blueprintData;
  this_00 = (Enum *)func_?(TypeInfo__MV__Common__BlueprintData,&this);
  if (this_00 != (Enum *)0x0) {
    key = mscorlib.dll::System::Enum::Enum_ToString_2(this_00,StringLiteral_d,(MethodInfo *)0x0);
    if (this_01 != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      method = (MethodInfo *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)this_01,(Type *)key,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if ((Dictionary_2_System_Object_System_Object_ *)method ==
          (Dictionary_2_System_Object_System_Object_ *)0x0) {
        return (Dictionary_2_System_Object_System_Object_ *)0x0;
      }
      bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((((Dictionary_2_System_Object_System_Object_ *)method)->klass->_1).naturalAligment <
           bVar2) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (((Dictionary_2_System_Object_System_Object_ *)method)->klass->_1).typeHierarchy
          [bVar2 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      pDVar4 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar3) {
        pDVar4 = (Dictionary_2_System_Object_System_Object_ *)method;
      }
      this_01 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if (pDVar4 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        return pDVar4;
      }
      goto code_?;
    }
  }
  func_?();
  method = (MethodInfo *)extraout_EDX;
code_?:
  this = (MVBody *)&UNK_?;
  pDStack5 = this_01;
  func_?();
  pcVar6 = (code *)swi(3);
  pDVar4 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar6)();
  return pDVar4;
}


/* Single GetAccessoryOffset(AccessorySlotType) */

float Assembly-CSharp.dll::MVBody::MVBody_GetAccessoryOffset
                (MVBody *this,AccessorySlotType__Enum slot,MethodInfo *method)

{
  pDStack_1 = (Dictionary_2_System_Object_System_Object___Class *)
              (this->fields).previewBodyAccessoriesController;
  pDVar2 = pDStack_1;
  if ((pDStack_1 == (Dictionary_2_System_Object_System_Object___Class *)0x0) &&
     (pDVar2 = (Dictionary_2_System_Object_System_Object___Class *)
               (this->fields).bodyAccessoriesController,
     pDVar2 == (Dictionary_2_System_Object_System_Object___Class *)0x0)) {
    pDStack_1 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    func_?();
    pcVar3 = (code *)swi(3);
    fVar4 = (float10)(*pcVar3)();
    return (float)fVar4;
  }
  this = (MVBody *)pDVar2;
  method = (MethodInfo *)0x0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar5 = *(Dictionary_2_System_Type_Pool_ **)&(this->fields)._._._._.inputState;
  pDStack_1 = (Dictionary_2_System_Object_System_Object___Class *)slot;
  key = (Type *)func_?(&pDStack_1,0);
  if (pDVar5 == (Dictionary_2_System_Type_Pool_ *)0x0) {
code_?:
    uVar6 = func_?(0);
  }
  else {
    pDVar5 = (Dictionary_2_System_Type_Pool_ *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (pDVar5,key,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pDVar5 == (Dictionary_2_System_Type_Pool_ *)0x0) {
      this_01 = (Dictionary_2_System_Type_Pool_ *)0x0;
    }
    else {
      bVar7 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((pDVar5->klass->_1).naturalAligment < bVar7) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar5->klass->_1).typeHierarchy[bVar7 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      this_01 = (Dictionary_2_System_Type_Pool_ *)0x0;
      if (bVar8) {
        this_01 = pDVar5;
      }
      unaff_EDI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (this_01 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
    }
    pDStack_1 = (Dictionary_2_System_Object_System_Object___Class *)&this;
    this = (MVBody *)0x3;
    unaff_EDI = in_stack_9;
    this_00 = (Enum *)func_?(TypeInfo__MV__Common__AvatarAccessoryData);
    if ((this_00 == (Enum *)0x0) ||
       (key_00 = mscorlib.dll::System::Enum::Enum_ToString_2
                           (this_00,StringLiteral_d,(MethodInfo *)0x0),
       this_01 == (Dictionary_2_System_Type_Pool_ *)0x0)) goto code_?;
    pPVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (this_01,(Type *)key_00,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar6 = CONCAT44(TypeInfo__System__Single,pPVar10);
    if (pPVar10 == (Pool *)0x0) goto code_?;
    if ((pPVar10->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
      pfVar11 = (float *)func_?(pPVar10);
      return *pfVar11;
    }
  }
  func_?(uVar6);
  pDVar5 = extraout_EDX;
code_?:
  pDStack_1 = unaff_EDI;
  func_?(pDVar5);
  pcVar3 = (code *)swi(3);
  fVar4 = (float10)(*pcVar3)();
  return (float)fVar4;
}


/* Single GetAccessoryScale(AccessorySlotType) */

float Assembly-CSharp.dll::MVBody::MVBody_GetAccessoryScale
                (MVBody *this,AccessorySlotType__Enum slot,MethodInfo *method)

{
  pDStack_1 = (Dictionary_2_System_Object_System_Object___Class *)
              (this->fields).previewBodyAccessoriesController;
  pDVar2 = pDStack_1;
  if ((pDStack_1 == (Dictionary_2_System_Object_System_Object___Class *)0x0) &&
     (pDVar2 = (Dictionary_2_System_Object_System_Object___Class *)
               (this->fields).bodyAccessoriesController,
     pDVar2 == (Dictionary_2_System_Object_System_Object___Class *)0x0)) {
    pDStack_1 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    func_?();
    pcVar3 = (code *)swi(3);
    fVar4 = (float10)(*pcVar3)();
    return (float)fVar4;
  }
  this = (MVBody *)pDVar2;
  method = (MethodInfo *)0x0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar5 = *(Dictionary_2_System_Type_Pool_ **)&(this->fields)._._._._.inputState;
  pDStack_1 = (Dictionary_2_System_Object_System_Object___Class *)slot;
  key = (Type *)func_?(&pDStack_1,0);
  if (pDVar5 == (Dictionary_2_System_Type_Pool_ *)0x0) {
code_?:
    uVar6 = func_?(0);
  }
  else {
    pDVar5 = (Dictionary_2_System_Type_Pool_ *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (pDVar5,key,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pDVar5 == (Dictionary_2_System_Type_Pool_ *)0x0) {
      this_01 = (Dictionary_2_System_Type_Pool_ *)0x0;
    }
    else {
      bVar7 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((pDVar5->klass->_1).naturalAligment < bVar7) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar5->klass->_1).typeHierarchy[bVar7 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      this_01 = (Dictionary_2_System_Type_Pool_ *)0x0;
      if (bVar8) {
        this_01 = pDVar5;
      }
      unaff_EDI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      if (this_01 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
    }
    pDStack_1 = (Dictionary_2_System_Object_System_Object___Class *)&this;
    this = (MVBody *)0x5;
    unaff_EDI = in_stack_9;
    this_00 = (Enum *)func_?(TypeInfo__MV__Common__AvatarAccessoryData);
    if ((this_00 == (Enum *)0x0) ||
       (key_00 = mscorlib.dll::System::Enum::Enum_ToString_2
                           (this_00,StringLiteral_d,(MethodInfo *)0x0),
       this_01 == (Dictionary_2_System_Type_Pool_ *)0x0)) goto code_?;
    pPVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (this_01,(Type *)key_00,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar6 = CONCAT44(TypeInfo__System__Single,pPVar10);
    if (pPVar10 == (Pool *)0x0) goto code_?;
    if ((pPVar10->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
      pfVar11 = (float *)func_?(pPVar10);
      return *pfVar11;
    }
  }
  func_?(uVar6);
  pDVar5 = extraout_EDX;
code_?:
  pDStack_1 = unaff_EDI;
  func_?(pDVar5);
  pcVar3 = (code *)swi(3);
  fVar4 = (float10)(*pcVar3)();
  return (float)fVar4;
}


/* MVCubeModelInstance GetBodyPart(String) */

MVCubeModelInstance *
Assembly-CSharp.dll::MVBody::MVBody_GetBodyPart(MVBody *this,String *part,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (MVCubeModelInstance *)
           MVBlueprintBase::MVBlueprintBase_GetChild((MVBlueprintBase *)this,part,(MethodInfo *)0x0)
  ;
  if (pMVar1 != (MVCubeModelInstance *)0x0) {
    bVar2 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
    if ((bVar2 <= (pMVar1->klass->_1).naturalAligment) &&
       ((MVCubeModelInstance__Class *)(pMVar1->klass->_1).typeHierarchy[bVar2 - 1] ==
        TypeInfo__MVCubeModelInstance)) {
      return pMVar1;
    }
    return (MVCubeModelInstance *)0x0;
  }
  return (MVCubeModelInstance *)0x0;
}


/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::MVBody::MVBody_GetLocalBounds
                   (Bounds *__return_storage_ptr__,MVBody *this,BoundsContext__Enum boundsContext,
                   MethodInfo *method)

{
  uStack_1 = 0;
  uStack_2 = 0;
  func_?(&uStack_2,0,0x3f800000,0,0);
  uStack_3 = 0;
  uStack_4 = 0;
  func_?(&uStack_4,0x3f4ccccd,0x400ccccd,0x3f800000,0);
  (__return_storage_ptr__->m_Center).x = 0.0;
  (__return_storage_ptr__->m_Center).y = 0.0;
  (__return_storage_ptr__->m_Center).z = 0.0;
  (__return_storage_ptr__->m_Extents).x = 0.0;
  (__return_storage_ptr__->m_Extents).y = 0.0;
  (__return_storage_ptr__->m_Extents).z = 0.0;
  func_?(__return_storage_ptr__,uStack_2,uStack_1,uStack_4,uStack_3,0);
  return __return_storage_ptr__;
}


/* IModelingConstraint GetModelConstaint(MVCubeModelInstance) */

IModelingConstraint *
Assembly-CSharp.dll::MVBody::MVBody_GetModelConstaint
          (MVBody *this,MVCubeModelInstance *cubeModel,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMStack_1 = (ModelingBoxCountConstraint *)0x0;
  pDVar2 = (this->fields)._.idChildMap;
  if (cubeModel != (MVCubeModelInstance *)0x0) {
    pMStack_3 = (MethodInfo *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                Collection_1_VoxelHit__get_Items
                          ((Collection_1_VoxelHit_ *)cubeModel,(MethodInfo *)0x0);
    key = (String *)func_?(TypeInfo__System__Int32,&pMStack_3);
    if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
              WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
              KogamaSettingWrapperBase]::
              Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                        ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                          *)pDVar2,key,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar4 == 0) {
        return (IModelingConstraint *)pMStack_1;
      }
      this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)(this->fields).constraints;
      pIVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items
                         ((Collection_1_VoxelHit_ *)cubeModel,(MethodInfo *)0x0);
      if (this_00 !=
          (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
           *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
        Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__TryGetValue
                  (this_00,(int32_t)pIVar5,(TerrainUtility_TerrainMap **)&pMStack_1,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_IModelingConstraint>__TryGetValue_int__IModelingConstraint__
                  );
        if (pMStack_1 != (ModelingBoxCountConstraint *)0x0) {
          return (IModelingConstraint *)pMStack_1;
        }
        pDVar2 = (this->fields)._.idChildMap;
        pIStack_6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                     Collection_1_VoxelHit__get_Items
                               ((Collection_1_VoxelHit_ *)cubeModel,(MethodInfo *)0x0);
        key_00 = (Type *)func_?(TypeInfo__System__Int32);
        if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          pPVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                   Dictionary_2_System_Type_Pool__get_Item
                             ((Dictionary_2_System_Type_Pool_ *)pDVar2,key_00,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          part = (Pool *)0x0;
          if (pPVar7 != (Pool *)0x0) {
            if ((String__Class *)pPVar7->klass == TypeInfo__System__String) {
              part = pPVar7;
            }
            pSVar8 = TypeInfo__System__String;
            if (part == (Pool *)0x0) goto code_?;
          }
          pMVar9 = (this->fields).bodyObject;
          if ((pMVar9 != (MVBodyObject *)0x0) &&
             (pBVar10 = (pMVar9->fields).bodyData, pBVar10 != (BodyData *)0x0)) {
            pVVar11 = BodyData::BodyData_GetPartConstraintMin
                               (&VStack_12,pBVar10,(String *)part,(MethodInfo *)0x0);
            uStack_13._0_4_ = pVVar11->x;
            uStack_13._4_4_ = pVVar11->y;
            pMStack_3 = (MethodInfo *)pVVar11->z;
            pMVar9 = (this->fields).bodyObject;
            if ((pMVar9 != (MVBodyObject *)0x0) &&
               (pBVar10 = (pMVar9->fields).bodyData, pBVar10 != (BodyData *)0x0)) {
              pVVar11 = BodyData::BodyData_GetPartConstraintMax
                                 ((Vector3 *)&stack0xffffffc4,pBVar10,(String *)part,
                                  (MethodInfo *)0x0);
              VStack_12.y = pVVar11->x;
              VStack_12.z = pVVar11->y;
              method_00 = (MethodInfo *)pVVar11->z;
              pMVar9 = (this->fields).bodyObject;
              if ((pMVar9 != (MVBodyObject *)0x0) &&
                 (pBVar10 = (pMVar9->fields).bodyData, pBVar10 != (BodyData *)0x0)) {
                iStack_14 = BodyData::BodyData_GetPartConstraintMinCount
                                      (pBVar10,(String *)part,(MethodInfo *)0x0);
                v.y = (float)(int)uStack_13;
                v.x = (float)&pMStack_3;
                v.z = (float)((ulonglong)uStack_13 >> 0x20);
                IVar15 = MathFunctions::MathFunctions_ToIntVector(v,pMStack_3);
                uStack_16 = *IVar15._0_4_;
                iStack_17 = *(int16_t *)(IVar15._0_4_ + 1);
                VStack_12.x = 0.0;
                v_00.y = VStack_12.y;
                v_00.x = (float)&uStack_13;
                v_00.z = VStack_12.z;
                IVar15 = MathFunctions::MathFunctions_ToIntVector(v_00,method_00);
                maxCorner = *IVar15._0_4_;
                this_02 = (ModelingBoxCountConstraint *)func_?();
                IVar15.z = iStack_17;
                IVar15.x = (undefined2)uStack_16;
                IVar15.y = uStack_16._2_2_;
                ModelingBoxCountConstraint::ModelingBoxCountConstraint__ctor
                          (this_02,(MVCubeModelBase *)cubeModel,IVar15,maxCorner,iStack_14,
                           (MethodInfo *)0x0);
                this_01 = (this->fields).constraints;
                pMStack_1 = this_02;
                pIVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                         Collection_1_VoxelHit__get_Items
                                   ((Collection_1_VoxelHit_ *)cubeModel,(MethodInfo *)0x0);
                if (this_01 != (Dictionary_2_System_Int32_IModelingConstraint_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__Add
                            ((Dictionary_2_System_Int32_System_Object_ *)this_01,(int32_t)pIVar5,
                             (Object *)pMStack_1,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_IModelingConstraint>__Add_int__IModelingConstraint_
                            );
                  return (IModelingConstraint *)pMStack_1;
                }
              }
            }
          }
        }
      }
    }
  }
  pPVar7 = (Pool *)func_?(0);
  pSVar8 = extraout_ECX;
code_?:
  func_?(pPVar7,pSVar8);
  pcVar18 = (code *)swi(3);
  pIVar19 = (IModelingConstraint *)(*pcVar18)();
  return pIVar19;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVBody::MVBody_Initialize(MVBody *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_02 = this;
  if ((this->fields).initialized != 0) {
    this = (MVBody *)(this->fields)._._._._.id;
    arg1 = (Object *)func_?(TypeInfo__System__Int32,&this);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    message = mscorlib.dll::System::String::String_Concat_1
                        ((Object *)StringLiteral_Trying_to_initialize_body_,arg1,
                         (Object *)StringLiteral__more_than_once,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      this = (MVBody *)TypeInfo__UnityEngine__Debug;
      func_?();
    }
    this = (MVBody *)0x0;
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)message,(MethodInfo *)0x0);
    return;
  }
  MVBlueprintBase::MVBlueprintBase_Initialize((MVBlueprintBase *)this,(MethodInfo *)0x0);
  this_00 = (this_02->fields)._._._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    avatarBody = (MVBody *)
                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                 GameObject_GetComponentsInChildren_29
                           (this_00,
                            UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                           );
    pMVar1 = (this_02->fields).bodyObject;
    if ((pMVar1 != (MVBodyObject *)0x0) &&
       (this_01 = (pMVar1->fields).avatarBlinker, this_01 != (AvatarBlinker *)0x0)) {
      this = (MVBody *)0x0;
      AccessoryPreviewPopup::AccessoryPreviewPopup_SetBody
                ((AccessoryPreviewPopup *)this_01,avatarBody,(MethodInfo *)0x0);
      this = (MVBody *)0x0;
      MVBody_InitializeCommon(this_02,(MethodInfo *)0x0);
      if ((this_02->fields).hasAvatarBeenAttached == 0) {
        in_stack_2 = &UNK_?;
        MVBody_set_CollidersEnabled(this_02,1,(MethodInfo *)0x0);
        pMVar1 = (this_02->fields).bodyObject;
        if ((pMVar1 == (MVBodyObject *)0x0) ||
           (this_03 = (pMVar1->fields).avatarBlobShadowController,
           this_03 == (AvatarBlobShadowController *)0x0)) goto code_?;
        this = (MVBody *)((uint)this & 0xffffff00);
      }
      else {
        in_stack_2 = &UNK_?;
        MVBody_set_CollidersEnabled(this_02,0,(MethodInfo *)0x0);
        pMVar1 = (this_02->fields).bodyObject;
        if ((pMVar1 == (MVBodyObject *)0x0) ||
           (this_03 = (pMVar1->fields).avatarBlobShadowController,
           this_03 == (AvatarBlobShadowController *)0x0)) goto code_?;
        this = (MVBody *)CONCAT31(this._1_3_,1);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)this_03,(bool)this,(MethodInfo *)0x0);
      (this_02->fields).initialized = 1;
      MVBody_UpdateVisibility(this_02,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void InitializeCommon() */

void Assembly-CSharp.dll::MVBody::MVBody_InitializeCommon(MVBody *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVBody_AttachCubes(this,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
  Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
  pMVar1 = (this->fields).bodyObject;
  if (pMVar1 != (MVBodyObject *)0x0) {
    bodyData = (pMVar1->fields).bodyData;
    pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
             func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    isVisible = (this->fields).visible;
    pBVar3 = (BodyAccessoriesController *)func_?(TypeInfo__BodyAccessoriesController);
    BodyAccessoriesController::BodyAccessoriesController__ctor
              (pBVar3,unaff_ESI,bodyData,pDVar2,isVisible,(MethodInfo *)0x0);
    (this->fields).bodyAccessoriesController = pBVar3;
    pDVar2 = MVBody_GetAccessoryData(this,(MethodInfo *)0x0);
    if (pBVar3 != (BodyAccessoriesController *)0x0) {
      BodyAccessoriesController::BodyAccessoriesController_RefreshAccessories
                (pBVar3,pDVar2,(MethodInfo *)0x0);
      pBVar3 = (this->fields).bodyAccessoriesController;
      if (pBVar3 != (BodyAccessoriesController *)0x0) {
        pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
                 MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                 KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                 KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                           ((KogamaSettingNumericBase_1_System_Single_ *)pBVar3,(MethodInfo *)0x0);
        MVBody_UpdateBodyClone(this,pDVar2,(MethodInfo *)0x0);
        pMVar1 = (this->fields).bodyObject;
        if ((pMVar1 != (MVBodyObject *)0x0) &&
           (this_00 = (pMVar1->fields).boneAnimation, this_00 != (BoneAnimation *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)this_00,1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void InitializeHealth(Single) */

void Assembly-CSharp.dll::MVBody::MVBody_InitializeHealth
               (MVBody *this,float currentHealthAmount,MethodInfo *method)

{
  pMVar1 = (this->fields).bodyObject;
  if ((pMVar1 != (MVBodyObject *)0x0) &&
     (this_00 = (pMVar1->fields).avatarBlinker, this_00 != (AvatarBlinker *)0x0)) {
    AvatarBlinker::AvatarBlinker_SetPreviousHealth(this_00,currentHealthAmount,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVBody::MVBody_InitializeInventory(MVBody *this,MethodInfo *method)

{
  MVGroup::MVGroup_InitializeInventory((MVGroup *)this,(MethodInfo *)0x0);
  MVBody_InitializeCommon(this,(MethodInfo *)0x0);
  MVBody_set_CollidersEnabled(this,0,(MethodInfo *)0x0);
  pMVar1 = (this->fields).bodyObject;
  if ((pMVar1 != (MVBodyObject *)0x0) &&
     (this_00 = (pMVar1->fields).avatarBlobShadowController,
     this_00 != (AvatarBlobShadowController *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void InitializeShield(Single) */

void Assembly-CSharp.dll::MVBody::MVBody_InitializeShield
               (MVBody *this,float currentShieldAmount,MethodInfo *method)

{
  pMVar1 = (this->fields).bodyObject;
  if ((pMVar1 != (MVBodyObject *)0x0) &&
     (this_00 = (pMVar1->fields).avatarBlinker, this_00 != (AvatarBlinker *)0x0)) {
    AvatarBlinker::AvatarBlinker_SetPreviousShield(this_00,currentShieldAmount,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean IsAccessoryEquipped(Int32) */

bool Assembly-CSharp.dll::MVBody::MVBody_IsAccessoryEquipped
               (MVBody *this,int32_t streamingAssetId,MethodInfo *method)

{
  pBVar1 = (this->fields).bodyAccessoriesController;
  if (pBVar1 == (BodyAccessoriesController *)0x0) {
    uStack_2 = 0;
    func_?();
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  uStack_2 = 0xffffffff;
  puStack_5 = &DAT_?;
  uStack_6 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_6;
  puStack_7 = &stack0xffffff9c;
  puVar8 = &stack0xffffff9c;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar8 = puStack_7;
  }
  puStack_7 = puVar8;
  bStack_9 = 0;
  uStack_10 = 0;
  iStack_11 = 0;
  KStack_12.key = 0;
  KStack_12.value = 0;
  func_?();
  uStack_13 = 0xffffffff;
  this_00 = (pBVar1->fields).accessoryData;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    puStack_14 = &stack0xffffff9c;
    puStack_7 = &stack0xffffff9c;
    pDVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                        &stack0xffffffa8,(Dictionary_2_WinningConditionType_System_Object_ *)this_00
                        ,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                       );
    auStack_16._0_4_ = pDVar15->dictionary;
    auStack_16._4_4_ = pDVar15->next;
    auStack_16._8_4_ = pDVar15->stamp;
    auStack_16._12_4_ = (pDVar15->current).key;
    auStack_16._16_4_ = (pDVar15->current).value;
    uStack_2 = 0;
    do {
      cVar17 = func_?();
      if (cVar17 == '\0') goto code_?;
      KStack_12 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_16,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                            );
      func_?();
      this_01 = (Dictionary_2_System_Type_Pool_ *)func_?();
      this_02 = (Enum *)func_?();
      if (this_02 == (Enum *)0x0) {
code_?:
        auStack_16._4_4_ = &UNK_?;
        func_?();
        goto code_?;
      }
      key = mscorlib.dll::System::Enum::Enum_ToString_2(this_02,StringLiteral_d,(MethodInfo *)0x0);
      if ((this_01 == (Dictionary_2_System_Type_Pool_ *)0x0) ||
         (pDVar18 = (Dictionary_2_System_Int32_System_Int32_ *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                   Dictionary_2_System_Type_Pool__get_Item
                             (this_01,(Type *)key,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             ), pDVar18 == (Dictionary_2_System_Int32_System_Int32_ *)0x0)) {
code_?:
        auStack_16._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
        goto code_?;
      }
      if ((pDVar18->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class) {
        auStack_16._8_4_ = TypeInfo__System__Int32;
        auStack_16._0_4_ = &UNK_?;
        auStack_16._4_4_ = pDVar18;
        func_?();
        goto code_?;
      }
      auStack_16._4_4_ = &UNK_?;
      auStack_16._8_4_ = pDVar18;
      piVar19 = (int *)func_?();
    } while (*piVar19 != streamingAssetId);
    bStack_9 = 1;
code_?:
    uStack_2 = 0xffffffff;
    puVar20 = &UNK_?;
    func_?();
    if (iStack_11 != 0) {
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
    if (puVar20 == (undefined *)0x7f) {
      *unaff_FS_OFFSET = uStack_6;
      return bStack_9;
    }
  }
  *unaff_FS_OFFSET = uStack_6;
  return 0;
}


/* Boolean IsAccessorySlotOccupied(AccessorySlotType) */

bool Assembly-CSharp.dll::MVBody::MVBody_IsAccessorySlotOccupied
               (MVBody *this,AccessorySlotType__Enum accessorySlotType,MethodInfo *method)

{
  pBVar1 = (this->fields).bodyAccessoriesController;
  if (pBVar1 == (BodyAccessoriesController *)0x0) {
    AStack_2 = 0;
    func_?();
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (pBVar1->fields).accessoryData;
  AStack_2 = accessorySlotType;
  key = (String *)func_?(&AStack_2,0);
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)this_00,key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    return bVar4;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void OnAnimationUpdate(Object) */

void Assembly-CSharp.dll::MVBody::MVBody_OnAnimationUpdate
               (MVBody *this,Object *newAnimationData,MethodInfo *method)

{
  pMVar1 = (this->fields).bodyObject;
  if ((pMVar1 == (MVBodyObject *)0x0) ||
     (this_02 = (pMVar1->fields).boneAnimation, this_02 == (BoneAnimation *)0x0)) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  player = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
  if (newAnimationData == (Object *)0x0) goto code_?;
  bVar3 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
          naturalAligment;
  if (((newAnimationData->klass->_1).naturalAligment < bVar3) ||
     ((Dictionary_2_System_Object_System_Object___Class *)
      (newAnimationData->klass->_1).typeHierarchy[bVar3 - 1] !=
      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  this_04 = (Dictionary_2_System_Type_Pool_ *)0x0;
  if (bVar4) {
    this_04 = (Dictionary_2_System_Type_Pool_ *)newAnimationData;
  }
  if (this_04 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
  pDVar5 = (Dictionary_2_System_Object_System_Object___Class *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
           Dictionary_2_System_Type_Pool__get_Item
                     (this_04,(Type *)StringLiteral_state,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  player = (Dictionary_2_System_Object_System_Object___Class *)0x0;
  if (pDVar5 == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
code_?:
    pPVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (this_04,(Type *)StringLiteral_timeStamp,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar6 == (Pool *)0x0) {
code_?:
      pPVar6 = (Pool *)func_?();
    }
    else if ((pPVar6->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
      puVar7 = (undefined4 *)func_?();
      friend_1 = (Friend *)*puVar7;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      this_00 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
                (this_02->fields).OnAnimationChange;
      if (this_00 !=
          (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0) {
        mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::
        String,System::Object]]::
        Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
                  (this_00,(Dictionary_2_System_String_System_Object_ *)player,
                   MethodInfo__System__Action<System::String>__Invoke_System__String_);
      }
      if ((this_02->fields).isLocal != 0) {
        this_03 = (PlayerElementData *)func_?();
        PlayerElementData::PlayerElementData__ctor
                  (this_03,(MVPlayer *)player,friend_1,(MethodInfo *)0x0);
        (this_02->fields).currentAnim = (AnimationData *)this_03;
        BoneAnimation::BoneAnimation_ComputeAnimation(this_02,(MethodInfo *)0x0);
        return;
      }
      this_01 = (Queue_1_SmoothPhysicsMovement_Package_ *)(this_02->fields).animationQueue;
      item = (SmoothPhysicsMovement_Package *)func_?();
      PlayerElementData::PlayerElementData__ctor
                ((PlayerElementData *)item,(MVPlayer *)player,friend_1,(MethodInfo *)0x0);
      if (this_01 != (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) {
        System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
        Queue_1_SmoothPhysicsMovement_Package__Enqueue
                  (this_01,item,
                   MethodInfo__System__Collections__Generic__Queue<AnimationData>__Enqueue_AnimationData_
                  );
        BoneAnimation::BoneAnimation_ComputeRemoteAnimation(this_02,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    pDVar5 = (Dictionary_2_System_Object_System_Object___Class *)func_?(pPVar6);
    pSVar8 = extraout_ECX;
  }
  else {
    if ((String__Class *)(pDVar5->_0).image == TypeInfo__System__String) {
      player = pDVar5;
    }
    pSVar8 = TypeInfo__System__String;
    if (player != (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
  }
  func_?(pDVar5,pSVar8);
  newAnimationData = extraout_EDX;
code_?:
  func_?(newAnimationData,player);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVBody::MVBody_OnDataUpdate(MVBody *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  MVBlueprintBase::MVBlueprintBase_MapDataToFields((MVBlueprintBase *)this,(MethodInfo *)0x0);
  pBVar1 = (this->fields).bodyAccessoriesController;
  pDVar2 = MVBody_GetAccessoryData(this,(MethodInfo *)0x0);
  if (pBVar1 != (BodyAccessoriesController *)0x0) {
    BodyAccessoriesController::BodyAccessoriesController_RefreshAccessories
              (pBVar1,pDVar2,(MethodInfo *)0x0);
    pBVar1 = (this->fields).bodyAccessoriesController;
    if (pBVar1 != (BodyAccessoriesController *)0x0) {
      pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
               MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
               KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
               KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                         ((KogamaSettingNumericBase_1_System_Single_ *)pBVar1,(MethodInfo *)0x0);
      MVBody_UpdateBodyClone(this,pDVar2,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_OnDataUpdate,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnHealthUpdate(Object) */

void Assembly-CSharp.dll::MVBody::MVBody_OnHealthUpdate
               (MVBody *this,Object *newHealthData,MethodInfo *method)

{
  pMVar1 = (this->fields).bodyObject;
  if ((pMVar1 != (MVBodyObject *)0x0) &&
     (this_00 = (pMVar1->fields).avatarBlinker, this_00 != (AvatarBlinker *)0x0)) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if (newHealthData == (Object *)0x0) {
      func_?(0);
      newHealthData = extraout_ECX;
      pSVar2 = extraout_EDX;
    }
    else {
      pSVar2 = TypeInfo__System__Single;
      if ((newHealthData->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class)
      {
        pfVar3 = (float *)func_?(newHealthData);
        fVar4 = *pfVar3;
        if (fVar4 < (this_00->fields).previousBlinkHealth) {
          BlinkerBase::BlinkerBase_StartBlinking
                    ((BlinkerBase *)this_00,BlinkType__Enum_Damage,0.5,(MethodInfo *)0x0);
        }
        (this_00->fields).previousBlinkHealth = fVar4;
        return;
      }
    }
    func_?(newHealthData,pSVar2);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnShieldUpdate(Object) */

void Assembly-CSharp.dll::MVBody::MVBody_OnShieldUpdate
               (MVBody *this,Object *newShieldData,MethodInfo *method)

{
  pMVar1 = (this->fields).bodyObject;
  if ((pMVar1 != (MVBodyObject *)0x0) &&
     (this_00 = (pMVar1->fields).avatarBlinker, this_00 != (AvatarBlinker *)0x0)) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if (newShieldData == (Object *)0x0) {
      func_?(0);
      newShieldData = extraout_ECX;
      pSVar2 = extraout_EDX;
    }
    else {
      pSVar2 = TypeInfo__System__Single;
      if ((newShieldData->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class)
      {
        pfVar3 = (float *)func_?(newShieldData);
        fVar4 = *pfVar3;
        if (fVar4 < (this_00->fields).previousBlinkShield) {
          BlinkerBase::BlinkerBase_StartBlinking
                    ((BlinkerBase *)this_00,BlinkType__Enum_ShieldDamage,0.5,(MethodInfo *)0x0);
        }
        (this_00->fields).previousBlinkShield = fVar4;
        return;
      }
    }
    func_?(newShieldData,pSVar2);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void PreviewAccessory(AccessoryDataClient) */

void Assembly-CSharp.dll::MVBody::MVBody_PreviewAccessory
               (MVBody *this,AccessoryDataClient *viewItem,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iStack_1 = 0;
  this_00 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  pDVar2 = MVBody_GetAccessoryData(this,(MethodInfo *)0x0);
  pDStack_3 = MVWorldObject.dll::MV::WorldObject::HashtableFunctions::
              HashtableFunctions_DeepCopyHashTable_1(pDVar2,(MethodInfo *)0x0);
  this_01 = (Dictionary_2_System_String_Theme_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  uStack_4 = 2;
  pEVar5 = (Enum *)func_?(TypeInfo__MV__Common__AvatarAccessoryData,&uStack_4);
  if (pEVar5 != (Enum *)0x0) {
    pSVar6 = mscorlib.dll::System::Enum::Enum_ToString_2(pEVar5,StringLiteral_d,(MethodInfo *)0x0);
    if (viewItem != (AccessoryDataClient *)0x0) {
      pTVar7 = (Theme *)func_?();
      if (this_01 != (Dictionary_2_System_String_Theme_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
        Dictionary_2_System_String_Theme__set_Item
                  (this_01,pSVar6,pTVar7,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
        pEVar5 = (Enum *)func_?();
        if (pEVar5 != (Enum *)0x0) {
          pSVar6 = mscorlib.dll::System::Enum::Enum_ToString_2
                             (pEVar5,StringLiteral_d,(MethodInfo *)0x0);
          pTVar7 = (Theme *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
          Dictionary_2_System_String_Theme__set_Item
                    (this_01,pSVar6,pTVar7,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                    );
          pEVar5 = (Enum *)func_?();
          if (pEVar5 != (Enum *)0x0) {
            pSVar6 = mscorlib.dll::System::Enum::Enum_ToString_2
                               (pEVar5,StringLiteral_d,(MethodInfo *)0x0);
            pTVar7 = (Theme *)func_?();
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
            Dictionary_2_System_String_Theme__set_Item
                      (this_01,pSVar6,pTVar7,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                      );
            pEVar5 = (Enum *)func_?();
            if (pEVar5 != (Enum *)0x0) {
              pSVar6 = mscorlib.dll::System::Enum::Enum_ToString_2
                                 (pEVar5,StringLiteral_d,(MethodInfo *)0x0);
              pTVar7 = (Theme *)func_?();
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
              Dictionary_2_System_String_Theme__set_Item
                        (this_01,pSVar6,pTVar7,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                        );
              pEVar5 = (Enum *)func_?();
              if (pEVar5 != (Enum *)0x0) {
                pSVar6 = mscorlib.dll::System::Enum::Enum_ToString_2
                                   (pEVar5,StringLiteral_d,(MethodInfo *)0x0);
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
                Dictionary_2_System_String_Theme__set_Item
                          (this_01,pSVar6,(Theme *)(viewItem->fields)._.url,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                          );
                iStack_1 = (viewItem->fields)._.slot;
                pSVar6 = (String *)func_?();
                if (pDStack_3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
                  Dictionary_2_System_String_Theme__set_Item
                            ((Dictionary_2_System_String_Theme_ *)pDStack_3,pSVar6,(Theme *)this_01,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                            );
                  pBVar8 = (this->fields).bodyAccessoriesController;
                  if (pBVar8 != (BodyAccessoriesController *)0x0) {
                    BodyAccessoriesController::BodyAccessoriesController_UpdateAccessoryVisibility
                              (pBVar8,0,(MethodInfo *)0x0);
                    pBVar8 = (this->fields).bodyAccessoriesController;
                    if (pBVar8 != (BodyAccessoriesController *)0x0) {
                      BodyAccessoriesController::BodyAccessoriesController_set_AccessoryMoveOverride
                                (pBVar8,0,(MethodInfo *)0x0);
                      bodyWoId = mscorlib.dll::System::Collections::ObjectModel::
                                 Collection`1[VoxelHit]::Collection_1_VoxelHit__get_Items
                                           ((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
                      pMVar9 = (this->fields).bodyObject;
                      if (pMVar9 != (MVBodyObject *)0x0) {
                        bodyData = (pMVar9->fields).bodyData;
                        pBVar8 = (BodyAccessoriesController *)func_?();
                        BodyAccessoriesController::BodyAccessoriesController__ctor
                                  (pBVar8,(int32_t)bodyWoId,bodyData,pDStack_3,1,(MethodInfo *)0x0);
                        (this->fields).previewBodyAccessoriesController = pBVar8;
                        if (pBVar8 != (BodyAccessoriesController *)0x0) {
                          BodyAccessoriesController::BodyAccessoriesController_RefreshAccessories
                                    (pBVar8,pDStack_3,(MethodInfo *)0x0);
                          pBVar8 = (this->fields).previewBodyAccessoriesController;
                          if (pBVar8 != (BodyAccessoriesController *)0x0) {
                            BodyAccessoriesController::
                            BodyAccessoriesController_set_AccessoryMoveOverride
                                      (pBVar8,1,(MethodInfo *)0x0);
                            pBVar8 = (this->fields).previewBodyAccessoriesController;
                            if (pBVar8 != (BodyAccessoriesController *)0x0) {
                              pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
                                       MVWorldObject.dll::MV::WorldObject::KogamaSettings::
                                       KogamaSettingsCore::KogamaSettingTypes::
                                       KogamaSettingNumericBase`1[System::Single]::
                                       KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                                                 ((KogamaSettingNumericBase_1_System_Single_ *)
                                                  pBVar8,(MethodInfo *)0x0);
                              MVBody_UpdateBodyClone(this,pDVar2,(MethodInfo *)0x0);
                              return;
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
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
      pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
               MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
               KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
               KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                         ((KogamaSettingNumericBase_1_System_Single_ *)pBVar1,(MethodInfo *)0x0);
      MVBody_UpdateBodyClone(this,pDVar2,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void StartAnimation(String) */

void Assembly-CSharp.dll::MVBody::MVBody_StartAnimation
               (MVBody *this,String *newAnimation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    timeStamp = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_01,(MethodInfo *)0x0)
    ;
    pMVar1 = (this->fields).bodyObject;
    if ((pMVar1 != (MVBodyObject *)0x0) &&
       (this_00 = (pMVar1->fields).boneAnimation, this_00 != (BoneAnimation *)0x0)) {
      BoneAnimation::BoneAnimation_StartAnimation(this_00,newAnimation,timeStamp,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void StartBlinking(BlinkType, Single) */

void Assembly-CSharp.dll::MVBody::MVBody_StartBlinking
               (MVBody *this,BlinkType__Enum type,float duration,MethodInfo *method)

{
  pMVar1 = (this->fields).bodyObject;
  if ((pMVar1 != (MVBodyObject *)0x0) &&
     (this_00 = (pMVar1->fields).avatarBlinker, this_00 != (AvatarBlinker *)0x0)) {
    BlinkerBase::BlinkerBase_StartBlinking((BlinkerBase *)this_00,type,duration,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_00 = (pAVar2->fields)._.blinkers;
    if (this_00 != (Dictionary_2_BlinkType_Blinker_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[BlinkType,System::Object]::
               Dictionary_2_BlinkType_System_Object__get_Item
                         ((Dictionary_2_BlinkType_System_Object_ *)this_00,type,
                          MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Item_BlinkType_
                         );
      if (pOVar3 != (Object *)0x0) {
        pOVar3[2].klass = (Object__Class *)0x0;
        pOVar3[1].monitor = (MonitorData *)0x0;
        return;
      }
    }
    func_?(0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SyncOffset(AccessorySlotType, Single) */

void Assembly-CSharp.dll::MVBody::MVBody_SyncOffset
               (MVBody *this,AccessorySlotType__Enum slot,float offset,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).previewBodyAccessoriesController == (BodyAccessoriesController *)0x0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_00 == (MVNetworkGame_OperationRequests *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdateAvatarAccessoryOffset
              (this_00,(this->fields)._._._._.id,slot,offset,(MethodInfo *)0x0);
  }
  return;
}


/* Void SyncScale(AccessorySlotType, Single) */

void Assembly-CSharp.dll::MVBody::MVBody_SyncScale
               (MVBody *this,AccessorySlotType__Enum slot,float scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).previewBodyAccessoriesController == (BodyAccessoriesController *)0x0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_00 == (MVNetworkGame_OperationRequests *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdateAvatarAccessoryScale
              (this_00,(this->fields)._._._._.id,slot,scale,(MethodInfo *)0x0);
  }
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
  func_?(0);
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
    uStack_3 = 0;
    func_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uStack_3 = 0xffffffff;
  puStack_5 = &DAT_?;
  uStack_6 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_6;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if ((((pAVar2->fields)._.visible != 0) &&
      (this_05 = (pAVar2->fields)._.blinkers, this_05 != (Dictionary_2_BlinkType_Blinker_ *)0x0)) &&
     (pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
               ::Object]::Dictionary_2_WinningConditionType_System_Object__get_Values
                         ((Dictionary_2_WinningConditionType_System_Object_ *)this_05,
                          MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Values__
                         ),
     pDVar7 != (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0))
  {
    this_00 = (pAVar2->fields)._.blinkers;
    if ((this_00 == (Dictionary_2_BlinkType_Blinker_ *)0x0) ||
       (this_01 = (Dictionary_2_TKey_TValue_ValueCollection_ChatCommand_System_Object_ *)
                  mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[WinningConditionType,System::Object]::
                  Dictionary_2_WinningConditionType_System_Object__get_Values
                            ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Values__
                            ),
       this_01 == (Dictionary_2_TKey_TValue_ValueCollection_ChatCommand_System_Object_ *)0x0)) {
code_?:
      func_?();
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    method_00 = (MethodInfo *)&UNK_?;
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[TKey,TValue]+ValueCollection[ChatCommand,System::Object]::
    Dictionary_2_TKey_TValue_ValueCollection_ChatCommand_System_Object__GetEnumerator
              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_ChatCommand_System_Object_
                *)&stack0xffffffac,this_01,
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BlinkType,_Blinker>__GetEnumerator__
              );
    uStack_3 = 0;
    while (cVar8 = func_?(), cVar8 != '\0') {
      this_02 = (Blinker *)func_?();
      if (this_02 == (Blinker *)0x0) goto code_?;
      fVar9 = (this_02->fields).blinkStartTime;
      fVar10 = (this_02->fields).blinkDuration;
      fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      if (fVar11 <= fVar10 + fVar9) {
        func_?();
        pMVar12 = (pAVar2->fields)._.meshFilters;
        if (pMVar12 != (MeshFilter__Array *)0x0) {
          iVar13 = 0;
          while( true ) {
            if (pMVar12 == (MeshFilter__Array *)0x0) goto code_?;
            if ((int)pMVar12->max_length <= iVar13) break;
            this_03 = (MeshFilter *)func_?();
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            bVar14 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                              ((Object_1 *)this_03,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar14 == 0) {
              if ((this_03 == (MeshFilter *)0x0) ||
                 (this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_1_get_gameObject((Component_1 *)this_03,(MethodInfo *)this_05)
                 , this_04 == (GameObject *)0x0)) goto code_?;
              this_05 = (Dictionary_2_BlinkType_Blinker_ *)&UNK_?;
              bVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                      GameObject_get_activeInHierarchy(this_04,method_00);
              if (bVar14 != 0) {
                tfm = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                ((Component_1 *)this_03,(MethodInfo *)0x0);
                mesh = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::
                       MeshFilter_get_sharedMesh(this_03,(MethodInfo *)0x0);
                if (this_02 == (Blinker *)0x0) goto code_?;
                method_00 = (MethodInfo *)&UNK_?;
                Blinker::Blinker_Draw
                          (this_02,mesh,tfm,(pAVar2->fields)._.targetCamera,
                           (pAVar2->fields)._.layerMask,(MethodInfo *)0x0);
              }
            }
            iVar13 = iVar13 + 1;
          }
        }
      }
    }
    uStack_3 = 0xffffffff;
    func_?();
  }
  *unaff_FS_OFFSET = uStack_6;
  return;
}


/* Void UpdateBodyClone(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVBody::MVBody_UpdateBodyClone
               (MVBody *this,Dictionary_2_System_Object_System_Object_ *accessoryData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  x = (this->fields).bodyClone;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if ((this->fields).bodyClone == (BodyClone *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_02 = *(BodyAccessoriesController **)(in_stack_3 + 0xc);
  if (this_02 == (BodyAccessoriesController *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack4 = 0;
  uVar5 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffffc;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOStack_6 = (Object *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  puStack_8 = (undefined *)0x0;
  auStack_9._20_4_ = (Dictionary_2_WinningConditionType_System_Object_ *)0x0;
  pIStack_10 = (IEqualityComparer_1_WinningConditionType_ *)0x0;
  pSStack_11 = (SerializationInfo *)0x0;
  iStack_12 = 0;
  auStack_9._16_4_ = (Object *)0x0;
  MStack_13._._._.m_CachedPtr = (Behaviour__Fields)(Component_1__Fields)0x0;
  KStack_14.key = 0;
  KStack_14.value = 0;
  auStack_9._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_9._4_4_ = (Object__Array *)0x0;
  auStack_9._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_9._12_4_ = 0;
  piVar15 = (int *)&stack0xffffff68;
  func_?();
  (this_02->fields).accessoryData = in_stack_16;
  this_03 = (List_1_UnityEngine_Vector4_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_03,
             MethodInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>__List__);
  pDVar17 = (this_02->fields).accessoryMap;
  if (pDVar17 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0)
  goto code_?;
  pDVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
           Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                     ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                      &stack0xffffff74,(Dictionary_2_WinningConditionType_System_Object_ *)pDVar17,
                      MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__GetEnumerator__
                     );
  auStack_9._20_4_ = pDVar18->dictionary;
  pIStack_10 = (IEqualityComparer_1_WinningConditionType_ *)pDVar18->next;
  pSStack_11 = (SerializationInfo *)pDVar18->stamp;
  iStack_12 = (pDVar18->current).key;
  pOStack_6 = (pDVar18->current).value;
  while (cVar19 = func_?(), cVar19 != '\0') {
    KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                          ((LevelRewardsManager *)(auStack_9 + 0x14),
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Current__
                          );
    in_stack_20 =
         MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Value__
    ;
    pAVar21 = (AvatarAccessory *)func_?();
    bVar1 = BodyAccessoriesController::BodyAccessoriesController_IsAccessoryInWoData
                      (this_02,pAVar21,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      item = func_?();
      if (this_03 == (List_1_UnityEngine_Vector4_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)this_03,item,
                 MethodInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>__Add_MV__Common__AccessorySlotType_
                );
    }
  }
  in_stack_16 = (Dictionary_2_System_Object_System_Object_ *)0x0;
  *piVar15 = 100;
  pMVar22 = 
  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__Dispose__
  ;
  func_?();
  puVar23 = puStack_8;
  if (puStack_8 == (undefined *)0x0) {
    if (*piVar15 == 100) {
      in_stack_16 = (Dictionary_2_System_Object_System_Object_ *)0xffffffff;
    }
    if (this_03 == (List_1_UnityEngine_Vector4_ *)0x0) {
code_?:
      puVar23 = (undefined *)func_?();
      goto code_?;
    }
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
    List_1_UnityEngine_Color32__GetEnumerator
              ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffff78,
               (List_1_UnityEngine_Color32_ *)this_03,
               MethodInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>__GetEnumerator__
              );
    while( true ) {
      auStack_9._4_4_ =
           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::Common::AccessorySlotType>__MoveNext__
      ;
      auStack_9._0_4_ = &stack0xffffff94;
      cVar19 = func_?();
      if (cVar19 == '\0') break;
      key = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
            Serialization::JsonProperty]::
            Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                      ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)&stack0xffffff94,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::Common::AccessorySlotType>__get_Current__
                      );
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pDVar17 = (this_02->fields).accessoryMap;
      if (((pDVar17 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) ||
          (pAVar21 = (AvatarAccessory *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                    AccessorySlotType,System::Object]::
                    Dictionary_2_MV_Common_AccessorySlotType_System_Object__get_Item
                              ((Dictionary_2_MV_Common_AccessorySlotType_System_Object_ *)pDVar17,
                               (AccessorySlotType__Enum)key,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                              ), pAVar21 == (AvatarAccessory *)0x0)) ||
         (pMVar22 = (MethodInfo *)AvatarAccessory::AvatarAccessory_get_Transform(pAVar21,pMVar22),
         pMVar22 == (MethodInfo *)0x0)) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                ((Transform *)pMVar22,(Transform *)0x0,in_stack_20);
      pDVar17 = (this_02->fields).accessoryMap;
      if (pDVar17 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0)
      goto code_?;
      in_stack_20 = (MethodInfo *)&UNK_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::AccessorySlotType,System
      ::Object]::Dictionary_2_MV_Common_AccessorySlotType_System_Object__Remove
                ((Dictionary_2_MV_Common_AccessorySlotType_System_Object_ *)pDVar17,
                 (AccessorySlotType__Enum)key,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__Remove_MV__Common__AccessorySlotType_
                );
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)pAVar21,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)obj,(MethodInfo *)0x0);
    }
    iVar24 = (int)in_stack_16 + 1;
    piVar15[iVar24] = 0x9f;
    func_?(&stack0xffffff94,
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::Common::AccessorySlotType>__Dispose__
                   );
    puVar23 = puStack_8;
    if (puStack_8 == (undefined *)0x0) {
      if (((iVar24 != -1) && (piVar15[iVar24] == 0x9f)) && (-1 < iVar24)) {
        iVar24 = (int)in_stack_16;
      }
      in_stack_16 = (Dictionary_2_System_Object_System_Object_ *)iVar24;
      this_00 = (this_02->fields).accessoryData;
      if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pDVar18 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[WinningConditionType,System::Object]::
                 Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                             *)&stack0xffffff74,
                            (Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                           );
        auStack_9._0_4_ = pDVar18->dictionary;
        auStack_9._4_4_ = pDVar18->next;
        auStack_9._8_4_ = pDVar18->stamp;
        auStack_9._12_4_ = (pDVar18->current).key;
        auStack_9._16_4_ = (pDVar18->current).value;
        while (cVar19 = func_?(), puVar23 = puStack_8, cVar19 != '\0') {
          KStack_14 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                                ((LevelRewardsManager *)auStack_9,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                                );
          pSVar25 = (String *)func_?();
          pSVar26 = (String *)0x0;
          if (pSVar25 != (String *)0x0) {
            if (pSVar25->klass == TypeInfo__System__String) {
              pSVar26 = pSVar25;
            }
            if (pSVar26 == (String *)0x0) goto code_?;
          }
          pMVar22 = (MethodInfo *)0x0;
          MStack_13._._._.m_CachedPtr = (Behaviour__Fields)(Component_1__Fields)0xffffffff;
          bVar1 = mscorlib.dll::System::Int32::Int32_TryParse
                            (pSVar26,(int32_t *)&MStack_13,(MethodInfo *)0x0);
          if (bVar1 == 0) {
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                      ((Object *)StringLiteral_Failed_to_parse_slot,(MethodInfo *)0x0);
          }
          else {
            this_04 = (ScaleAnimationBase *)func_?();
            ScaleAnimationBase::ScaleAnimationBase_Play(this_04,0.0,pMVar22);
            if (this_04 == (ScaleAnimationBase *)0x0) goto code_?;
            (this_04->fields).state = (int32_t)this_02;
            (this_04->fields)._._._._.m_CachedPtr = (void *)MStack_13._._._.m_CachedPtr;
            func_?();
            this_05 = (Dictionary_2_System_Type_Pool_ *)func_?();
            pEVar27 = (Enum *)func_?();
            if ((pEVar27 == (Enum *)0x0) ||
               (pMVar22 = (MethodInfo *)StringLiteral_d,
               pSVar26 = mscorlib.dll::System::Enum::Enum_ToString_2
                                   (pEVar27,StringLiteral_d,(MethodInfo *)0x0),
               this_05 == (Dictionary_2_System_Type_Pool_ *)0x0)) goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
            Dictionary_2_System_Type_Pool__get_Item
                      (this_05,(Type *)pSVar26,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
            pSVar26 = (String *)func_?();
            pDVar17 = (this_02->fields).accessoryMap;
            if (pDVar17 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0)
            goto code_?;
            bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                    AccessorySlotType,System::Object]::
                    Dictionary_2_MV_Common_AccessorySlotType_System_Object__ContainsKey
                              ((Dictionary_2_MV_Common_AccessorySlotType_System_Object_ *)pDVar17,
                               (AccessorySlotType__Enum)(this_04->fields)._._._._.m_CachedPtr,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                              );
            if (bVar1 == 0) {
code_?:
              this_01 = (this_02->fields).accessoryLoader;
              this_06 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                         *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (this_06,(Object *)this_04,
                         MethodInfo__BodyAccessoriesController___RefreshAccessories_c__AnonStorey0____m__0_AvatarAccessory_
                         ,MethodInfo__System__Action<AvatarAccessory>__Action_System__Object__void__
                        );
              if (this_01 == (AccessoryLoader *)0x0) goto code_?;
              Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::
              AccessoryLoader_LoadAccessory
                        (this_01,pSVar26,(Action_1_AvatarAccessory_ *)this_06,(MethodInfo *)0x0);
            }
            else {
              pDVar17 = (this_02->fields).accessoryMap;
              if ((pDVar17 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) ||
                 (pCVar28 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                            AccessorySlotType,System::Object]::
                            Dictionary_2_MV_Common_AccessorySlotType_System_Object__get_Item
                                      ((Dictionary_2_MV_Common_AccessorySlotType_System_Object_ *)
                                       pDVar17,(AccessorySlotType__Enum)
                                              (this_04->fields)._._._._.m_CachedPtr,
                                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                                      ),
                 pCVar28 == (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0))
              goto code_?;
              in_stack_29 =
                   (MethodInfo *)
                   mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             (pCVar28,in_stack_29);
              if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__String->_1).cctor_started == 0)) {
                func_?(TypeInfo__System__String);
              }
              bVar1 = mscorlib.dll::System::String::String_op_Inequality
                                ((String *)in_stack_29,pSVar26,(MethodInfo *)0x0);
              if (bVar1 != 0) goto code_?;
              pDVar17 = (this_02->fields).accessoryMap;
              if (pDVar17 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0)
              goto code_?;
              bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                      AccessorySlotType,System::Object]::
                      Dictionary_2_MV_Common_AccessorySlotType_System_Object__ContainsKey
                                ((Dictionary_2_MV_Common_AccessorySlotType_System_Object_ *)pDVar17,
                                 (AccessorySlotType__Enum)(this_04->fields)._._._._.m_CachedPtr,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                                );
              if (bVar1 != 0) {
                pDVar17 = (this_02->fields).accessoryMap;
                if ((pDVar17 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) ||
                   (pCVar28 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                              mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                              AccessorySlotType,System::Object]::
                              Dictionary_2_MV_Common_AccessorySlotType_System_Object__get_Item
                                        ((Dictionary_2_MV_Common_AccessorySlotType_System_Object_ *)
                                         pDVar17,(AccessorySlotType__Enum)
                                                (this_04->fields)._._._._.m_CachedPtr,
                                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                                        ),
                   pCVar28 == (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0))
                goto code_?;
                pSVar25 = (String *)
                         mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                         Json::Serialization::JsonProperty]::
                         Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                   (pCVar28,pMVar22);
                if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0)
                   && ((TypeInfo__System__String->_1).cctor_started == 0)) {
                  func_?();
                }
                bVar1 = mscorlib.dll::System::String::String_op_Equality
                                  (pSVar25,pSVar26,(MethodInfo *)0x0);
                if (bVar1 != 0) {
                  pEVar27 = (Enum *)func_?();
                  if (pEVar27 == (Enum *)0x0) goto code_?;
                  pSVar26 = mscorlib.dll::System::Enum::Enum_ToString_2
                                      (pEVar27,StringLiteral_d,(MethodInfo *)0x0);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                  Dictionary_2_System_Type_Pool__get_Item
                            (this_05,(Type *)pSVar26,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
                  pfVar30 = (float *)func_?();
                  BodyAccessoriesController::BodyAccessoriesController_ApplyAccessoryOffset
                            (this_02,*pfVar30,
                             (AccessorySlotType__Enum)(this_04->fields)._._._._.m_CachedPtr,
                             (MethodInfo *)0x0);
                  uStack_31 = 5;
                  pEVar27 = (Enum *)func_?();
                  if (pEVar27 == (Enum *)0x0) goto code_?;
                  pSVar26 = mscorlib.dll::System::Enum::Enum_ToString_2
                                      (pEVar27,StringLiteral_d,(MethodInfo *)0x0);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                  Dictionary_2_System_Type_Pool__get_Item
                            (this_05,(Type *)pSVar26,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
                  pfVar30 = (float *)func_?();
                  BodyAccessoriesController::BodyAccessoriesController_ApplySizeChange
                            (this_02,*pfVar30,
                             (AccessorySlotType__Enum)(this_04->fields)._._._._.m_CachedPtr,
                             (MethodInfo *)0x0);
                }
              }
            }
          }
        }
        piVar15[(int)in_stack_16 + 1] = 0x238;
        func_?();
        if (puVar23 == (undefined *)0x0) {
          *unaff_FS_OFFSET = uVar5;
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  else {
code_?:
    puVar23 = (undefined *)func_?(puVar23);
  }
  func_?(puVar23);
  pSVar25 = extraout_ECX;
code_?:
  func_?(pSVar25);
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateVisibility() */

void Assembly-CSharp.dll::MVBody::MVBody_UpdateVisibility(MVBody *this,MethodInfo *method)

{
  uStack_1._0_2_ = 0xffff;
  uStack_1._2_2_ = 0xffff;
  puStack_2 = &DAT_?;
  _Stack_10.genericMethod = *(Il2CppGenericMethod **)unaff_FS_OFFSET;
  unaff_FS_OFFSET->genericMethod = (Il2CppGenericMethod *)&_Stack_10;
  _Stack_14.rgctx_data = (Il2CppRGCTXData *)&stack0xffffffb4;
  _Var3.rgctx_data = (Il2CppRGCTXData *)&stack0xffffffb4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    _Var3 = _Stack_14;
  }
  _Stack_14 = _Var3;
  x = (AvatarBlinker *)0x0;
  CStack_3.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_3.monitor = (MonitorData *)0x0;
  CStack_3.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_3.fields.syncRoot = (Object *)0x0;
  func_?();
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).renderers;
  pIStack_4 = (Il2CppType *)&stack0xffffffb4;
  _Stack_14.rgctx_data = (Il2CppRGCTXData *)&stack0xffffffb4;
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    pIStack_4 = (Il2CppType *)&stack0xffffffb4;
    _Stack_14.rgctx_data = (Il2CppRGCTXData *)&stack0xffffffb4;
    pLVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_6,this_00,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Renderer>__GetEnumerator__
                       );
    CStack_3.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar5->l;
    CStack_3.monitor = (MonitorData *)pLVar5->next;
    CStack_3.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar5->ver;
    CStack_3.fields.syncRoot = (Object *)(pLVar5->current).rgba;
    uStack_1._0_2_ = 0;
    uStack_1._2_2_ = 0;
    while (cVar7 = func_?(), cVar7 != '\0') {
      this_04 = (Renderer *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          (&CStack_3,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Renderer>__get_Current__
                          );
      bVar8 = (this->fields).visible;
      _bStack_18 = (Il2CppType **)CONCAT31(uStack_9,bVar8);
      if (this_04 == (Renderer *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                (this_04,bVar8,(MethodInfo *)0x0);
    }
    (pIStack_4->data).__klassIndex = 0x44;
    uStack_1._0_2_ = 0xffff;
    uStack_1._2_2_ = 0xffff;
    method_00 = (MethodInfo *)&CStack_3;
    func_?(method_00,
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Renderer>__Dispose__
                   );
    if ((this->fields).shadowVisible != 0) {
      pMVar10 = (this->fields).bodyObject;
      if (pMVar10 == (MVBodyObject *)0x0) goto code_?;
      x = (AvatarBlinker *)(pMVar10->fields).avatarBlobShadowController;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      method_00 = (MethodInfo *)0x0;
      bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar8 != 0) {
        pMVar10 = (this->fields).bodyObject;
        if ((pMVar10 == (MVBodyObject *)0x0) ||
           (this_01 = (pMVar10->fields).avatarBlobShadowController,
           this_01 == (AvatarBlobShadowController *)0x0)) goto code_?;
        method_00 = (MethodInfo *)&UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)this_01,(this->fields).visible,(MethodInfo *)0x0);
      }
    }
    pMVar10 = (this->fields).bodyObject;
    if (pMVar10 != (MVBodyObject *)0x0) {
      x = (pMVar10->fields).avatarBlinker;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar8 != 0) {
        pMVar10 = (this->fields).bodyObject;
        if ((pMVar10 == (MVBodyObject *)0x0) ||
           (this_02 = (pMVar10->fields).avatarBlinker, this_02 == (AvatarBlinker *)0x0))
        goto code_?;
        GamePassesTextBubble::GamePassesTextBubble_set_DeactivateAfterFade
                  ((GamePassesTextBubble *)this_02,(this->fields).visible,method_00);
      }
      this_03 = (this->fields).bodyAccessoriesController;
      if (this_03 != (BodyAccessoriesController *)0x0) {
        BodyAccessoriesController::BodyAccessoriesController_UpdateAccessoryVisibility
                  (this_03,(this->fields).visible,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = _Stack_10;
        return;
      }
    }
  }
code_?:
  func_?(0);
  func_?(x,0,0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* MVBody(Dictionary`2[System.Object,System.Object], Dictionary`2[System.Int32,MVWorldObjectClient])
    */

void Assembly-CSharp.dll::MVBody::MVBody__ctor
               (MVBody *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).collidersEnabled = 1;
  (this->fields).shadowVisible = 1;
  (this->fields).visible = 1;
  this_01 = (Dictionary_2_System_Int32_IModelingConstraint_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_IModelingConstraint>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_IModelingConstraint>__Dictionary__
            );
  (this->fields).constraints = this_01;
  pLVar1 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Renderer>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar1,MethodInfo__System__Collections__Generic__List<UnityEngine::Renderer>__List__);
  (this->fields).renderers = (List_1_UnityEngine_Renderer_ *)pLVar1;
  pLVar1 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Collider>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar1,MethodInfo__System__Collections__Generic__List<UnityEngine::Collider>__List__);
  (this->fields).colliders = (List_1_UnityEngine_Collider_ *)pLVar1;
  pLVar1 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MVCubeModelInstance>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar1,MethodInfo__System__Collections__Generic__List<MVCubeModelInstance>__List__);
  (this->fields).attachedPartModels = (List_1_MVCubeModelInstance_ *)pLVar1;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  VStack_2.z = (float)&UNK_?;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                      (&VStack_2,(MethodInfo *)0x0);
  fVar4 = pVVar3->y;
  fVar5 = pVVar3->z;
  (this->fields).modelScale.x = pVVar3->x;
  (this->fields).modelScale.y = fVar4;
  (this->fields).modelScale.z = fVar5;
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?();
  }
  this_02 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_02 != (PrefabPool *)0x0) {
    prefabObject = (ObjectPrefab *)
                   AddDotsToTruncatedText+<Start>c__Iterator0::
                   AddDotsToTruncatedText_Start_c_Iterator0_System_Collections_IEnumerator_get_Current
                             ((AddDotsToTruncatedText_Start_c_Iterator0 *)this_02,(MethodInfo *)0x0)
    ;
    VStack_2.z = (float)&UNK_?;
    pMVar6 = this;
    MVBlueprintBase::MVBlueprintBase__ctor_1
              ((MVBlueprintBase *)this,(Dictionary_2_System_Object_System_Object_ *)0x0,prefabObject
               ,worldObjects,(MethodInfo *)0x0);
    pMVar7 = (MVBodyObject *)(this->fields)._._._.component;
    if (pMVar7 == (MVBodyObject *)0x0) {
      pMVar8 = (MVBodyObject *)0x0;
    }
    else {
      bVar9 = (TypeInfo__MVBodyObject->_1).naturalAligment;
      if (((((ObjectPrefab__Class *)pMVar7->klass)->_1).naturalAligment < bVar9) ||
         ((((ObjectPrefab__Class *)pMVar7->klass)->_1).typeHierarchy[bVar9 - 1] !=
          (Il2CppClass *)TypeInfo__MVBodyObject)) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      pMVar8 = (MVBodyObject *)0x0;
      if (bVar10) {
        pMVar8 = pMVar7;
      }
      if (pMVar8 == (MVBodyObject *)0x0) {
        func_?();
        goto code_?;
      }
    }
    (this->fields).bodyObject = pMVar8;
    if (worldObjects != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
      bVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
              Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__TryGetValue
                        ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                          *)worldObjects,(this->fields)._._._._.groupId,
                         (TerrainUtility_TerrainMap **)&stack0xfffffff8,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                        );
      if ((bVar11 != 0) && (pMVar6 != (MVBody *)0x0)) {
        bVar9 = (TypeInfo__MVAvatar->_1).naturalAligment;
        if (((pMVar6->klass->_1).naturalAligment < bVar9) ||
           ((MVAvatar__Class *)(pMVar6->klass->_1).typeHierarchy[bVar9 - 1] != TypeInfo__MVAvatar))
        {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        pMVar12 = (MVBody *)0x0;
        if (bVar10) {
          pMVar12 = pMVar6;
        }
        if (pMVar12 != (MVBody *)0x0) {
          (this->fields).hasAvatarBeenAttached = 1;
        }
        bVar9 = (TypeInfo__MVBuildModeAvatar->_1).naturalAligment;
        if (((pMVar6->klass->_1).naturalAligment < bVar9) ||
           ((MVBuildModeAvatar__Class *)(pMVar6->klass->_1).typeHierarchy[bVar9 - 1] !=
            TypeInfo__MVBuildModeAvatar)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        pMVar12 = (MVBody *)0x0;
        if (bVar10) {
          pMVar12 = pMVar6;
        }
        if (pMVar12 != (MVBody *)0x0) {
          (this->fields).hasAvatarBeenAttached = 1;
        }
      }
      piVar13 = &(this->fields)._._._.previewLayerMask;
      *piVar13 = *piVar13 | 0x1000;
      pSVar14 = StringLiteral_Player;
      this_00 = (this->fields)._._._.gameObject;
      (this->fields)._LayerToSetTo_k__BackingField = StringLiteral_Player;
      value = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                        (pSVar14,(MethodInfo *)0x0);
      if (this_00 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                  (this_00,value,(MethodInfo *)0x0);
        pDVar15 = (this->fields)._.blueprintData;
        pEVar16 = (Enum *)func_?();
        if ((pEVar16 != (Enum *)0x0) &&
           (pSVar14 = mscorlib.dll::System::Enum::Enum_ToString_2
                                (pEVar16,StringLiteral_d,(MethodInfo *)0x0),
           pDVar15 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
          bVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
                  WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
                  KogamaSettingWrapperBase]::
                  Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                            ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                              *)pDVar15,pSVar14,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                            );
          if (bVar11 != 0) {
            return;
          }
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                    ((Object *)StringLiteral_Accessory_data_not_found__This_s,(MethodInfo *)0x0);
          pDVar15 = (this->fields)._.blueprintData;
          pEVar16 = (Enum *)func_?();
          if (pEVar16 != (Enum *)0x0) {
            pSVar14 = mscorlib.dll::System::Enum::Enum_ToString_2
                                (pEVar16,StringLiteral_d,(MethodInfo *)0x0);
            this_03 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
            System.Core.dll::System::Collections::Generic::
            HashSet`1[AvatarModifierPackage+AvatarModifier]::
            HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                      (this_03,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                      );
            if (pDVar15 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
              Dictionary_2_System_String_Theme__set_Item
                        ((Dictionary_2_System_String_Theme_ *)pDVar15,pSVar14,(Theme *)this_03,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                        );
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Boolean get_AccessoryMoveOverride() */

bool Assembly-CSharp.dll::MVBody::MVBody_get_AccessoryMoveOverride(MVBody *this,MethodInfo *method)

{
  pBVar1 = (this->fields).bodyAccessoriesController;
  if (pBVar1 != (BodyAccessoriesController *)0x0) {
    return (pBVar1->fields).accessoryMoveOverride;
  }
  func_?(0);
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
  func_?(0);
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
  func_?(0);
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
  func_?(0);
  pcVar2 = (code *)swi(3);
  pBVar3 = (BodyData *)(*pcVar2)();
  return pBVar3;
}


/* Boolean get_CollidersEnabled() */

bool Assembly-CSharp.dll::MVBody::MVBody_get_CollidersEnabled(MVBody *this,MethodInfo *method)

{
  return (this->fields).collidersEnabled;
}


/* Boolean get_IsPlayerBody() */

bool Assembly-CSharp.dll::MVBody::MVBody_get_IsPlayerBody(MVBody *this,MethodInfo *method)

{
  this_00 = (PrefabPool *)
            PrefabPool::PrefabPool_get_MVRandomBoxPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (this_00 != (PrefabPool *)0x0) {
    pOVar1 = PrefabPool::PrefabPool_get_MVRandomBoxPrefab(this_00,(MethodInfo *)0x0);
    return pOVar1 != (ObjectPrefab *)0x0;
  }
  func_?();
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
  this_02 = (this->fields).bodyAccessoriesController;
  if (this_02 == (BodyAccessoriesController *)0x0) {
    iStack_1 = 0;
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iStack_1 = -1;
  puStack_3 = &DAT_?;
  pOStack_4 = (Object__Array *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pOStack_4;
  pWStack_5 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
  pWVar6 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    pWVar6 = pWStack_5;
  }
  pWStack_5 = pWVar6;
  auStack_7._16_4_ = 0;
  KStack_8.key = 0;
  KStack_8.value = 0;
  auStack_7._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_7._4_4_ = (MonitorData *)0x0;
  auStack_7._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_7._12_4_ = 0;
  func_?();
  (this_02->fields).accessoryMoveOverride = value;
  if (value == 0) {
    this_00 = (this_02->fields).bodyData;
    pLStack_9 = (Link__Array *)&stack0xffffffa8;
    pWStack_5 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
    if ((this_00 != (BodyData *)0x0) &&
       (pLStack_9 = (Link__Array *)&stack0xffffffa8,
       pWStack_5 = (WinningConditionType__Enum__Array *)&stack0xffffffa8,
       pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)this_00,(MethodInfo *)0x0), pGVar10 != (GameObject *)0x0))
    {
      pCVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
               GameObject_GetComponentsInChildren_20
                         (pGVar10,1,
                          SelectionHelperAvatarAccessory__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionHelperAvatarAccessory>_bool_____
                         );
      uVar12 = 0;
      if (pCVar11 != (CFX_LightIntensityFade__Array *)0x0) {
        ppCVar13 = pCVar11->vector;
        for (; (int)uVar12 < (int)pCVar11->max_length; uVar12 = uVar12 + 1) {
          if (pCVar11->max_length <= uVar12) {
            uVar14 = func_?(0);
            func_?(uVar14);
            goto code_?;
          }
          if (*ppCVar13 == (CFX_LightIntensityFade *)0x0) goto code_?;
          pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)*ppCVar13,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)pGVar10,(MethodInfo *)0x0);
          ppCVar13 = ppCVar13 + 1;
        }
        goto code_?;
      }
    }
  }
  else {
    this_01 = (this_02->fields).accessoryMap;
    pLStack_9 = (Link__Array *)&stack0xffffffa8;
    pWStack_5 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
    if (this_01 != (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) {
      pLStack_9 = (Link__Array *)&stack0xffffffa8;
      pWStack_5 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
      pDVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
               ::Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                         (&DStack_16,(Dictionary_2_WinningConditionType_System_Object_ *)this_01,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__GetEnumerator__
                         );
      auStack_7._0_4_ = pDVar15->dictionary;
      auStack_7._4_4_ = pDVar15->next;
      auStack_7._8_4_ = pDVar15->stamp;
      auStack_7._12_4_ = (pDVar15->current).key;
      auStack_7._16_4_ = (pDVar15->current).value;
      iStack_1 = 0;
      while (cVar17 = func_?(), cVar17 != '\0') {
        KStack_8 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                              ((LevelRewardsManager *)auStack_7,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Current__
                              );
        DStack_16.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_8;
        DStack_16.next =
             (int32_t)
             MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Value__
        ;
        accessory = (AvatarAccessory *)func_?();
        DStack_16.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_8;
        DStack_16.next =
             (int32_t)
             MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Key__
        ;
        accessorySlot = func_?();
        BodyAccessoriesController::BodyAccessoriesController_MakeAccessorySelectable
                  (this_02,accessory,accessorySlot,(MethodInfo *)0x0);
      }
      pLStack_9->klass = (Link__Array__Class *)0x5e;
      iStack_1 = -1;
      func_?();
code_?:
      *unaff_FS_OFFSET = pOStack_4;
      return;
    }
  }
code_?:
  func_?(0);
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_CollidersEnabled(Boolean) */

void Assembly-CSharp.dll::MVBody::MVBody_set_CollidersEnabled
               (MVBody *this,bool value,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_6.monitor = (MonitorData *)0x0;
  CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_6.fields.syncRoot = (Object *)0x0;
  func_?();
  (this->fields).collidersEnabled = value;
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).colliders;
  puStack_7 = (undefined4 *)&stack0xffffffb8;
  puStack_4 = &stack0xffffffb8;
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    puStack_7 = (undefined4 *)&stack0xffffffb8;
    puStack_4 = &stack0xffffffb8;
    pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_9,this_00,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Collider>__GetEnumerator__
                       );
    CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar8->l;
    CStack_6.monitor = (MonitorData *)pLVar8->next;
    CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar8->ver;
    CStack_6.fields.syncRoot = (Object *)(pLVar8->current).rgba;
    uStack_1 = 0;
    while( true ) {
      cVar10 = func_?();
      if (cVar10 == '\0') {
        *puStack_7 = 0x4b;
        uStack_1 = 0xffffffff;
        func_?(&CStack_6,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Collider>__Dispose__
                       );
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      this_01 = (Collider *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          (&CStack_6,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Collider>__get_Current__
                          );
      if (this_01 == (Collider *)0x0) break;
      UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                (this_01,(this->fields).collidersEnabled,(MethodInfo *)0x0);
    }
  }
  func_?(0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void set_ShadowVisible(Boolean) */

void Assembly-CSharp.dll::MVBody::MVBody_set_ShadowVisible
               (MVBody *this,bool value,MethodInfo *method)

{
  if ((this->fields).shadowVisible != value) {
    (this->fields).shadowVisible = value;
    MVBody_UpdateVisibility(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void set_Visible(Boolean) */

void Assembly-CSharp.dll::MVBody::MVBody_set_Visible(MVBody *this,bool value,MethodInfo *method)

{
  if ((this->fields).visible != value) {
    (this->fields).visible = value;
    MVBody_UpdateVisibility(this,(MethodInfo *)0x0);
  }
  return;
}

