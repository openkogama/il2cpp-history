
/* Void AddReporter(Int32, MVNetworkReporter) */

void Assembly-CSharp.dll::TransformNetworkManager::TransformNetworkManager_AddReporter
               (TransformNetworkManager *this,int32_t woID,MVNetworkReporter *networkReporter,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).networkedObjects;
  if (this_00 != (Dictionary_2_System_Int32_MVNetworkObject_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,woID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__ContainsKey_int_
                      );
    this_02 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)(this->fields).networkedObjects;
    unaff_ESI = woID;
    if (bVar1 == 0) {
      if (this_02 !=
          (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
           *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  ((Dictionary_2_System_Int32_System_Object_ *)this_02,woID,
                   (Object *)networkReporter,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Add_int__MVNetworkObject_
                  );
        return;
      }
    }
    else if (this_02 !=
             (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)0x0) goto code_?;
  }
  func_?(0);
  this_02 = extraout_ECX;
code_?:
  arg1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
         Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
         Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                   (this_02,unaff_ESI,
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__get_Item_int_
                   );
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  message = mscorlib.dll::System::String::String_Concat
                      ((Object *)StringLiteral_Trying_to_add_reporter_while_net,(Object *)arg1,
                       (MethodInfo *)0x0);
  this_01 = (IsolatedStorageException *)func_?();
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(this_01,message,(MethodInfo *)0x0);
  pMStack2 = MethodInfo__TransformNetworkManager__AddReporter_int__MVNetworkReporter_;
  uStack3 = 0;
  pIStack4 = this_01;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void AddTransformPackage(Int32, NetworkTransformPackage) */

