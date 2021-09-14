
/* Void CreateLimbController(BodyData+PartIndex, MVWorldObjectClient, MVBody, AvatarLimbManager) */

void Assembly-CSharp.dll::AvatarLimbManager+LimbRotator::
     AvatarLimbManager_LimbRotator_CreateLimbController
               (AvatarLimbManager_LimbRotator *this,BodyData_PartIndex__Enum partIndex,
               MVWorldObjectClient *avatarWO,MVBody *body,AvatarLimbManager *limbManager,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMStack_1 = (MVBody__Class *)0x0;
  switch(partIndex) {
  case BodyData_PartIndex__Enum_Head:
    this_02 = (LimbController *)func_?(TypeInfo__LimbController);
    LimbController::LimbController__ctor(this_02,(MethodInfo *)0x0);
    this_01 = (List_1_UnityEngine_Vector4_ *)
              func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (this_01,MethodInfo__System__Collections__Generic__List<System::String>__List__);
    this_00 = (LimbController *)
              func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              ((List_1_UnityEngine_Vector4_ *)this_00,
               MethodInfo__System__Collections__Generic__List<System::String>__List__);
    if (this_00 != (LimbController *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)StringLiteral_Dead,
                 MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                );
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        func_?();
      }
      pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                          (&QStack_3,(MethodInfo *)0x0);
      QStack_3.x = pQVar2->x;
      QStack_3.y = pQVar2->y;
      QStack_3.z = pQVar2->z;
      QStack_3.w = pQVar2->w;
      pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                          ((Quaternion *)&stack0xffffffec,(MethodInfo *)0x0);
      if (this_02 != (LimbController *)0x0) {
        modelRotationOffset.y = QStack_3.y;
        modelRotationOffset.x = QStack_3.x;
        modelRotationOffset.z = QStack_3.z;
        modelRotationOffset.w = QStack_3.w;
        LimbController::LimbController_Initialize
                  (this_02,limbManager,avatarWO,body,BodyData_PartIndex__Enum_Head,
                   modelRotationOffset,*pQVar2,(List_1_System_String_ *)this_01,
                   (List_1_System_String_ *)this_00,89.0,45.0,(MethodInfo *)0x0);
        pDVar4 = (this->fields).limbControllers;
        if (pDVar4 != (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) {
          QStack_3.w = (float)&UNK_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[BodyData+PartIndex,System::
          Object]::Dictionary_2_BodyData_PartIndex_System_Object__Add
                    ((Dictionary_2_BodyData_PartIndex_System_Object_ *)pDVar4,
                     BodyData_PartIndex__Enum_Head,(Object *)this_02,
                     MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__Add_BodyData__PartIndex__LimbController_
                    );
          return;
        }
      }
    }
    break;
  case BodyData_PartIndex__Enum_Torso:
    this_02 = (LimbController *)func_?(TypeInfo__LimbController);
    LimbController::LimbController__ctor(this_02,(MethodInfo *)0x0);
    this_01 = (List_1_UnityEngine_Vector4_ *)
              func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (this_01,MethodInfo__System__Collections__Generic__List<System::String>__List__);
    this_00 = (LimbController *)
              func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              ((List_1_UnityEngine_Vector4_ *)this_00,
               MethodInfo__System__Collections__Generic__List<System::String>__List__);
    if (this_00 != (LimbController *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)StringLiteral_Dead,
                 MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                );
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        func_?();
      }
      pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                          (&QStack_3,(MethodInfo *)0x0);
      QStack_3.x = pQVar2->x;
      QStack_3.y = pQVar2->y;
      QStack_3.z = pQVar2->z;
      QStack_3.w = pQVar2->w;
      pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                          ((Quaternion *)&stack0xffffffec,(MethodInfo *)0x0);
      if (this_02 != (LimbController *)0x0) {
        modelRotationOffset_00.y = QStack_3.y;
        modelRotationOffset_00.x = QStack_3.x;
        modelRotationOffset_00.z = QStack_3.z;
        modelRotationOffset_00.w = QStack_3.w;
        LimbController::LimbController_Initialize
                  (this_02,limbManager,avatarWO,body,BodyData_PartIndex__Enum_Torso,
                   modelRotationOffset_00,*pQVar2,(List_1_System_String_ *)this_01,
                   (List_1_System_String_ *)this_00,90.0,20.0,(MethodInfo *)0x0);
        pDVar4 = (this->fields).limbControllers;
        if (pDVar4 != (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) {
          QStack_3.w = (float)&UNK_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[BodyData+PartIndex,System::
          Object]::Dictionary_2_BodyData_PartIndex_System_Object__Add
                    ((Dictionary_2_BodyData_PartIndex_System_Object_ *)pDVar4,
                     BodyData_PartIndex__Enum_Torso,(Object *)this_02,
                     MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__Add_BodyData__PartIndex__LimbController_
                    );
          return;
        }
      }
    }
    break;
  case BodyData_PartIndex__Enum_RArm:
    this_00 = (LimbController *)func_?(TypeInfo__LimbController);
    LimbController::LimbController__ctor(this_00,(MethodInfo *)0x0);
    this_01 = (List_1_UnityEngine_Vector4_ *)
              func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (this_01,MethodInfo__System__Collections__Generic__List<System::String>__List__);
    this_02 = (LimbController *)
              func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              ((List_1_UnityEngine_Vector4_ *)this_02,
               MethodInfo__System__Collections__Generic__List<System::String>__List__);
    if (this_02 != (LimbController *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)this_02,(UIPushOption__Enum)StringLiteral_Dead,
                 MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                );
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)this_02,(UIPushOption__Enum)StringLiteral_Jump,
                 MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                );
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        func_?();
      }
      pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                          ((Quaternion *)&stack0xffffff8c,(MethodInfo *)0x0);
      QVar5 = *pQVar2;
      func_?();
      func_?();
      pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                          ((Quaternion *)&stack0xffffff8c,(MethodInfo *)0x0);
      pMStack_1 = (MVBody__Class *)pQVar2->x;
      pMVar6 = (MonitorData *)pQVar2->y;
      fVar7 = pQVar2->z;
      fVar8 = pQVar2->w;
      QStack_3.w = 0.0;
      QStack_3.y = 0.0;
      QStack_3.z = 0.0;
      func_?();
      uVar9 = QStack_3._4_8_;
      func_?();
      if (this_00 != (LimbController *)0x0) {
        limbManager = (AvatarLimbManager *)uVar9;
        originalRotation.y = (float)pMVar6;
        originalRotation.x = (float)pMStack_1;
        originalRotation.z = fVar7;
        originalRotation.w = fVar8;
        LimbController::LimbController_Initialize
                  (this_00,limbManager,(MVWorldObjectClient *)&UNK_?,(MVBody *)&pMStack_1,
                   BodyData_PartIndex__Enum_RArm,QVar5,originalRotation,
                   (List_1_System_String_ *)this_01,(List_1_System_String_ *)this_02,90.0,45.0,
                   (MethodInfo *)0x0);
        if (pDRam00000008 != (Dictionary_2_BodyData_PartIndex_System_Object_ *)0x0) {
          QStack_3.w = (float)&UNK_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[BodyData+PartIndex,System::
          Object]::Dictionary_2_BodyData_PartIndex_System_Object__Add
                    (pDRam00000008,BodyData_PartIndex__Enum_RArm,(Object *)this_00,
                     MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__Add_BodyData__PartIndex__LimbController_
                    );
          return;
        }
      }
    }
    break;
  case BodyData_PartIndex__Enum_LArm:
    this_00 = (LimbController *)func_?(TypeInfo__LimbController);
    LimbController::LimbController__ctor(this_00,(MethodInfo *)0x0);
    this_01 = (List_1_UnityEngine_Vector4_ *)
              func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (this_01,MethodInfo__System__Collections__Generic__List<System::String>__List__);
    this_02 = (LimbController *)
              func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              ((List_1_UnityEngine_Vector4_ *)this_02,
               MethodInfo__System__Collections__Generic__List<System::String>__List__);
    if (this_02 != (LimbController *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)this_02,(UIPushOption__Enum)StringLiteral_Dead,
                 MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                );
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)this_02,(UIPushOption__Enum)StringLiteral_Jump,
                 MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                );
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                ((Quaternion *)&stack0xffffff8c,(MethodInfo *)0x0);
      QStack_3.w = 0.0;
      QStack_3.y = 0.0;
      QStack_3.z = 0.0;
      func_?();
      func_?();
      pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                          ((Quaternion *)&stack0xffffff8c,(MethodInfo *)0x0);
      pMVar10 = (MVBody__Class *)pQVar2->x;
      pMVar6 = (MonitorData *)pQVar2->y;
      fVar7 = pQVar2->z;
      fVar8 = pQVar2->w;
      limbManager_00 = (AvatarLimbManager *)0x0;
      func_?();
      func_?();
      if ((this_00 != (LimbController *)0x0) &&
         (QVar5.y = (float)this_01, QVar5.x = fVar8, QVar5.z = (float)this_02, QVar5.w = 90.0,
         originalRotation_00.y = (float)pMVar6, originalRotation_00.x = (float)pMVar10,
         originalRotation_00.z = fVar7, originalRotation_00.w = fVar8,
         LimbController::LimbController_Initialize
                   (this_00,limbManager_00,(MVWorldObjectClient *)&UNK_?,
                    (MVBody *)&stack0xffffffac,BodyData_PartIndex__Enum_LArm,QVar5,
                    originalRotation_00,(List_1_System_String_ *)this_01,
                    (List_1_System_String_ *)this_02,90.0,45.0,(MethodInfo *)0x0),
         pDRam00000008 != (Dictionary_2_BodyData_PartIndex_System_Object_ *)0x0)) {
        QStack_3.w = (float)&UNK_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[BodyData+PartIndex,System::Object]
        ::Dictionary_2_BodyData_PartIndex_System_Object__Add
                  (pDRam00000008,BodyData_PartIndex__Enum_LArm,(Object *)this_00,
                   MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__Add_BodyData__PartIndex__LimbController_
                  );
        return;
      }
    }
    break;
  default:
    return;
  }
  bVar11 = 0;
  func_?();
  pLVar12 = this_02->klass;
  pLVar13 = (List_1_UnityEngine_Vector4___Class *)in(extraout_DX);
  this_00->klass = (LimbController__Class *)pLVar13;
  bVar14 = (byte)pLVar12;
  bVar15 = (byte)this_01 + bVar14;
  bVar16 = CARRY1((byte)this_01,bVar14) || CARRY1(bVar15,bVar11);
  bVar15 = bVar15 + bVar11;
  out(*(undefined1 *)&this_02->monitor,extraout_DX);
  bVar14 = (byte)extraout_ECX + bVar15;
  out(*(undefined4 *)((int)&this_02->monitor + 1),extraout_DX);
  pcVar17 = (char *)(CONCAT31((int3)((uint)extraout_ECX >> 8),bVar14 + bVar16) + -0x33efd18f);
  *pcVar17 = *pcVar17 + (char)((uint)this_01 >> 8) +
            (CARRY1((byte)extraout_ECX,bVar15) || CARRY1(bVar14,bVar16));
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* LimbController GetLimbController(BodyData+PartIndex) */

