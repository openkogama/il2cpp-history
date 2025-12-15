
/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::MVTextMsg::MVTextMsg_GetLocalBounds
                   (Bounds *__return_storage_ptr__,MVTextMsg *this,BoundsContext__Enum boundsContext
                   ,MethodInfo *method)

{
  fVar1 = (this->fields).localBounds.m_Center.y;
  uVar2 = *(undefined8 *)&(this->fields).localBounds.m_Center.z;
  fVar3 = (this->fields).localBounds.m_Extents.y;
  fVar4 = (this->fields).localBounds.m_Extents.z;
  (__return_storage_ptr__->m_Center).x = (this->fields).localBounds.m_Center.x;
  (__return_storage_ptr__->m_Center).y = fVar1;
  *(undefined8 *)&(__return_storage_ptr__->m_Center).z = uVar2;
  (__return_storage_ptr__->m_Extents).y = fVar3;
  (__return_storage_ptr__->m_Extents).z = fVar4;
  return __return_storage_ptr__;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVTextMsg::MVTextMsg_Initialize(MVTextMsg *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IInputSignalReceiver);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVTextMsg__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  pDVar1 = (this->fields)._._._.data;
  if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData->_1).
               field_0x1c == 0) {
    FUN_?();
  }
  pDVar1 = Assets::Scripts::WorldObjectTypes::MVTextMsg::MvTextMsgData::
           MvTextMsgData_MigrateDataBasedOnVersion(pDVar1,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._._._.data = pDVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._._._.data >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pMVar7 = (this->fields).msgObject;
  if (pMVar7 != (MVTextMsgObject *)0x0) {
    MVLogicObject::MVLogicObject_SetupCulling
              ((MVLogicObject *)this,(pMVar7->fields).visualObject,
               TypeRef__System__Activator__T._0_4_,(MethodInfo *)0x0);
    MVTextMsg_UpdateTextMessageSettings(this,(MethodInfo *)0x0);
    pMVar7 = (this->fields).msgObject;
    if ((pMVar7 != (MVTextMsgObject *)0x0) &&
       (pTVar8 = (pMVar7->fields).textMesh, pTVar8 != (TextMeshProUGUI *)0x0)) {
      (*(pTVar8->klass->vtable).ForceMeshUpdate.methodPtr)(pTVar8,0,0);
      this_00 = (Action_2_Int32Enum_Object_ *)
                FUN_?(TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
      mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__MVTextMsg__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
                 ,(MethodInfo *)0x0);
      pIVar9 = LogicClientsideFactory::LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                         ((MVWorldObject *)this,1,
                          (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                          (Action_2_LogicInputState_LogicObjectManager_ *)this_00,(MethodInfo *)0x0)
      ;
      bVar2 = iRam_? != 0;
      (this->fields)._InputSignalReceiver_k__BackingField = pIVar9;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(this->fields)._InputSignalReceiver_k__BackingField >> 0xc);
        uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
        do {
          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      if ((this->fields)._InputSignalReceiver_k__BackingField != (IInputSignalReceiver *)0x0) {
        uVar10 = FUN_?(1,TypeInfo__IInputSignalReceiver);
        pMVar7 = (this->fields).msgObject;
        if ((pMVar7 != (MVTextMsgObject *)0x0) &&
           (obj = (pMVar7->fields).visualObject, obj != (GameObject *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                          ,uVar10,0);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (obj == (GameObject *)0x0) {
            FUN_?();
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pvVar12 = (obj->fields)._.m_CachedPtr;
          if (pvVar12 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pcVar11 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
            uVar13 = func_?(&UNK_?);
            FUN_?(uVar13,0);
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pcRam_? = pcVar11;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)(pvVar12,uVar10);
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


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVTextMsg::MVTextMsg_InitializeInventory
               (MVTextMsg *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_InitializeInventory((MVLogicObject *)this,(MethodInfo *)0x0);
  pMVar1 = (this->fields).msgObject;
  if (pMVar1 != (MVTextMsgObject *)0x0) {
    obj = (pMVar1->fields).textMesh;
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
    pMVar1 = (this->fields).msgObject;
    if (pMVar1 != (MVTextMsgObject *)0x0) {
      pRVar2 = (pMVar1->fields).background;
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
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
                      ,0,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((
          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?();
      }
      BVar3._._.m_CachedPtr = (Component__Fields)(Object_1__Fields)0x0;
      if (pRVar2 != (RoundedRectangle *)0x0) {
        BVar3._._.m_CachedPtr = (pRVar2->fields)._._._._._._._;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(BVar3._._.m_CachedPtr,0);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void InputStateUpdateCallback(LogicInputState, LogicObjectManager) */

void Assembly-CSharp.dll::MVTextMsg::MVTextMsg_InputStateUpdateCallback
               (MVTextMsg *this,LogicInputState__Enum logicInputState,
               LogicObjectManager *logicObjectManager,MethodInfo *method)

{
  if (logicInputState == LogicInputState__Enum_FromColdToHot) {
    pMVar1 = (this->fields).msgObject;
    if ((pMVar1 == (MVTextMsgObject *)0x0) ||
       (obj = (pMVar1->fields).visualObject, obj == (GameObject *)0x0)) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar3 = CONCAT71((int7)(CONCAT44(in_register_00000014,logicInputState) >> 8),1);
  }
  else {
    if (logicInputState != LogicInputState__Enum_FromHotToCold) {
      return;
    }
    pMVar1 = (this->fields).msgObject;
    if ((pMVar1 == (MVTextMsgObject *)0x0) ||
       (obj = (pMVar1->fields).visualObject, obj == (GameObject *)0x0)) goto code_?;
    uVar3 = 0;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                  ,uVar3,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar4 = (obj->fields)._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar4,uVar3 & 0xff);
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVTextMsg::MVTextMsg_OnDataUpdate(MVTextMsg *this,MethodInfo *method)

{
  MVTextMsg_UpdateTextMessageSettings(this,(MethodInfo *)0x0);
  woID = (this->fields)._._._.id;
  worldObjectManager = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__,
                  worldObjectManager,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  resetNodes = (HashSet_1_System_Int32_ *)
               FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  FUN_?(resetNodes,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetNode
            (woID,resetNodes,(IWorldObjectManager *)worldObjectManager,(MethodInfo *)0x0);
  if (resetNodes != (HashSet_1_System_Int32_ *)0x0) {
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ToggleText(Boolean) */

void Assembly-CSharp.dll::MVTextMsg::MVTextMsg_ToggleText
               (MVTextMsg *this,bool visible,MethodInfo *method)

{
  pMVar1 = (this->fields).msgObject;
  if ((pMVar1 == (MVTextMsgObject *)0x0) ||
     (obj = (pMVar1->fields).visualObject, obj == (GameObject *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                  ,CONCAT71(in_register_00000011,visible),0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar3 = (obj->fields)._.m_CachedPtr;
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
  (*pcRam_?)(pvVar3,visible);
  return;
}


/* Void UpdateFontSettings() */

void Assembly-CSharp.dll::MVTextMsg::MVTextMsg_UpdateFontSettings
               (MVTextMsg *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_fontSelection);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_textColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_textOutlineColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_textUnderscored);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__FaceColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__FaceDilate);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__OutlineWidth);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_textOutline);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_OUTLINE_ON);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_textOutlineThickness);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_textItalic);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__OutlineColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_textSize);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_textThickness);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._._._.data;
  if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData);
  }
  pDVar2 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData->static_fields->
           DefaultData;
  if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (pDVar2,(Object *)StringLiteral_fontSelection,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (pOVar3 != (Object *)0x0) {
      if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar3,lRam_?);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      index = Extensions::Extensions_GetValueOrDefault_2
                        (pDVar1,StringLiteral_fontSelection,*(Int32Enum__Enum *)&pOVar3[1].klass,
                         int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                        );
      pMVar5 = (this->fields).msgObject;
      if (pMVar5 != (MVTextMsgObject *)0x0) {
        if (index != (pMVar5->fields).storedFontIndex) {
          this_00 = (pMVar5->fields).fontList;
          (pMVar5->fields).storedFontIndex = index;
          if (this_00 == (StreamedTextMeshProFontList *)0x0) goto code_?;
          pSVar6 = StreamedTextMeshProFontList::StreamedTextMeshProFontList_GetFontUrl
                             (this_00,index,(MethodInfo *)0x0);
          this_01 = (pMVar5->fields).fontStream;
          if (this_01 == (StreamedTextMeshProFontTriggered *)0x0) goto code_?;
          StreamedTextMeshProFontTriggered::StreamedTextMeshProFontTriggered_StreamFont
                    (this_01,(StreamedTextMeshProFont_IReceiver *)pMVar5,pSVar6,(MethodInfo *)0x0);
        }
        pMVar5 = (this->fields).msgObject;
        if ((pMVar5 != (MVTextMsgObject *)0x0) &&
           (pTVar7 = (pMVar5->fields).textMesh, pTVar7 != (TextMeshProUGUI *)0x0)) {
          this_02 = (Material *)
                    (*(pTVar7->klass->vtable).GetMaterial.methodPtr)
                              (pTVar7,(pTVar7->fields)._.m_sharedMaterial,
                               (pTVar7->klass->vtable).GetMaterial.method);
          pDVar1 = (this->fields)._._._.data;
          pDVar2 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData->
                   static_fields->DefaultData;
          if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                     ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                               (pDVar2,(Object *)StringLiteral_textSize,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
            if (pOVar3 != (Object *)0x0) {
              if ((pOVar3->klass->_0).element_class !=
                  *(Il2CppClass **)(lRam_? + 0x40)) {
                FUN_?(pOVar3,lRam_?);
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              fVar8 = Extensions::Extensions_GetValueOrDefault_4
                                 (pDVar1,StringLiteral_textSize,*(float *)&pOVar3[1].klass,
                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                 );
              pMVar5 = (this->fields).msgObject;
              if ((pMVar5 != (MVTextMsgObject *)0x0) &&
                 (pTVar7 = (pMVar5->fields).textMesh, pTVar7 != (TextMeshProUGUI *)0x0)) {
                Unity.TextMeshPro.dll::TMPro::TMP_Text::TMP_Text_set_fontSize
                          ((TMP_Text *)pTVar7,fVar8 * _UNK_?,(MethodInfo *)0x0);
                pDVar1 = (this->fields)._._._.data;
                pDVar2 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData->
                         static_fields->DefaultData;
                if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                  pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Object,System::Object]::
                           Dictionary_2_System_Object_System_Object__get_Item
                                     (pDVar2,(Object *)StringLiteral_textThickness,
                                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                     );
                  if (pOVar3 != (Object *)0x0) {
                    if ((pOVar3->klass->_0).element_class !=
                        *(Il2CppClass **)(lRam_? + 0x40)) {
                      FUN_?(pOVar3,lRam_?);
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    fVar8 = Extensions::Extensions_GetValueOrDefault_4
                                       (pDVar1,StringLiteral_textThickness,
                                        *(float *)&pOVar3[1].klass,
                                        float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                       );
                    if (this_02 != (Material *)0x0) {
                      iVar9 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                                        (StringLiteral__FaceDilate,(MethodInfo *)0x0);
                      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                                (this_02,iVar9,fVar8,(MethodInfo *)0x0);
                      pMVar5 = (this->fields).msgObject;
                      if ((pMVar5 != (MVTextMsgObject *)0x0) &&
                         (pTVar7 = (pMVar5->fields).textMesh, pTVar7 != (TextMeshProUGUI *)0x0)) {
                        (*(pTVar7->klass->vtable).UpdateMeshPadding.methodPtr)
                                  (pTVar7,(pTVar7->klass->vtable).UpdateMeshPadding.method);
                        pSVar6 = StringLiteral_textColor;
                        pDVar1 = (this->fields)._._._.data;
                        pDVar2 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData
                                 ->static_fields->DefaultData;
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__Extensions);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
                          FUN_?();
                        }
                        CStack_10.r = 0.0;
                        CStack_10.g = 0.0;
                        CStack_10.b = 0.0;
                        CStack_10.a = 0.0;
                        pCVar11 = Extensions::Extensions_GetColorOrDefault
                                            ((Color *)auStack_12,pDVar2,pSVar6,&CStack_10,
                                             (MethodInfo *)0x0);
                        CStack_10.r = pCVar11->r;
                        CStack_10.g = pCVar11->g;
                        CStack_10.b = pCVar11->b;
                        CStack_10.a = pCVar11->a;
                        pCVar11 = Extensions::Extensions_GetColorOrDefault
                                            ((Color *)auStack_12,pDVar1,StringLiteral_textColor,
                                             &CStack_10,(MethodInfo *)0x0);
                        CStack_10.r = pCVar11->r;
                        CStack_10.g = pCVar11->g;
                        CStack_10.b = pCVar11->b;
                        CStack_10.a = pCVar11->a;
                        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                                  (this_02,StringLiteral__FaceColor,&CStack_10,(MethodInfo *)0x0);
                        pDVar1 = (this->fields)._._._.data;
                        pDVar2 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData
                                 ->static_fields->DefaultData;
                        if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                          pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                   Object,System::Object]::
                                   Dictionary_2_System_Object_System_Object__get_Item
                                             (pDVar2,(Object *)StringLiteral_textOutline,
                                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                             );
                          if (pOVar3 != (Object *)0x0) {
                            if ((pOVar3->klass->_0).element_class !=
                                *(Il2CppClass **)(lRam_? + 0x40)) {
                              FUN_?(pOVar3,lRam_?);
                              pcVar4 = (code *)swi(3);
                              (*pcVar4)();
                              return;
                            }
                            bVar13 = Extensions::Extensions_GetValueOrDefault
                                              (pDVar1,StringLiteral_textOutline,
                                               *(bool *)&pOVar3[1].klass,
                                               bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                              );
                            pMVar5 = (this->fields).msgObject;
                            if (pMVar5 != (MVTextMsgObject *)0x0) {
                              (pMVar5->fields).storedFontHasOutline = bVar13;
                              if (bVar13 == 0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Material::
                                Material_DisableKeyword
                                          (this_02,StringLiteral_OUTLINE_ON,(MethodInfo *)0x0);
                              }
                              else {
                                UnityEngine.CoreModule.dll::UnityEngine::Material::
                                Material_EnableKeyword
                                          (this_02,StringLiteral_OUTLINE_ON,(MethodInfo *)0x0);
                              }
                              pDVar1 = (this->fields)._._._.data;
                              if (*(int *)&(
                                           TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData
                                           ->_1).field_0x1c == 0) {
                                FUN_?(
                                             TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData
                                             );
                              }
                              pDVar2 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData
                                       ->static_fields->DefaultData;
                              if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                                pOVar3 = mscorlib.dll::System::Collections::Generic::
                                         Dictionary`2[System::Object,System::Object]::
                                         Dictionary_2_System_Object_System_Object__get_Item
                                                   (pDVar2,(Object *)
                                                           StringLiteral_textOutlineThickness,
                                                                                                        
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                                  );
                                if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
                                  FUN_?();
                                }
                                if (pOVar3 != (Object *)0x0) {
                                  if ((pOVar3->klass->_0).element_class !=
                                      *(Il2CppClass **)(lRam_? + 0x40)) {
                                    FUN_?(pOVar3,lRam_?);
                                    pcVar4 = (code *)swi(3);
                                    (*pcVar4)();
                                    return;
                                  }
                                  fVar8 = Extensions::Extensions_GetValueOrDefault_4
                                                     (pDVar1,StringLiteral_textOutlineThickness,
                                                      *(float *)&pOVar3[1].klass,
                                                                                                            
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                  iVar9 = UnityEngine.CoreModule.dll::UnityEngine::Shader::
                                          Shader_PropertyToID(StringLiteral__OutlineWidth,
                                                              (MethodInfo *)0x0);
                                  UnityEngine.CoreModule.dll::UnityEngine::Material::
                                  Material_SetFloatImpl(this_02,iVar9,fVar8,(MethodInfo *)0x0);
                                  pSVar6 = StringLiteral_textOutlineColor;
                                  pDVar1 = (this->fields)._._._.data;
                                  pDVar2 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData
                                           ->static_fields->DefaultData;
                                  if (cRam_? == '\0') {
                                    FUN_?(&TypeInfo__Extensions);
                                    LOCK();
                                    UNLOCK();
                                    cRam_? = '\x01';
                                  }
                                  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
                                    FUN_?();
                                  }
                                  CStack_10.r = 0.0;
                                  CStack_10.g = 0.0;
                                  CStack_10.b = 0.0;
                                  CStack_10.a = 0.0;
                                  pCVar11 = Extensions::Extensions_GetColorOrDefault
                                                      ((Color *)auStack_12,pDVar2,pSVar6,&CStack_10,
                                                       (MethodInfo *)0x0);
                                  CStack_10.r = pCVar11->r;
                                  CStack_10.g = pCVar11->g;
                                  CStack_10.b = pCVar11->b;
                                  CStack_10.a = pCVar11->a;
                                  pCVar11 = Extensions::Extensions_GetColorOrDefault
                                                      ((Color *)auStack_12,pDVar1,
                                                       StringLiteral_textOutlineColor,&CStack_10,
                                                       (MethodInfo *)0x0);
                                  CStack_10.r = pCVar11->r;
                                  CStack_10.g = pCVar11->g;
                                  CStack_10.b = pCVar11->b;
                                  CStack_10.a = pCVar11->a;
                                  UnityEngine.CoreModule.dll::UnityEngine::Material::
                                  Material_SetColor(this_02,StringLiteral__OutlineColor,&CStack_10,
                                                    (MethodInfo *)0x0);
                                  pDVar1 = (this->fields)._._._.data;
                                  pDVar2 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData
                                           ->static_fields->DefaultData;
                                  if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                                    pOVar3 = mscorlib.dll::System::Collections::Generic::
                                             Dictionary`2[System::Object,System::Object]::
                                             Dictionary_2_System_Object_System_Object__get_Item
                                                       (pDVar2,(Object *)StringLiteral_textItalic,
                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                                  );
                                    if (pOVar3 != (Object *)0x0) {
                                      if ((pOVar3->klass->_0).element_class !=
                                          *(Il2CppClass **)(lRam_? + 0x40)) {
                                        FUN_?(pOVar3,lRam_?);
                                        pcVar4 = (code *)swi(3);
                                        (*pcVar4)();
                                        return;
                                      }
                                      bVar13 = Extensions::Extensions_GetValueOrDefault
                                                        (pDVar1,StringLiteral_textItalic,
                                                         *(bool *)&pOVar3[1].klass,
                                                                                                                  
                                                  bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                                  );
                                      pMVar5 = (this->fields).msgObject;
                                      if (pMVar5 != (MVTextMsgObject *)0x0) {
                                        MVTextMsgObject::MVTextMsgObject_SetFontStyle
                                                  (pMVar5,bVar13,FontStyles__Enum_Italic,
                                                   (MethodInfo *)0x0);
                                        pDVar1 = (this->fields)._._._.data;
                                        pDVar2 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData
                                                 ->static_fields->DefaultData;
                                        if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)
                                                      0x0) {
                                          pOVar3 = mscorlib.dll::System::Collections::Generic::
                                                   Dictionary`2[System::Object,System::Object]::
                                                                                                      
                                                  Dictionary_2_System_Object_System_Object__get_Item
                                                            (pDVar2,(Object *)
                                                                    StringLiteral_textUnderscored,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                                  );
                                          if (pOVar3 != (Object *)0x0) {
                                            if ((pOVar3->klass->_0).element_class !=
                                                *(Il2CppClass **)(lRam_? + 0x40)) {
                                              FUN_?(pOVar3,lRam_?);
                                              pcVar4 = (code *)swi(3);
                                              (*pcVar4)();
                                              return;
                                            }
                                            bVar13 = Extensions::Extensions_GetValueOrDefault
                                                              (pDVar1,StringLiteral_textUnderscored,
                                                               *(bool *)&pOVar3[1].klass,
                                                                                                                              
                                                  bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                                  );
                                            pMVar5 = (this->fields).msgObject;
                                            if (pMVar5 != (MVTextMsgObject *)0x0) {
                                              pTVar7 = (pMVar5->fields).textMesh;
                                              if (bVar13 == 0) {
                                                if (pTVar7 == (TextMeshProUGUI *)0x0) {
code_?:
                                                  auStack_12._8_8_ = &UNK_?;
                                                  FUN_?(pMVar5,bVar13,4,0);
                                                  pcVar4 = (code *)swi(3);
                                                  (*pcVar4)();
                                                  return;
                                                }
                                                uVar14 = *(uint *)&(pTVar7->fields)._.
                                                                   m_enableAutoSizing & 0xfffffffb;
                                              }
                                              else {
                                                if (pTVar7 == (TextMeshProUGUI *)0x0)
                                                goto code_?;
                                                uVar14 = *(uint *)&(pTVar7->fields)._.
                                                                   m_enableAutoSizing | 4;
                                              }
                                              if (*(uint *)&(pTVar7->fields)._.m_enableAutoSizing !=
                                                  uVar14) {
                                                *(uint *)&(pTVar7->fields)._.m_enableAutoSizing =
                                                     uVar14;
                                                *(undefined1 *)&(pTVar7->fields)._.m_marginLeft = 1;
                                                auStack_12._8_8_ = &UNK_?;
                                                (*(pTVar7->klass->vtable).SetVerticesDirty.methodPtr
                                                )(pTVar7,(pTVar7->klass->vtable).SetVerticesDirty.
                                                         method);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                                (*(pTVar7->klass->vtable).SetLayoutDirty.methodPtr)
                                                          (pTVar7,(pTVar7->klass->vtable).
                                                                  SetLayoutDirty.method);
                                                return;
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
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateText() */

void Assembly-CSharp.dll::MVTextMsg::MVTextMsg_UpdateText(MVTextMsg *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__String_MethodInfo__Extensions__GetValueOrDefault<System::String>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_text);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).msgObject;
  if (pMVar1 != (MVTextMsgObject *)0x0) {
    pTVar2 = (pMVar1->fields).textMesh;
    hashtable = (this->fields)._._._.data;
    if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData->_1).
                 field_0x1c == 0) {
      FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData);
    }
    this_00 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData->static_fields->
              DefaultData;
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (this_00,(Object *)StringLiteral_text,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
        FUN_?();
      }
      defaultValue = (Object *)0x0;
      if (pOVar3 != (Object *)0x0) {
        if (pOVar3->klass == pORam0000000182dbdde0) {
          defaultValue = pOVar3;
        }
        if (defaultValue == (Object *)0x0) {
          FUN_?(pOVar3);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pOVar3 = Extensions::Extensions_GetValueOrDefault_3
                         (hashtable,StringLiteral_text,defaultValue,
                          System__String_MethodInfo__Extensions__GetValueOrDefault<System::String>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__String_
                         );
      if (pTVar2 != (TextMeshProUGUI *)0x0) {
        UNRECOVERED_JUMPTABLE = (pTVar2->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)
                  (pTVar2,pOVar3,(pTVar2->klass->vtable).set_text.method,UNRECOVERED_JUMPTABLE);
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateTextCulling() */

void Assembly-CSharp.dll::MVTextMsg::MVTextMsg_UpdateTextCulling(MVTextMsg *this,MethodInfo *method)

{
  pMVar1 = (this->fields).msgObject;
  if ((pMVar1 == (MVTextMsgObject *)0x0) ||
     (this_00 = (pMVar1->fields).textMesh, this_00 == (TextMeshProUGUI *)0x0))
  goto code_?;
  pBVar2 = Unity.TextMeshPro.dll::TMPro::TMP_Text::TMP_Text_get_bounds
                      ((Bounds *)auStack_3,(TMP_Text *)this_00,(MethodInfo *)0x0);
  uStack_4._0_4_ = (pBVar2->m_Center).x;
  uStack_4._4_4_ = (pBVar2->m_Center).y;
  uVar5 = *(undefined8 *)&(pBVar2->m_Center).z;
  uVar6 = (pBVar2->m_Extents).y;
  uVar7 = (pBVar2->m_Extents).z;
  uStack_8 = (undefined4)uVar5;
  fStack_9 = (float)((ulonglong)uVar5 >> 0x20);
  auStack_3._4_4_ = (float)uVar6;
  auStack_3._0_4_ = fStack_9;
  auStack_3._8_4_ = uVar7;
  fStack_10 = (float)uVar6;
  fStack_11 = (float)uVar7;
  uVar5 = FUN_?(auStack_3);
  pMVar1 = (this->fields).msgObject;
  if ((pMVar1 == (MVTextMsgObject *)0x0) ||
     ((pRVar12 = (pMVar1->fields).background, pRVar12 == (RoundedRectangle *)0x0 ||
      (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pRVar12,(MethodInfo *)0x0), obj == (GameObject *)0x0))))
  goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar13 = (obj->fields)._.m_CachedPtr;
  if (pvVar13 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pcVar14 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pcRam_? = pcVar14;
  cVar15 = (*pcRam_?)(pvVar13);
  if (cVar15 == '\0') {
code_?:
    uVar16 = uVar5;
  }
  else {
    pMVar1 = (this->fields).msgObject;
    if ((pMVar1 == (MVTextMsgObject *)0x0) ||
       (pRVar12 = (pMVar1->fields).background, pRVar12 == (RoundedRectangle *)0x0))
    goto code_?;
    pRVar17 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_GetPixelAdjustedRect
                        ((Rect *)auStack_3,(Graphic *)pRVar12,(MethodInfo *)0x0);
    uStackX_8 = CONCAT44(pRVar17->m_Height + pRVar17->m_YMin,pRVar17->m_Width + pRVar17->m_XMin);
    uVar16 = FUN_?(&uStackX_8);
    if ((float)uVar16 <= (float)uVar5) goto code_?;
  }
  pCVar18 = (this->fields)._.cullingSubscriberBase;
  if (pCVar18 != (CullingSubscriberBase *)0x0) {
    if (cRam_? == '\0') {
      auStack_3._8_8_ = &UNK_?;
      FUN_?(&TypeInfo__CullingApiWrapper,uVar16,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      auStack_3._8_8_ = &UNK_?;
      FUN_?(TypeInfo__CullingApiWrapper);
    }
    pBVar19 = TypeInfo__CullingApiWrapper->static_fields->spheres;
    if (pBVar19 == (BoundingSphere__Array *)0x0) {
      auStack_3._8_8_ = &UNK_?;
      FUN_?();
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    uVar20 = (pCVar18->fields)._CullingIndex_k__BackingField;
    if ((uint)pBVar19->max_length <= uVar20) {
      auStack_3._8_8_ = &UNK_?;
      FUN_?();
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    pBVar19->vector[(int)uVar20].radius = (float)uVar16;
    return;
  }
code_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void UpdateTextMessageBackground() */

void Assembly-CSharp.dll::MVTextMsg::MVTextMsg_UpdateTextMessageBackground
               (MVTextMsg *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_backgroundWidth);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_backgroundOutlineColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_backgroundColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_backgroundOutline);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_backgroundRadius);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_backgroundOutlineThickness);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_textSize);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_background);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._._._.data;
  if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData);
  }
  pDVar2 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData->static_fields->
           DefaultData;
  if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (pDVar2,(Object *)StringLiteral_background,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (pOVar3 != (Object *)0x0) {
      if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar3,lRam_?);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      bVar5 = Extensions::Extensions_GetValueOrDefault
                        (pDVar1,StringLiteral_background,*(bool *)&pOVar3[1].klass,
                         bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                        );
      pMVar6 = (this->fields).msgObject;
      if ((pMVar6 != (MVTextMsgObject *)0x0) &&
         (pRVar7 = (pMVar6->fields).background, pRVar7 != (RoundedRectangle *)0x0)) {
        this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pRVar7,(MethodInfo *)0x0);
        if (this_01 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_01,bVar5,(MethodInfo *)0x0);
          pDVar1 = (this->fields)._._._.data;
          pDVar2 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData->
                   static_fields->DefaultData;
          if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                     ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                               (pDVar2,(Object *)StringLiteral_textSize,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
            if (pOVar3 != (Object *)0x0) {
              if ((pOVar3->klass->_0).element_class !=
                  *(Il2CppClass **)(lRam_? + 0x40)) {
                FUN_?(pOVar3,lRam_?);
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              fVar8 = Extensions::Extensions_GetValueOrDefault_4
                                 (pDVar1,StringLiteral_textSize,*(float *)&pOVar3[1].klass,
                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                 );
              fVar8 = fVar8 * _UNK_?;
              pDVar1 = (this->fields)._._._.data;
              pDVar2 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData->
                       static_fields->DefaultData;
              if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                   (pDVar2,(Object *)StringLiteral_backgroundWidth,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                   );
                if (pOVar3 != (Object *)0x0) {
                  if ((pOVar3->klass->_0).element_class !=
                      *(Il2CppClass **)(lRam_? + 0x40)) {
                    FUN_?(pOVar3,lRam_?);
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  fVar9 = Extensions::Extensions_GetValueOrDefault_4
                                     (pDVar1,StringLiteral_backgroundWidth,
                                      *(float *)&pOVar3[1].klass,
                                      float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                     );
                  if (bVar5 == 0) {
                    fVar9 = _UNK_?;
                  }
                  pMVar6 = (this->fields).msgObject;
                  if (pMVar6 != (MVTextMsgObject *)0x0) {
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__UnityEngine__RectTransform);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    this_00 = (pMVar6->fields).canvas;
                    (pMVar6->fields).storedWidth = fVar9;
                    (pMVar6->fields).storedPadding = fVar8;
                    if (this_00 != (Canvas *)0x0) {
                      pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_transform((Component *)this_00,(MethodInfo *)0x0);
                      value = MVTextMsgObject::MVTextMsgObject_CalculateSizeDeltas
                                        (pMVar6,(MethodInfo *)0x0);
                      if (pTVar10 != (Transform *)0x0) {
                        pTVar11 = (Transform *)0x0;
                        if (pTVar10->klass ==
                            (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
                          pTVar11 = pTVar10;
                        }
                        if (pTVar11 != (Transform *)0x0) {
                          pTVar11 = (Transform *)0x0;
                          if (pTVar10->klass ==
                              (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
                            pTVar11 = pTVar10;
                          }
                          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                          RectTransform_set_sizeDelta
                                    ((RectTransform *)pTVar11,value,(MethodInfo *)0x0);
                          pDVar1 = (this->fields)._._._.data;
                          if (*(int *)&(
                                       TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData
                                       ->_1).field_0x1c == 0) {
                            FUN_?(
                                         TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData
                                         );
                          }
                          pDVar2 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData
                                   ->static_fields->DefaultData;
                          if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                            pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                     ::Object,System::Object]::
                                     Dictionary_2_System_Object_System_Object__get_Item
                                               (pDVar2,(Object *)StringLiteral_backgroundRadius,
                                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                               );
                            if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
                              FUN_?();
                            }
                            if (pOVar3 != (Object *)0x0) {
                              if ((pOVar3->klass->_0).element_class !=
                                  *(Il2CppClass **)(lRam_? + 0x40)) {
                                FUN_?(pOVar3,lRam_?);
                                pcVar4 = (code *)swi(3);
                                (*pcVar4)();
                                return;
                              }
                              fVar9 = Extensions::Extensions_GetValueOrDefault_4
                                                 (pDVar1,StringLiteral_backgroundRadius,
                                                  *(float *)&pOVar3[1].klass,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                 );
                              fVar8 = _UNK_?;
                              pMVar6 = (this->fields).msgObject;
                              if ((pMVar6 != (MVTextMsgObject *)0x0) &&
                                 (pRVar7 = (pMVar6->fields).background,
                                 pRVar7 != (RoundedRectangle *)0x0)) {
                                (pRVar7->fields).radius = fVar9 / _UNK_?;
                                pDVar1 = (this->fields)._._._.data;
                                pDVar2 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData
                                         ->static_fields->DefaultData;
                                if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                                  pOVar3 = mscorlib.dll::System::Collections::Generic::
                                           Dictionary`2[System::Object,System::Object]::
                                           Dictionary_2_System_Object_System_Object__get_Item
                                                     (pDVar2,(Object *)
                                                             StringLiteral_backgroundOutline,
                                                                                                            
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                                  );
                                  if (pOVar3 != (Object *)0x0) {
                                    if ((pOVar3->klass->_0).element_class !=
                                        *(Il2CppClass **)(lRam_? + 0x40)) {
                                      FUN_?(pOVar3,lRam_?);
                                      pcVar4 = (code *)swi(3);
                                      (*pcVar4)();
                                      return;
                                    }
                                    bVar5 = Extensions::Extensions_GetValueOrDefault
                                                      (pDVar1,StringLiteral_backgroundOutline,
                                                       *(bool *)&pOVar3[1].klass,
                                                                                                              
                                                  bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                                  );
                                    pDVar1 = (this->fields)._._._.data;
                                    pDVar2 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData
                                             ->static_fields->DefaultData;
                                    if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0)
                                    {
                                      pOVar3 = mscorlib.dll::System::Collections::Generic::
                                               Dictionary`2[System::Object,System::Object]::
                                               Dictionary_2_System_Object_System_Object__get_Item
                                                         (pDVar2,(Object *)
                                                                                                                                  
                                                  StringLiteral_backgroundOutlineThickness,
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                                  );
                                      if (pOVar3 != (Object *)0x0) {
                                        if ((pOVar3->klass->_0).element_class !=
                                            *(Il2CppClass **)(lRam_? + 0x40)) {
                                          FUN_?(pOVar3,lRam_?);
                                          pcVar4 = (code *)swi(3);
                                          (*pcVar4)();
                                          return;
                                        }
                                        fVar9 = Extensions::Extensions_GetValueOrDefault_4
                                                           (pDVar1,
                                                  StringLiteral_backgroundOutlineThickness,
                                                  *(float *)&pOVar3[1].klass,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                        if (bVar5 == 0) {
                                          fVar9 = 0.0;
                                        }
                                        pMVar6 = (this->fields).msgObject;
                                        if ((pMVar6 != (MVTextMsgObject *)0x0) &&
                                           (pRVar7 = (pMVar6->fields).background,
                                           pRVar7 != (RoundedRectangle *)0x0)) {
                                          (pRVar7->fields).borderThickness = fVar9 / fVar8;
                                          pDVar1 = (this->fields)._._._.data;
                                          if (*(int *)&(
                                                  TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData
                                                  ->_1).field_0x1c == 0) {
                                            FUN_?(
                                                  TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData
                                                  );
                                          }
                                          pDVar2 = 
                                                  TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData
                                                  ->static_fields->DefaultData;
                                          if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
                                            FUN_?();
                                          }
                                          pSVar12 = StringLiteral_backgroundColor;
                                          if (cRam_? == '\0') {
                                            FUN_?(&TypeInfo__Extensions);
                                            LOCK();
                                            UNLOCK();
                                            cRam_? = '\x01';
                                          }
                                          if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
                                            FUN_?();
                                          }
                                          CStack_13.r = 0.0;
                                          CStack_13.g = 0.0;
                                          CStack_13.b = 0.0;
                                          CStack_13.a = 0.0;
                                          pCVar14 = Extensions::Extensions_GetColorOrDefault
                                                              (aCStack_15,pDVar2,pSVar12,&CStack_13,
                                                               (MethodInfo *)0x0);
                                          CStack_13.r = pCVar14->r;
                                          CStack_13.g = pCVar14->g;
                                          CStack_13.b = pCVar14->b;
                                          CStack_13.a = pCVar14->a;
                                          pCVar14 = Extensions::Extensions_GetColorOrDefault
                                                              (aCStack_15,pDVar1,
                                                               StringLiteral_backgroundColor,
                                                               &CStack_13,(MethodInfo *)0x0);
                                          pMVar6 = (this->fields).msgObject;
                                          if ((pMVar6 != (MVTextMsgObject *)0x0) &&
                                             (pRVar7 = (pMVar6->fields).background,
                                             pRVar7 != (RoundedRectangle *)0x0)) {
                                            CStack_13.r = pCVar14->r;
                                            CStack_13.g = pCVar14->g;
                                            CStack_13.b = pCVar14->b;
                                            CStack_13.a = pCVar14->a;
                                            (*(pRVar7->klass->vtable).set_color.methodPtr)
                                                      (pRVar7,&CStack_13,
                                                       (pRVar7->klass->vtable).set_color.method);
                                            pSVar12 = StringLiteral_backgroundOutlineColor;
                                            pDVar1 = (this->fields)._._._.data;
                                            pDVar2 = 
                                                  TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData
                                                  ->static_fields->DefaultData;
                                            if (cRam_? == '\0') {
                                              FUN_?(&TypeInfo__Extensions);
                                              LOCK();
                                              UNLOCK();
                                              cRam_? = '\x01';
                                            }
                                            if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0)
                                            {
                                              FUN_?();
                                            }
                                            CStack_13.r = 0.0;
                                            CStack_13.g = 0.0;
                                            CStack_13.b = 0.0;
                                            CStack_13.a = 0.0;
                                            pCVar14 = Extensions::Extensions_GetColorOrDefault
                                                                (aCStack_15,pDVar2,pSVar12,&CStack_13
                                                                 ,(MethodInfo *)0x0);
                                            CStack_13.r = pCVar14->r;
                                            CStack_13.g = pCVar14->g;
                                            CStack_13.b = pCVar14->b;
                                            CStack_13.a = pCVar14->a;
                                            pCVar14 = Extensions::Extensions_GetColorOrDefault
                                                                (aCStack_15,pDVar1,
                                                                                                                                  
                                                  StringLiteral_backgroundOutlineColor,&CStack_13,
                                                  (MethodInfo *)0x0);
                                            pMVar6 = (this->fields).msgObject;
                                            if (pMVar6 != (MVTextMsgObject *)0x0) {
                                              pRVar7 = (pMVar6->fields).background;
                                              fVar8 = pCVar14->g;
                                              fVar9 = pCVar14->b;
                                              fVar16 = pCVar14->a;
                                              if (pRVar7 != (RoundedRectangle *)0x0) {
                                                (pRVar7->fields).borderColor.r = pCVar14->r;
                                                (pRVar7->fields).borderColor.g = fVar8;
                                                (pRVar7->fields).borderColor.b = fVar9;
                                                (pRVar7->fields).borderColor.a = fVar16;
                                                pMVar6 = (this->fields).msgObject;
                                                if ((pMVar6 != (MVTextMsgObject *)0x0) &&
                                                   (pRVar7 = (pMVar6->fields).background,
                                                   pRVar7 != (RoundedRectangle *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                                  (*(pRVar7->klass->vtable).SetAllDirty.methodPtr)
                                                            (pRVar7,(pRVar7->klass->vtable).
                                                                    SetAllDirty.method);
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
  (*pcVar4)();
  return;
}


/* Void UpdateTextMessageSettings() */

void Assembly-CSharp.dll::MVTextMsg::MVTextMsg_UpdateTextMessageSettings
               (MVTextMsg *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__String_MethodInfo__Extensions__GetValueOrDefault<System::String>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_text);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).msgObject;
  if (pMVar1 == (MVTextMsgObject *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar3 = (pMVar1->fields).textMesh;
  pDVar4 = (this->fields)._._._.data;
  if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData);
  }
  pDVar5 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData->static_fields->
           DefaultData;
  if (pDVar5 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      (pDVar5,(Object *)StringLiteral_text,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  defaultValue = (Object *)0x0;
  if (pOVar6 != (Object *)0x0) {
    if (pOVar6->klass == pORam0000000182dbdde0) {
      defaultValue = pOVar6;
    }
    if (defaultValue == (Object *)0x0) {
      FUN_?(pOVar6);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pOVar6 = Extensions::Extensions_GetValueOrDefault_3
                      (pDVar4,StringLiteral_text,defaultValue,
                       System__String_MethodInfo__Extensions__GetValueOrDefault<System::String>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__String_
                      );
  if (pTVar3 == (TextMeshProUGUI *)0x0) goto code_?;
  (*(pTVar3->klass->vtable).set_text.methodPtr)
            (pTVar3,pOVar6,(pTVar3->klass->vtable).set_text.method);
  MVTextMsg_UpdateFontSettings(this,(MethodInfo *)0x0);
  MVTextMsg_UpdateTextMessageBackground(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_billboard);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar4 = (this->fields)._._._.data;
  if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData);
  }
  pDVar5 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData->static_fields->
           DefaultData;
  if (pDVar5 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      (pDVar5,(Object *)StringLiteral_billboard,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (pOVar6 == (Object *)0x0) goto code_?;
  if ((pOVar6->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar6,lRam_?);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  billboard = Extensions::Extensions_GetValueOrDefault
                        (pDVar4,StringLiteral_billboard,*(bool *)&pOVar6[1].klass,
                         bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                        );
  pMVar1 = (this->fields).msgObject;
  if (pMVar1 == (MVTextMsgObject *)0x0) goto code_?;
  MVTextMsgObject::MVTextMsgObject_SetBillboard(pMVar1,billboard,(MethodInfo *)0x0);
  pMVar1 = (this->fields).msgObject;
  if ((pMVar1 == (MVTextMsgObject *)0x0) ||
     (pTVar3 = (pMVar1->fields).textMesh, pTVar3 == (TextMeshProUGUI *)0x0))
  goto code_?;
  pBVar7 = Unity.TextMeshPro.dll::TMPro::TMP_Text::TMP_Text_get_bounds
                      ((Bounds *)auStack_8,(TMP_Text *)pTVar3,(MethodInfo *)0x0);
  puStack_9 = *(undefined **)&pBVar7->m_Center;
  uVar10 = *(undefined8 *)&(pBVar7->m_Center).z;
  uVar11 = (pBVar7->m_Extents).y;
  uVar12 = (pBVar7->m_Extents).z;
  uStack_13 = (undefined4)uVar10;
  fStack_14 = (float)((ulonglong)uVar10 >> 0x20);
  auStack_8._4_4_ = (float)uVar11;
  auStack_8._0_4_ = fStack_14;
  auStack_8._8_4_ = uVar12;
  fStack_15 = (float)uVar11;
  fStack_16 = (float)uVar12;
  uVar10 = FUN_?(auStack_8);
  pMVar1 = (this->fields).msgObject;
  if ((pMVar1 == (MVTextMsgObject *)0x0) ||
     ((pRVar17 = (pMVar1->fields).background, pRVar17 == (RoundedRectangle *)0x0 ||
      (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pRVar17,(MethodInfo *)0x0), obj == (GameObject *)0x0))))
  goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar18 = (obj->fields)._.m_CachedPtr;
  if (pvVar18 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar10 = func_?(&UNK_?);
    FUN_?(uVar10,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  cVar19 = (*pcRam_?)(pvVar18);
  if (cVar19 == '\0') {
code_?:
    uVar20 = uVar10;
  }
  else {
    pMVar1 = (this->fields).msgObject;
    if ((pMVar1 == (MVTextMsgObject *)0x0) ||
       (pRVar17 = (pMVar1->fields).background, pRVar17 == (RoundedRectangle *)0x0))
    goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_GetPixelAdjustedRect
              ((Rect *)auStack_8,(Graphic *)pRVar17,(MethodInfo *)0x0);
    uVar20 = FUN_?(&stack0x00000008);
    if ((float)uVar20 <= (float)uVar10) goto code_?;
  }
  pCVar21 = (this->fields)._.cullingSubscriberBase;
  if (pCVar21 != (CullingSubscriberBase *)0x0) {
    if (cRam_? == '\0') {
      auStack_8._8_8_ = &UNK_?;
      FUN_?(&TypeInfo__CullingApiWrapper,uVar20,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      auStack_8._8_8_ = &UNK_?;
      FUN_?(TypeInfo__CullingApiWrapper);
    }
    pBVar22 = TypeInfo__CullingApiWrapper->static_fields->spheres;
    if (pBVar22 == (BoundingSphere__Array *)0x0) {
      auStack_8._8_8_ = &UNK_?;
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar23 = (pCVar21->fields)._CullingIndex_k__BackingField;
    if ((uint)pBVar22->max_length <= uVar23) {
      auStack_8._8_8_ = &UNK_?;
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pBVar22->vector[(int)uVar23].radius = (float)uVar20;
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateTextObjectBillboardSettings() */

void Assembly-CSharp.dll::MVTextMsg::MVTextMsg_UpdateTextObjectBillboardSettings
               (MVTextMsg *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_billboard);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  hashtable = (this->fields)._._._.data;
  if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData);
  }
  this_00 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData->static_fields->
            DefaultData;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (this_00,(Object *)StringLiteral_billboard,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar1,lRam_?);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar3 = Extensions::Extensions_GetValueOrDefault
                        (hashtable,StringLiteral_billboard,*(bool *)&pOVar1[1].klass,
                         bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                        );
      this_01 = (this->fields).msgObject;
      if (this_01 != (MVTextMsgObject *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        LookAtMainCamera_MethodInfo__UnityEngine__GameObject__AddComponent<LookAtMainCamera>__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pLVar4 = (this_01->fields).billboardScript;
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
        if (pLVar4 == (LookAtMainCamera *)0x0) {
          bVar5 = false;
        }
        else {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar5 = (pLVar4->fields)._._._._.m_CachedPtr != (void *)0x0;
        }
        if ((bVar3 == 0) || (bVar5 != false)) {
          if ((bVar5 & (bVar3 ^ 1)) != 0) {
            pLVar4 = (this_01->fields).billboardScript;
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
                      ((Object_1 *)pLVar4,0.0,(MethodInfo *)0x0);
          }
        }
        else {
          this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this_01,(MethodInfo *)0x0);
          if (this_02 == (GameObject *)0x0) {
            FUN_?();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pLVar4 = (LookAtMainCamera *)
                   UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                             (this_02,
                              LookAtMainCamera_MethodInfo__UnityEngine__GameObject__AddComponent<LookAtMainCamera>__
                             );
          bVar5 = iRam_? != 0;
          (this_01->fields).billboardScript = pLVar4;
          if (bVar5) {
            uVar6 = (uint)((ulonglong)&(this_01->fields).billboardScript >> 0xc);
            uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
            do {
              uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
              puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
              LOCK();
              bVar5 = uVar8 == *puVar9;
              if (bVar5) {
                *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
              }
              UNLOCK();
            } while (!bVar5);
            return;
          }
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVTextMsg(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVTextMsg::MVTextMsg__ctor
               (MVTextMsg *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVTextMsgObject);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(ObjectPrefab *)(pPVar1->fields).mvTextMsgPrefab,
               worldObjects,(MethodInfo *)0x0);
    piVar2 = &(this->fields)._._.interactionFlags;
    *piVar2 = *piVar2 | 0x18380;
    pMVar3 = (MVTextMsgObject *)(this->fields)._._.component;
    if (pMVar3 == (MVTextMsgObject *)0x0) {
      (this->fields).msgObject = (MVTextMsgObject *)0x0;
    }
    else {
      bVar4 = (TypeInfo__MVTextMsgObject->_1).naturalAligment;
      if (((pMVar3->klass->_1).naturalAligment < bVar4) ||
         ((pMVar3->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
          (Il2CppClass *)TypeInfo__MVTextMsgObject)) {
        FUN_?(pMVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (this->fields).msgObject = pMVar3;
      bVar4 = (TypeInfo__MVTextMsgObject->_1).naturalAligment;
      if (((pMVar3->klass->_1).naturalAligment < bVar4) ||
         ((pMVar3->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
          (Il2CppClass *)TypeInfo__MVTextMsgObject)) {
        FUN_?(pMVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)&(this->fields).msgObject >> 0xc);
      puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar8 = *puVar7;
        LOCK();
        uVar9 = *puVar7;
        if (uVar8 == uVar9) {
          *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (uVar8 != uVar9);
    }
    this_00 = (this->fields)._._.gameObject;
    if ((this_00 != (GameObject *)0x0) &&
       (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      BStack_10.m_Center.x = 0.0;
      BStack_10.m_Center.y = 0.0;
      BStack_10.m_Center.z = 0.0;
      pvVar11 = (obj->fields)._._.m_CachedPtr;
      if (pvVar11 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar12 = func_?(&UNK_?);
        FUN_?(uVar12,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)(pvVar11,&BStack_10);
      pMVar3 = (this->fields).msgObject;
      if (pMVar3 != (MVTextMsgObject *)0x0) {
        VStack_13.x = BStack_10.m_Center.x;
        VStack_13.y = BStack_10.m_Center.y;
        VStack_13.z = BStack_10.m_Center.z;
        pBVar14 = MVLogicObject::MVLogicObject_ComputeLocalBounds
                            (&BStack_10,(MVLogicObject *)this,&VStack_13,
                             (pMVar3->fields)._.meshRenderers,(MethodInfo *)0x0);
        fVar15 = (pBVar14->m_Center).y;
        uVar12 = *(undefined8 *)&(pBVar14->m_Center).z;
        fVar16 = (pBVar14->m_Extents).y;
        fVar17 = (pBVar14->m_Extents).z;
        (this->fields).localBounds.m_Center.x = (pBVar14->m_Center).x;
        (this->fields).localBounds.m_Center.y = fVar15;
        *(undefined8 *)&(this->fields).localBounds.m_Center.z = uVar12;
        (this->fields).localBounds.m_Extents.y = fVar16;
        (this->fields).localBounds.m_Extents.z = fVar17;
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Vector3 get_InputConnectorOffset() */

Vector3 * Assembly-CSharp.dll::MVTextMsg::MVTextMsg_get_InputConnectorOffset
                    (Vector3 *__return_storage_ptr__,MVTextMsg *this,MethodInfo *method)

{
  __return_storage_ptr__->x = -1.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.51;
  return __return_storage_ptr__;
}