void Assembly-CSharp.dll::TransformNetworkManager::TransformNetworkManager_AddTransformPackage
               (TransformNetworkManager *this,int32_t woID,NetworkTransformPackage *p,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_01 != (MVWorldObjectClientManager *)0x0) {
    owner = (MVWorldObjectClient *)
            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                      (this_01,woID,(MethodInfo *)0x0);
    if (owner == (MVWorldObjectClient *)0x0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Attempt_to_update_world_object__,(MethodInfo *)0x0);
      return;
    }
    pDVar1 = (this->fields).networkedObjects;
    if (pDVar1 != (Dictionary_2_System_Int32_MVNetworkObject_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__ContainsKey
                        ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,woID,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__ContainsKey_int_
                        );
      if (bVar2 == 0) {
        pDVar1 = (this->fields).networkedObjects;
        pMVar3 = (MVNetworkListener *)func_?();
        MVNetworkListener::MVNetworkListener__ctor(pMVar3,owner,(MethodInfo *)0x0);
        if (pDVar1 == (Dictionary_2_System_Int32_MVNetworkObject_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,woID,(Object *)pMVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Add_int__MVNetworkObject_
                  );
      }
      this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)(this->fields).networkedObjects;
      if (this_00 !=
          (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
           *)0x0) {
        p_00 = (NetworkTransformPackage *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
               Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
               Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                         (this_00,woID,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__get_Item_int_
                         );
        if (p_00 != (NetworkTransformPackage *)0x0) {
          pTVar4 = mscorlib.dll::System::Object::Object_GetType((Object *)p_00,(MethodInfo *)0x0);
          handle = TypeRef__MVNetworkListener;
          if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__Type->_1).cctor_started == 0)) {
            func_?();
          }
          pTVar5 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                             ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
          pMVar6 = TypeInfo__MVNetworkListener;
          if (pTVar4 == pTVar5) {
            iVar7 = func_?();
            if (iVar7 != 0) {
              pMVar3 = (MVNetworkListener *)func_?(p_00,pMVar6);
              MVNetworkListener::MVNetworkListener_AddTransformPackage
                        (pMVar3,p_00,(MethodInfo *)0x0);
              return;
            }
            goto code_?;
          }
          pTVar4 = mscorlib.dll::System::Object::Object_GetType((Object *)p_00,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?();
          }
          message = mscorlib.dll::System::String::String_Concat_1
                              ((Object *)StringLiteral_worldObjectClientManager_WorldOb,
                               (Object *)pTVar4,
                               (Object *)StringLiteral__this_is_probably_due_to_ownersh,
                               (MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                    ((Object *)message,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* MVNetworkObject GetNetworkObject(Int32) */

MVNetworkObject *
Assembly-CSharp.dll::TransformNetworkManager::TransformNetworkManager_GetNetworkObject
          (TransformNetworkManager *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).networkedObjects;
  if (this_00 != (Dictionary_2_System_Int32_MVNetworkObject_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,woID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      return (MVNetworkObject *)0x0;
    }
    this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)(this->fields).networkedObjects;
    if (this_01 !=
        (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
        0x0) {
      pTVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
               Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
               Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                         (this_01,woID,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__get_Item_int_
                         );
      return (MVNetworkObject *)pTVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pMVar4 = (MVNetworkObject *)(*pcVar3)();
  return pMVar4;
}


/* Void RemoveNetworkObject(Int32) */

void Assembly-CSharp.dll::TransformNetworkManager::TransformNetworkManager_RemoveNetworkObject
               (TransformNetworkManager *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  key = woID;
  arg1 = (Object *)func_?(TypeInfo__System__Int32,&woID);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  message = mscorlib.dll::System::String::String_Concat
                      ((Object *)StringLiteral_RemoveNetworkObject_,arg1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)message,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).networkedObjects;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Experimental
    ::TerrainAPI::TerrainUtility+TerrainMap]::
    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
              (this_00,key,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Remove_int_
              );
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Update(MVNetworkGame) */

void Assembly-CSharp.dll::TransformNetworkManager::TransformNetworkManager_Update
               (TransformNetworkManager *this,MVNetworkGame *game,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff8c;
  puVar5 = &stack0xffffff8c;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pMStack_6 = (MVWorldObjectClientManager *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  CStack_8.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_8.monitor = (MonitorData *)0x0;
  CStack_8.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_8.fields.syncRoot = (Object *)0x0;
  func_?();
  uStack_9 = 0xffffffff;
  piStack_10 = (int *)&stack0xffffff8c;
  puStack_4 = &stack0xffffff8c;
  if (game == (MVNetworkGame *)0x0) {
code_?:
    pMVar11 = (MVWorldObjectClientManager *)func_?();
  }
  else {
    piStack_10 = (int *)&stack0xffffff8c;
    puStack_4 = &stack0xffffff8c;
    unaff_ESI = (MVWorldObjectClientManager *)
                MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(game,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    TypeInfo__TransformNetworkManager->static_fields->_DelayedTime_k__BackingField =
         (int32_t)&unaff_ESI[-8].fields.worldBounds.m_Center.y;
    this_00 = (this->fields).networkedObjects;
    if (this_00 == (Dictionary_2_System_Int32_MVNetworkObject_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::Object]::
    Dictionary_2_WinningConditionType_System_Object__GetEnumerator
              ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)auStack_12
               ,(Dictionary_2_WinningConditionType_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__GetEnumerator__
              );
    uStack_1 = 0;
code_?:
    cVar13 = func_?();
    if (cVar13 != '\0') {
      KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)&stack0xffffff98,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVNetworkObject>__get_Current__
                            );
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      unaff_ESI = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      id = func_?();
      if (unaff_ESI != (MVWorldObjectClientManager *)0x0) {
        pMVar14 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (unaff_ESI,id,(MethodInfo *)0x0);
        if (pMVar14 == (MVWorldObject *)0x0) {
          this_04 = (List_1_UIPushOption_ *)(this->fields).removeList;
          item = func_?();
          unaff_ESI = (MVWorldObjectClientManager *)0x0;
          if (this_04 != (List_1_UIPushOption_ *)0x0) goto code_?;
        }
        else {
          iVar15 = func_?();
          if (iVar15 != 0) {
            func_?(5);
            iVar15 = func_?();
            if (iVar15 != 0) goto code_?;
          }
        }
      }
      goto code_?;
    }
    pMVar16 = (MVWorldObjectClientManager *)0x0;
    *piStack_10 = 0xb4;
    uStack_1 = 0xffffffff;
    func_?();
    pMVar11 = pMStack_6;
    unaff_ESI = pMVar16;
    if (pMStack_6 == (MVWorldObjectClientManager *)0x0) {
      if (*piStack_10 == 0xb4) {
        pMVar16 = (MVWorldObjectClientManager *)0xffffffff;
      }
      this_01 = (List_1_UnityEngine_Color32_ *)(this->fields).removeList;
      unaff_ESI = pMVar16;
      if (this_01 != (List_1_UnityEngine_Color32_ *)0x0) {
        pLVar17 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                 List_1_UnityEngine_Color32__GetEnumerator
                           ((List_1_T_Enumerator_UnityEngine_Color32_ *)(auStack_12 + 4),this_01,
                            MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
        CStack_8.klass =
             (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar17->l;
        CStack_8.monitor = (MonitorData *)pLVar17->next;
        CStack_8.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar17->ver;
        CStack_8.fields.syncRoot = (Object *)(pLVar17->current).rgba;
        uStack_1 = 2;
        while (cVar13 = func_?(), unaff_ESI = pMStack_6, cVar13 != '\0') {
          key = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          (&CStack_8,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__
                          );
          this_02 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)(this->fields).networkedObjects;
          unaff_ESI = pMVar16;
          if (this_02 ==
              (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                    (this_02,(int32_t)key,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Remove_int_
                    );
        }
        piStack_10[(int)((int)&pMVar16->klass + 1)] = 0xfa;
        uStack_1 = 0xffffffff;
        func_?(&CStack_8,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__
                       );
        if (unaff_ESI != (MVWorldObjectClientManager *)0x0) goto code_?;
        this_03 = (List_1_UnityEngine_UIVertex_ *)(this->fields).removeList;
        if (this_03 != (List_1_UnityEngine_UIVertex_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
          List_1_UnityEngine_UIVertex__Clear
                    (this_03,MethodInfo__System__Collections__Generic__List<int>__Clear__);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
      goto code_?;
    }
  }
  func_?(pMVar11);
code_?:
  func_?(unaff_ESI);
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
code_?:
  cVar13 = func_?();
  if (cVar13 != '\0') {
    this_04 = (List_1_UIPushOption_ *)(this->fields).removeList;
    item = func_?();
    unaff_ESI = (MVWorldObjectClientManager *)0x0;
    if (this_04 == (List_1_UIPushOption_ *)0x0) goto code_?;
code_?:
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              (this_04,item,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
  }
  goto code_?;
}


/* TransformNetworkManager() */

void Assembly-CSharp.dll::TransformNetworkManager::TransformNetworkManager__ctor
               (TransformNetworkManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_MVNetworkObject_ *)
            func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Dictionary__
            );
  (this->fields).networkedObjects = this_00;
  method_00 = TypeInfo__System__Collections__Generic__List<int>;
  this_01 = (List_1_UnityEngine_Vector4_ *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_01,MethodInfo__System__Collections__Generic__List<int>__List__);
  (this->fields).removeList = (List_1_System_Int32_ *)this_01;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  return;
}


/* Int32 get_DelayedTime() */

int32_t Assembly-CSharp.dll::TransformNetworkManager::TransformNetworkManager_get_DelayedTime
                  (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  return TypeInfo__TransformNetworkManager->static_fields->_DelayedTime_k__BackingField;
}


/* Void set_DelayedTime(Int32) */

void Assembly-CSharp.dll::TransformNetworkManager::TransformNetworkManager_set_DelayedTime
               (int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__TransformNetworkManager->static_fields->_DelayedTime_k__BackingField = value;
  return;
}