LimbController *
Assembly-CSharp.dll::AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_GetLimbController
          (AvatarLimbManager_LimbRotator *this,BodyData_PartIndex__Enum partIndex,MethodInfo *method
          )

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = AvatarLimbManager_LimbRotator_HasLimbController(this,partIndex,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return (LimbController *)0x0;
  }
  this_00 = (this->fields).limbControllers;
  if (this_00 != (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) {
    pLVar2 = (LimbController *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[BodyData+PartIndex,System::
             Object]::Dictionary_2_BodyData_PartIndex_System_Object__get_Item
                       ((Dictionary_2_BodyData_PartIndex_System_Object_ *)this_00,partIndex,
                        MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                       );
    return pLVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pLVar2 = (LimbController *)(*pcVar3)();
  return pLVar2;
}


/* Boolean HasLimbController(BodyData+PartIndex) */

bool Assembly-CSharp.dll::AvatarLimbManager+LimbRotator::
     AvatarLimbManager_LimbRotator_HasLimbController
               (AvatarLimbManager_LimbRotator *this,BodyData_PartIndex__Enum partIndex,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).limbControllers;
  if (this_00 != (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[BodyData+PartIndex,System::
            Object]::Dictionary_2_BodyData_PartIndex_System_Object__ContainsKey
                      ((Dictionary_2_BodyData_PartIndex_System_Object_ *)this_00,partIndex,
                       MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__ContainsKey_BodyData__PartIndex_
                      );
    if (bVar1 == 0) {
      arg1 = (Object *)func_?(TypeInfo__BodyData__PartIndex);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      message = mscorlib.dll::System::String::String_Concat_1
                          ((Object *)StringLiteral_LimbRotator_does_not_have_a_limb,arg1,
                           (Object *)StringLiteral___Returning_null_instead,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)message,(MethodInfo *)0x0);
      return 0;
    }
    return 1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Void Initialize(MVWorldObjectClient, MVBody, AvatarLimbManager) */

void Assembly-CSharp.dll::AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_Initialize
               (AvatarLimbManager_LimbRotator *this,MVWorldObjectClient *avatarWO,MVBody *body,
               AvatarLimbManager *limbManager,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_BodyData_PartIndex_LimbController_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__Dictionary__
            );
  (this->fields).limbControllers = this_00;
  if (body != (MVBody *)0x0) {
    pBVar1 = MVBody::MVBody_get_Animation(body,(MethodInfo *)0x0);
    if (pBVar1 != (BoneAnimation *)0x0) {
      pAVar2 = (pBVar1->fields).OnAnimationChange;
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__Action<System::String>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)this,
                 MethodInfo__AvatarLimbManager__LimbRotator__OnAnimationChange_System__String_,
                 MethodInfo__System__Action<System::String>__Action_System__Object__void__);
      pAVar3 = (Action_1_String_ *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar2,(Delegate *)this_01,(MethodInfo *)0x0);
      pAVar2 = (Action_1_String_ *)0x0;
      if (pAVar3 == (Action_1_String_ *)0x0) {
code_?:
        (pBVar1->fields).OnAnimationChange = pAVar2;
        AvatarLimbManager_LimbRotator_CreateLimbController
                  (this,BodyData_PartIndex__Enum_Torso,avatarWO,body,limbManager,(MethodInfo *)0x0);
        AvatarLimbManager_LimbRotator_CreateLimbController
                  (this,BodyData_PartIndex__Enum_Head,avatarWO,body,limbManager,(MethodInfo *)0x0);
        AvatarLimbManager_LimbRotator_CreateLimbController
                  (this,BodyData_PartIndex__Enum_RArm,avatarWO,body,limbManager,(MethodInfo *)0x0);
        AvatarLimbManager_LimbRotator_CreateLimbController
                  (this,BodyData_PartIndex__Enum_LArm,avatarWO,body,limbManager,(MethodInfo *)0x0);
        return;
      }
      if (pAVar3->klass == TypeInfo__System__Action<System::String>) {
        pAVar2 = pAVar3;
      }
      if (pAVar2 != (Action_1_String_ *)0x0) goto code_?;
      goto code_?;
    }
  }
  func_?(0);
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnAnimationChange(String) */

void Assembly-CSharp.dll::AvatarLimbManager+LimbRotator::
     AvatarLimbManager_LimbRotator_OnAnimationChange
               (AvatarLimbManager_LimbRotator *this,String *newAnimation,MethodInfo *method)

{
  iStack_1 = -1;
  puStack_2 = &DAT_?;
  pOStack_3 = (Object__Array *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pOStack_3;
  pWStack_4 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
  pWVar5 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    pWVar5 = pWStack_4;
  }
  pWStack_4 = pWVar5;
  auStack_6._16_4_ = (Object *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  this_00 = (this->fields).limbControllers;
  pLStack_8 = (Link__Array *)&stack0xffffffa8;
  pWStack_4 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
  if (this_00 != (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) {
    pLStack_8 = (Link__Array *)&stack0xffffffa8;
    pWStack_4 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
    pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       (&DStack_10,(Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__GetEnumerator__
                       );
    auStack_6._0_4_ = pDVar9->dictionary;
    auStack_6._4_4_ = pDVar9->next;
    auStack_6._8_4_ = pDVar9->stamp;
    auStack_6._12_4_ = (pDVar9->current).key;
    auStack_6._16_4_ = (pDVar9->current).value;
    iStack_1 = 0;
    while( true ) {
      cVar11 = func_?();
      if (cVar11 == '\0') {
        pLStack_8->klass = (Link__Array__Class *)0x45;
        iStack_1 = -1;
        func_?();
        *unaff_FS_OFFSET = pOStack_3;
        return;
      }
      KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<BodyData::PartIndex,_LimbController>__get_Current__
                            );
      DStack_10.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_7;
      DStack_10.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__KeyValuePair<BodyData::PartIndex,_LimbController>__get_Value__
      ;
      this_01 = (DayNightCycle *)func_?();
      if (this_01 == (DayNightCycle *)0x0) break;
      DayNightCycle::DayNightCycle_set_CurrentSkyParam
                (this_01,(SkyParam *)newAnimation,(MethodInfo *)0x0);
    }
  }
  func_?(0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void SetLimbRotation(BodyData+PartIndex, Quaternion, Quaternion, Single) */

void Assembly-CSharp.dll::AvatarLimbManager+LimbRotator::
     AvatarLimbManager_LimbRotator_SetLimbRotation
               (AvatarLimbManager_LimbRotator *this,BodyData_PartIndex__Enum partIndex,
               Quaternion limbYawRotation,Quaternion limbPitchRotation,float duration,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = AvatarLimbManager_LimbRotator_HasLimbController(this,partIndex,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  this_00 = (this->fields).limbControllers;
  if ((this_00 != (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) &&
     (this_01 = (LimbController *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[BodyData+PartIndex,System::
                Object]::Dictionary_2_BodyData_PartIndex_System_Object__get_Item
                          ((Dictionary_2_BodyData_PartIndex_System_Object_ *)this_00,partIndex,
                           MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                          ), this_01 != (LimbController *)0x0)) {
    auVar2._12_4_ = 0;
    auVar2._0_12_ = limbYawRotation._4_12_;
    LimbController::LimbController_TrySetNewRotation_1
              (this_01,(Quaternion)(auVar2 << 0x20),limbPitchRotation,duration,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void StartBlendingWithAnimation(BodyData+PartIndex, String) */

void Assembly-CSharp.dll::AvatarLimbManager+LimbRotator::
     AvatarLimbManager_LimbRotator_StartBlendingWithAnimation
               (AvatarLimbManager_LimbRotator *this,BodyData_PartIndex__Enum partIndex,
               String *animation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = AvatarLimbManager_LimbRotator_HasLimbController(this,partIndex,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  this_00 = (this->fields).limbControllers;
  if ((this_00 != (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) &&
     (this_01 = (LimbController *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[BodyData+PartIndex,System::
                Object]::Dictionary_2_BodyData_PartIndex_System_Object__get_Item
                          ((Dictionary_2_BodyData_PartIndex_System_Object_ *)this_00,partIndex,
                           MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                          ), this_01 != (LimbController *)0x0)) {
    LimbController::LimbController_StartBlendingWithAnimation
              (this_01,(String *)0x0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void StopBlendingWithAnimation(BodyData+PartIndex, String) */

void Assembly-CSharp.dll::AvatarLimbManager+LimbRotator::
     AvatarLimbManager_LimbRotator_StopBlendingWithAnimation
               (AvatarLimbManager_LimbRotator *this,BodyData_PartIndex__Enum partIndex,
               String *animation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = AvatarLimbManager_LimbRotator_HasLimbController(this,partIndex,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  this_00 = (this->fields).limbControllers;
  if ((this_00 != (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) &&
     (this_01 = (LimbController *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[BodyData+PartIndex,System::
                Object]::Dictionary_2_BodyData_PartIndex_System_Object__get_Item
                          ((Dictionary_2_BodyData_PartIndex_System_Object_ *)this_00,partIndex,
                           MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                          ), this_01 != (LimbController *)0x0)) {
    LimbController::LimbController_StopBlendingWithAnimation
              (this_01,(String *)0x0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void StopLimbRotation(BodyData+PartIndex) */

void Assembly-CSharp.dll::AvatarLimbManager+LimbRotator::
     AvatarLimbManager_LimbRotator_StopLimbRotation
               (AvatarLimbManager_LimbRotator *this,BodyData_PartIndex__Enum partIndex,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).limbControllers;
  if (this_00 != (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) {
    this_01 = (LimbController *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[BodyData+PartIndex,System::
              Object]::Dictionary_2_BodyData_PartIndex_System_Object__get_Item
                        ((Dictionary_2_BodyData_PartIndex_System_Object_ *)this_00,partIndex,
                         MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                        );
    if (this_01 != (LimbController *)0x0) {
      LimbController::LimbController_StopRotating(this_01,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void TrySetLimbRotation(BodyData+PartIndex, Quaternion, Quaternion) */

void Assembly-CSharp.dll::AvatarLimbManager+LimbRotator::
     AvatarLimbManager_LimbRotator_TrySetLimbRotation
               (AvatarLimbManager_LimbRotator *this,BodyData_PartIndex__Enum partIndex,
               Quaternion limbYawRotation,Quaternion limbPitchRotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = AvatarLimbManager_LimbRotator_HasLimbController(this,partIndex,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  this_00 = (this->fields).limbControllers;
  if ((this_00 != (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) &&
     (this_01 = (LimbController *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[BodyData+PartIndex,System::
                Object]::Dictionary_2_BodyData_PartIndex_System_Object__get_Item
                          ((Dictionary_2_BodyData_PartIndex_System_Object_ *)this_00,partIndex,
                           MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                          ), this_01 != (LimbController *)0x0)) {
    auVar2._12_4_ = 0;
    auVar2._0_12_ = limbYawRotation._4_12_;
    LimbController::LimbController_TrySetNewRotation
              (this_01,(Quaternion)(auVar2 << 0x20),limbPitchRotation,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateLimbs() */

void Assembly-CSharp.dll::AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_UpdateLimbs
               (AvatarLimbManager_LimbRotator *this,MethodInfo *method)

{
  iStack_1 = -1;
  puStack_2 = &DAT_?;
  pOStack_3 = (Object__Array *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pOStack_3;
  pWStack_4 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
  pWVar5 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    pWVar5 = pWStack_4;
  }
  pWStack_4 = pWVar5;
  auStack_6._16_4_ = (Object *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  if ((this->fields).isActive != 0) {
    pLStack_8 = (Link__Array *)&stack0xffffffa8;
    pWStack_4 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       (pLStack_8 = (Link__Array *)&stack0xffffffa8,
       pWStack_4 = (WinningConditionType__Enum__Array *)&stack0xffffffa8,
       (TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      pLStack_8 = (Link__Array *)&stack0xffffffa8;
      pWStack_4 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (this_01 == (MainCameraManager *)0x0) {
code_?:
      func_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    bVar10 = MVPlayer::MVPlayer_get_IsReady((MVPlayer *)this_01,(MethodInfo *)0x0);
    if (bVar10 == 0) {
      this_00 = (this->fields).limbControllers;
      if (this_00 == (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) goto code_?;
      pDVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
               ::Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                         (&DStack_12,(Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__GetEnumerator__
                         );
      auStack_6._0_4_ = pDVar11->dictionary;
      auStack_6._4_4_ = pDVar11->next;
      auStack_6._8_4_ = pDVar11->stamp;
      auStack_6._12_4_ = (pDVar11->current).key;
      auStack_6._16_4_ = (pDVar11->current).value;
      iStack_1 = 0;
      while (cVar13 = func_?(), cVar13 != '\0') {
        KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                              ((LevelRewardsManager *)auStack_6,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<BodyData::PartIndex,_LimbController>__get_Current__
                              );
        DStack_12.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_7;
        DStack_12.next =
             (int32_t)
             MethodInfo__System__Collections__Generic__KeyValuePair<BodyData::PartIndex,_LimbController>__get_Value__
        ;
        this_02 = (LimbController *)func_?();
        if (this_02 == (LimbController *)0x0) goto code_?;
        LimbController::LimbController_UpdateRotation(this_02,(MethodInfo *)0x0);
      }
      pLStack_8->klass = (Link__Array__Class *)0x5e;
      iStack_1 = -1;
      func_?();
    }
  }
  *unaff_FS_OFFSET = pOStack_3;
  return;
}


/* AvatarLimbManager+LimbRotator() */

void Assembly-CSharp.dll::AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator__ctor
               (AvatarLimbManager_LimbRotator *this,MethodInfo *method)

{
  (this->fields).isActive = 1;
  return;
}

