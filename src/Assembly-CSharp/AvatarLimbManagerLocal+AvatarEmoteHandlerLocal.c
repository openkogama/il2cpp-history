
/* Void CreateLimbEvents(AvatarLimbManager, AvatarLimbManager+AvatarLookDirectionHandler,
   AvatarLimbManager+AvatarPointingHandler, AvatarLimbManager+AvatarHeadRotationHandler,
   AvatarLimbManager+LimbRotator) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarEmoteHandlerLocal::
     AvatarLimbManagerLocal_AvatarEmoteHandlerLocal_CreateLimbEvents
               (AvatarLimbManagerLocal_AvatarEmoteHandlerLocal *this,AvatarLimbManager *limbManager,
               AvatarLimbManager_AvatarLookDirectionHandler *lookDirectionHandler,
               AvatarLimbManager_AvatarPointingHandler *pointingHandler,
               AvatarLimbManager_AvatarHeadRotationHandler *headRotationHandler,
               AvatarLimbManager_LimbRotator *limbRotator,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool>);
    func_?(&TypeInfo__System__Action<float>);
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__AvatarLimbManagerLocal__AvatarEmoteHandlerLocal__OnNodEmoteStart__)
    ;
    func_?(&
                    MethodInfo__AvatarLimbManagerLocal__AvatarEmoteHandlerLocal__OnShakeEmoteStart__
                   );
    func_?(&MethodInfo__AvatarLimbManagerLocal__AvatarEmoteHandlerLocal__OnWaveEmoteStart__
                   );
    func_?(&
                    MethodInfo__AvatarLimbManagerLocal__AvatarEmoteRecogniser__HandleNewAngle_float_
                   );
    func_?(&MethodInfo__AvatarLimbManagerLocal__AvatarEmoteRecogniser__SetIsActive_bool_);
    func_?(&TypeInfo__AvatarLimbManagerLocal__AvatarEmoteRecogniser);
    func_?(&TypeInfo__AvatarLimbManagerLocal__AvatarPointingHandlerLocal);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__Add_EmoteTypes__AvatarLimbManagerLocal__AvatarEmoteRecogniser_
                   );
    cRam_? = '\x01';
  }
  this_00 = (AvatarLimbManagerLocal_AvatarEmoteRecogniser *)
            func_?(TypeInfo__AvatarLimbManagerLocal__AvatarEmoteRecogniser);
  if (this_00 == (AvatarLimbManagerLocal_AvatarEmoteRecogniser *)0x0) {
code_?:
    func_?();
  }
  else {
    (this_00->fields).angleSensitivity = 15.0;
    (this_00->fields).resetInterval = 2.0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this_00,ExceptionArgument__Enum_obj,unaff_EDI);
    AvatarLimbManagerLocal+AvatarEmoteRecogniser::
    AvatarLimbManagerLocal_AvatarEmoteRecogniser_Initlialize
              (this_00,limbManager,10.0,2.0,4,1,0,(MethodInfo *)0x0);
    if (lookDirectionHandler == (AvatarLimbManager_AvatarLookDirectionHandler *)0x0)
    goto code_?;
    pAVar1 = (lookDirectionHandler->fields).OnLookDirectionYawChange;
    this_01 = (UnityAction_1_System_Single_ *)func_?();
    if (this_01 == (UnityAction_1_System_Single_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
    UnityAction_1_System_Single___ctor
              (this_01,(Object *)this_00,
               MethodInfo__AvatarLimbManagerLocal__AvatarEmoteRecogniser__HandleNewAngle_float_,
               (MethodInfo *)0x0);
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar1,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pDVar2 == (Delegate *)0x0) {
      (lookDirectionHandler->fields).OnLookDirectionYawChange = (Action_1_Single_ *)0x0;
    }
    else {
      pAVar1 = (Action_1_Single_ *)func_?();
      if (pAVar1 == (Action_1_Single_ *)0x0) goto code_?;
      (lookDirectionHandler->fields).OnLookDirectionYawChange = pAVar1;
      iVar3 = func_?();
      if (iVar3 == 0) goto code_?;
    }
    func_?();
    pAVar4 = (this_00->fields).OnStartEvent;
    this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    if (this_02 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_02,(Object *)&UNK_?,
               MethodInfo__AvatarLimbManagerLocal__AvatarEmoteHandlerLocal__OnWaveEmoteStart__,
               (MethodInfo *)0x0);
    pAVar4 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar4,(Delegate *)this_02,(MethodInfo *)0x0);
    if (pAVar4 == (Action *)0x0) {
      (this_00->fields).OnStartEvent = (Action *)0x0;
code_?:
      func_?();
      goto code_?;
    }
    pAVar5 = (Action *)0x0;
    if (pAVar4->klass == TypeInfo__System__Action) {
      pAVar5 = pAVar4;
    }
    if (pAVar5 != (Action *)0x0) {
      (this_00->fields).OnStartEvent = pAVar5;
      pAVar5 = (Action *)0x0;
      if (pAVar4->klass == TypeInfo__System__Action) {
        pAVar5 = pAVar4;
      }
      if (pAVar5 != (Action *)0x0) goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnNodEmoteStart() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarEmoteHandlerLocal::
     AvatarLimbManagerLocal_AvatarEmoteHandlerLocal_OnNodEmoteStart
               (AvatarLimbManagerLocal_AvatarEmoteHandlerLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarLimbManagerLocal);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._.emoteDatas;
  if (pDVar1 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
    emoteData = (AvatarLimbManager_EmoteData *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                          ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,2,
                           MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                          );
    bVar2 = AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_CanStartEmote
                      ((AvatarLimbManager_AvatarEmoteHandler *)this,emoteData,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_StartEmote
              ((AvatarLimbManager_AvatarEmoteHandler *)this,EmoteTypes__Enum_Nod,(MethodInfo *)0x0);
    pAVar3 = (this->fields)._.limbManager;
    if (pAVar3 != (AvatarLimbManager *)0x0) {
      if (((pAVar3->klass->_1).typeHierarchyDepth <
           (TypeInfo__AvatarLimbManagerLocal->_1).typeHierarchyDepth) ||
         ((pAVar3->klass->_1).typeHierarchy
          [(TypeInfo__AvatarLimbManagerLocal->_1).typeHierarchyDepth - 1] !=
          (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) goto code_?;
      pDVar1 = (this->fields)._.emoteDatas;
      pAVar4 = pAVar3[1].fields.emoteHandler;
      if ((pDVar1 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) &&
         (((pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,2,
                                MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                               ), pOVar5 != (Object *)0x0 &&
           (pOVar6 = pOVar5[1].klass, pOVar6 != (Object__Class *)0x0)) &&
          (pAVar4 != (AvatarLimbManager_AvatarEmoteHandler *)0x0)))) {
        uStack7._0_2_ = (pOVar6->_0).this_arg.attrs;
        uStack7._2_1_ = (pOVar6->_0).this_arg.type;
        uStack7._3_1_ = (pOVar6->_0).this_arg.field_0x7;
        pAStack8 = pAVar4[1].klass;
        (*(code *)(pAVar4->fields).emoteDatas)();
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnShakeEmoteStart() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarEmoteHandlerLocal::
     AvatarLimbManagerLocal_AvatarEmoteHandlerLocal_OnShakeEmoteStart
               (AvatarLimbManagerLocal_AvatarEmoteHandlerLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarLimbManagerLocal);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._.emoteDatas;
  if (pDVar1 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
    emoteData = (AvatarLimbManager_EmoteData *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                          ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,1,
                           MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                          );
    bVar2 = AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_CanStartEmote
                      ((AvatarLimbManager_AvatarEmoteHandler *)this,emoteData,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_StartEmote
              ((AvatarLimbManager_AvatarEmoteHandler *)this,EmoteTypes__Enum_Shake,(MethodInfo *)0x0
              );
    pAVar3 = (this->fields)._.limbManager;
    if (pAVar3 != (AvatarLimbManager *)0x0) {
      if (((pAVar3->klass->_1).typeHierarchyDepth <
           (TypeInfo__AvatarLimbManagerLocal->_1).typeHierarchyDepth) ||
         ((pAVar3->klass->_1).typeHierarchy
          [(TypeInfo__AvatarLimbManagerLocal->_1).typeHierarchyDepth - 1] !=
          (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) goto code_?;
      pDVar1 = (this->fields)._.emoteDatas;
      pAVar4 = pAVar3[1].fields.emoteHandler;
      if ((pDVar1 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) &&
         (((pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,1,
                                MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                               ), pOVar5 != (Object *)0x0 &&
           (pOVar6 = pOVar5[1].klass, pOVar6 != (Object__Class *)0x0)) &&
          (pAVar4 != (AvatarLimbManager_AvatarEmoteHandler *)0x0)))) {
        uStack7._0_2_ = (pOVar6->_0).this_arg.attrs;
        uStack7._2_1_ = (pOVar6->_0).this_arg.type;
        uStack7._3_1_ = (pOVar6->_0).this_arg.field_0x7;
        pAStack8 = pAVar4[1].klass;
        (*(code *)(pAVar4->fields).emoteDatas)();
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnWaveEmoteStart() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarEmoteHandlerLocal::
     AvatarLimbManagerLocal_AvatarEmoteHandlerLocal_OnWaveEmoteStart
               (AvatarLimbManagerLocal_AvatarEmoteHandlerLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarLimbManagerLocal);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._.emoteDatas;
  if (pDVar1 == (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
code_?:
    func_?();
  }
  else {
    emoteData = (AvatarLimbManager_EmoteData *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                          ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,3,
                           MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                          );
    bVar2 = AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_CanStartEmote
                      ((AvatarLimbManager_AvatarEmoteHandler *)this,emoteData,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_StartEmote
              ((AvatarLimbManager_AvatarEmoteHandler *)this,EmoteTypes__Enum_Wave,(MethodInfo *)0x0)
    ;
    pAVar3 = (this->fields)._.limbManager;
    if (pAVar3 == (AvatarLimbManager *)0x0) goto code_?;
    if (((pAVar3->klass->_1).typeHierarchyDepth <
         (TypeInfo__AvatarLimbManagerLocal->_1).typeHierarchyDepth) ||
       ((pAVar3->klass->_1).typeHierarchy
        [(TypeInfo__AvatarLimbManagerLocal->_1).typeHierarchyDepth - 1] !=
        (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) goto code_?;
    pDVar1 = (this->fields)._.emoteDatas;
    pAVar4 = pAVar3[1].fields.emoteHandler;
    if ((pDVar1 == (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) ||
       (((pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,3,
                              MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                             ), pOVar5 == (Object *)0x0 || (pOVar5[1].klass == (Object__Class *)0x0)
         ) || (pAVar4 == (AvatarLimbManager_AvatarEmoteHandler *)0x0)))) goto code_?;
    (*(code *)(pAVar4->fields).emoteDatas)();
    pAVar3 = (this->fields)._.limbManager;
    if (pAVar3 == (AvatarLimbManager *)0x0) goto code_?;
    if (((TypeInfo__AvatarLimbManagerLocal->_1).typeHierarchyDepth <=
         (pAVar3->klass->_1).typeHierarchyDepth) &&
       ((pAVar3->klass->_1).typeHierarchy
        [(TypeInfo__AvatarLimbManagerLocal->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) {
      pDVar1 = (this->fields)._.emoteDatas;
      pAVar6 = pAVar3[1].fields.limbRotator;
      if (((pDVar1 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) &&
          ((pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,3,
                                MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                               ), pOVar5 != (Object *)0x0 &&
           (pOVar5[1].klass != (Object__Class *)0x0)))) &&
         (pAVar6 != (AvatarLimbManager_LimbRotator *)0x0)) {
        (**(code **)&(pAVar6->fields).isActive)();
        return;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void StartEmoteAndNetworkIt(EmoteTypes) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarEmoteHandlerLocal::
     AvatarLimbManagerLocal_AvatarEmoteHandlerLocal_StartEmoteAndNetworkIt
               (AvatarLimbManagerLocal_AvatarEmoteHandlerLocal *this,EmoteTypes__Enum emoteType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__EmoteTypes);
    func_?(&StringLiteral_Could_not_start_and_network_);
    func_?(&StringLiteral___Please_add_it_to_the_StartEmot);
    cRam_? = '\x01';
  }
  EVar1 = emoteType & 0xff;
  if (EVar1 == EmoteTypes__Enum_Shake) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__AvatarLimbManagerLocal);
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                     );
      cRam_? = '\x01';
    }
    pDVar2 = (this->fields)._.emoteDatas;
    if (pDVar2 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
      pAVar3 = (AvatarLimbManager_EmoteData *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar2,1,
                          MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                         );
      method_00 = (MethodInfo *)&UNK_?;
      bVar4 = AvatarLimbManager+AvatarEmoteHandler::
              AvatarLimbManager_AvatarEmoteHandler_CanStartEmote
                        ((AvatarLimbManager_AvatarEmoteHandler *)this,pAVar3,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        return;
      }
      AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_StartEmote
                ((AvatarLimbManager_AvatarEmoteHandler *)this,EmoteTypes__Enum_Shake,
                 (MethodInfo *)0x0);
      pAVar5 = (this->fields)._.limbManager;
      unaff_EDI = TypeInfo__AvatarLimbManagerLocal;
      if (pAVar5 != (AvatarLimbManager *)0x0) {
        pAVar6 = TypeInfo__AvatarLimbManagerLocal;
        if (((pAVar5->klass->_1).typeHierarchyDepth <
             (TypeInfo__AvatarLimbManagerLocal->_1).typeHierarchyDepth) ||
           ((pAVar5->klass->_1).typeHierarchy
            [(TypeInfo__AvatarLimbManagerLocal->_1).typeHierarchyDepth - 1] !=
            (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) goto code_?;
        pDVar2 = (this->fields)._.emoteDatas;
        unaff_EDI = (AvatarLimbManagerLocal__Class *)pAVar5[1].fields.emoteHandler;
        if (pDVar2 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0)
        goto code_?;
      }
    }
  }
  else {
    if (EVar1 != EmoteTypes__Enum_Nod) {
      if (EVar1 != EmoteTypes__Enum_Wave) {
        pSVar7 = mscorlib.dll::System::Enum::Enum_ToString
                           ((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
        pSVar7 = mscorlib.dll::System::String::String_Concat_4
                           (StringLiteral_Could_not_start_and_network_,pSVar7,
                            StringLiteral___Please_add_it_to_the_StartEmot,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)pSVar7,(MethodInfo *)0x0);
        return;
      }
      AvatarLimbManagerLocal_AvatarEmoteHandlerLocal_OnWaveEmoteStart(this,(MethodInfo *)0x0);
      return;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__AvatarLimbManagerLocal);
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                     );
      cRam_? = '\x01';
    }
    pDVar2 = (this->fields)._.emoteDatas;
    if (pDVar2 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
      pAVar3 = (AvatarLimbManager_EmoteData *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar2,2,
                          MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                         );
      method_00 = (MethodInfo *)&UNK_?;
      bVar4 = AvatarLimbManager+AvatarEmoteHandler::
              AvatarLimbManager_AvatarEmoteHandler_CanStartEmote
                        ((AvatarLimbManager_AvatarEmoteHandler *)this,pAVar3,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        return;
      }
      AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_StartEmote
                ((AvatarLimbManager_AvatarEmoteHandler *)this,EmoteTypes__Enum_Nod,(MethodInfo *)0x0
                );
      pAVar5 = (this->fields)._.limbManager;
      unaff_EDI = TypeInfo__AvatarLimbManagerLocal;
      if (pAVar5 != (AvatarLimbManager *)0x0) {
        pAVar6 = TypeInfo__AvatarLimbManagerLocal;
        if (((pAVar5->klass->_1).typeHierarchyDepth <
             (TypeInfo__AvatarLimbManagerLocal->_1).typeHierarchyDepth) ||
           ((pAVar5->klass->_1).typeHierarchy
            [(TypeInfo__AvatarLimbManagerLocal->_1).typeHierarchyDepth - 1] !=
            (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) goto code_?;
        pDVar2 = (this->fields)._.emoteDatas;
        unaff_EDI = (AvatarLimbManagerLocal__Class *)pAVar5[1].fields.emoteHandler;
        if (pDVar2 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
          in_stack_8 = 2;
code_?:
          pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                    ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                              ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar2,
                               in_stack_8,method_00);
          if (((pOVar9 != (Object *)0x0) &&
              (pOVar10 = pOVar9[1].klass, pOVar10 != (Object__Class *)0x0)) &&
             (unaff_EDI != (AvatarLimbManagerLocal__Class *)0x0)) {
            uVar11._0_2_ = (unaff_EDI->_0).byval_arg.attrs;
            uVar11._2_1_ = (unaff_EDI->_0).byval_arg.type;
            uVar11._3_1_ = (unaff_EDI->_0).byval_arg.field_0x7;
            uVar12._0_2_ = (pOVar10->_0).this_arg.attrs;
            uVar12._2_1_ = (pOVar10->_0).this_arg.type;
            uVar12._3_1_ = (pOVar10->_0).this_arg.field_0x7;
            (*(code *)(unaff_EDI->_0).namespaze)((unaff_EDI->_0).element_class,uVar12,uVar11);
            return;
          }
        }
      }
    }
  }
  func_?();
  pAVar5 = extraout_EDX;
  pAVar6 = unaff_EDI;
code_?:
  func_?(pAVar5,pAVar6);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void UpdateEmotes() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarEmoteHandlerLocal::
     AvatarLimbManagerLocal_AvatarEmoteHandlerLocal_UpdateEmotes
               (AvatarLimbManagerLocal_AvatarEmoteHandlerLocal *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff9c;
  puVar5 = &stack0xffffff9c;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__get_Value__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._0_4_ = (Object__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = 0;
  pOStack_7 = (Object *)0x0;
  uStack_8._0_4_ = (Object *)0x0;
  uStack_8._4_4_ = 0;
  this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).emoteRecognisers;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__GetEnumerator
                       (&DStack_10,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__GetEnumerator__
                       );
    uStack_11 = 0;
    auStack_6._0_4_ = pDVar9->_dictionary;
    auStack_6._4_4_ = pDVar9->_version;
    auStack_6._8_4_ = pDVar9->_index;
    pOStack_7 = (pDVar9->_current).key;
    uStack_8 = *(undefined8 *)&(pDVar9->_current).value;
    uStack_1 = 1;
    pOStack_12 = (Object *)auStack_6;
    while( true ) {
      bVar13 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::ByteEnum,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object_ *)
                         auStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__MoveNext__
                        );
      if (bVar13 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)auStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__Dispose__
                   ,unaff_EDI);
        uStack_1 = 0xffffffff;
        AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_UpdateEmotes
                  ((AvatarLimbManager_AvatarEmoteHandler *)this,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pOVar14 = (Object *)uStack_8;
      if ((Object *)uStack_8 == (Object *)0x0) break;
      if (*(short *)&((Object *)uStack_8)[3].klass == 0) {
        *(undefined2 *)&((Object *)uStack_8)[3].klass = 0;
        ((Object *)uStack_8)[4].klass = (Object__Class *)((Object *)uStack_8)[3].monitor;
      }
      pOStack_15 = ((Object *)uStack_8)[4].klass;
      fStack_16 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                            ((MethodInfo *)0x0);
      pOVar14[4].klass = (Object__Class *)((float)pOStack_15 - fStack_16);
      if ((float)pOStack_15 - fStack_16 <= 0.0) {
        *(undefined2 *)&pOVar14[3].klass = 0;
        pOVar14[4].klass = (Object__Class *)pOVar14[3].monitor;
      }
    }
  }
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* AvatarLimbManagerLocal+AvatarEmoteHandlerLocal() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarEmoteHandlerLocal::
     AvatarLimbManagerLocal_AvatarEmoteHandlerLocal__ctor
               (AvatarLimbManagerLocal_AvatarEmoteHandlerLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_EmoteTypes_AvatarLimbManagerLocal_AvatarEmoteRecogniser_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>
                           );
  if (this_00 != (Dictionary_2_EmoteTypes_AvatarLimbManagerLocal_AvatarEmoteRecogniser_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__Dictionary__
              );
    (this->fields).emoteRecognisers = this_00;
    func_?(&(this->fields).emoteRecognisers,this_00);
    AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler__ctor
              ((AvatarLimbManager_AvatarEmoteHandler *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

