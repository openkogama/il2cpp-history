
/* Void AddLink(Link, MVWorldObjectClient, MVWorldObjectClient) */

void Assembly-CSharp.dll::Links::Links_AddLink
               (Links *this,Link_1 *link,MVWorldObjectClient *outputWo,MVWorldObjectClient *inputWo,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((link != (Link_1 *)0x0) &&
       (this_00 = (this->fields).links,
       this_00 != (Dictionary_2_System_Int32_MV_WorldObject_Link_ *)0x0)) &&
      (mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
       Dictionary_2_System_Int32_System_Object__Add
                 ((Dictionary_2_System_Int32_System_Object_ *)this_00,(link->fields).id,
                  (Object *)link,
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__Add_int__MV__WorldObject__Link_
                 ), outputWo != (MVWorldObjectClient *)0x0)) &&
     (MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_AddOutputLink
                ((MVWorldObject *)outputWo,link,(MethodInfo *)0x0),
     inputWo != (MVWorldObjectClient *)0x0)) {
    MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_AddInputLink
              ((MVWorldObject *)inputWo,link,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (MVar1 != MVGameMode__Enum_Edit) {
      return;
    }
    if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
      func_?();
    }
    this_02 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
    if (this_02 != (PrefabPool *)0x0) {
      pLVar2 = PrefabPool::PrefabPool_get_LinkObject(this_02,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      pLVar2 = (LinkObjectScript *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                         ((XpBoostParticlePreviewer *)pLVar2,
                          LinkObjectScript_MethodInfo__UnityEngine__Object__Instantiate<LinkObjectScript>_LinkObjectScript_
                         );
      if (pLVar2 != (LinkObjectScript *)0x0) {
        (pLVar2->fields)._.isObjectLink = 0;
        (pLVar2->fields)._.linkID = (link->fields).id;
        LinkObjectScript::LinkObjectScript_UpdateLinkVisual(pLVar2,link,(MethodInfo *)0x0);
        this_01 = (this->fields).linkObjects;
        if (this_01 != (Dictionary_2_System_Int32_LinkObjectScript_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__Add
                    ((Dictionary_2_System_Int32_System_Object_ *)this_01,(link->fields).id,
                     (Object *)pLVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_LinkObjectScript>__Add_int__LinkObjectScript_
                    );
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean Contains(Int32) */

bool Assembly-CSharp.dll::Links::Links_Contains(Links *this,int32_t linkID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).links;
  if (this_00 != (Dictionary_2_System_Int32_MV_WorldObject_Link_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,linkID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__ContainsKey_int_
                      );
    return bVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Link GetLink(Int32) */

Link_1 * Assembly-CSharp.dll::Links::Links_GetLink(Links *this,int32_t linkID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).links;
  if (this_00 != (Dictionary_2_System_Int32_MV_WorldObject_Link_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,linkID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_Link_not_found,(MethodInfo *)0x0);
      return (Link_1 *)0x0;
    }
    this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)(this->fields).links;
    if (this_01 !=
        (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
        0x0) {
      pTVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
               Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
               Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                         (this_01,linkID,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__get_Item_int_
                         );
      return (Link_1 *)pTVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pLVar4 = (Link_1 *)(*pcVar3)();
  return pLVar4;
}


/* Boolean RemoveLink(Int32, MVWorldObjectClient, MVWorldObjectClient) */

bool Assembly-CSharp.dll::Links::Links_RemoveLink
               (Links *this,int32_t linkID,MVWorldObjectClient *outputWo,
               MVWorldObjectClient *inputWo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  key = linkID;
  pLVar1 = this;
  this_00 = (this->fields).links;
  if (this_00 != (Dictionary_2_System_Int32_MV_WorldObject_Link_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,linkID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__ContainsKey_int_
                      );
    if (bVar2 == 0) {
      this = (Links *)key;
      arg1 = (Object *)func_?(TypeInfo__System__Int32,&this);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      message = mscorlib.dll::System::String::String_Concat_1
                          ((Object *)StringLiteral_Attempt_to_remove_link_with_id__,arg1,
                           (Object *)StringLiteral___but_link_not_registered_,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        outputWo = (MVWorldObjectClient *)TypeInfo__UnityEngine__Debug;
        linkID = (int32_t)&UNK_?;
        func_?();
      }
      outputWo = (MVWorldObjectClient *)0x0;
      this = (Links *)&UNK_?;
      linkID = (int32_t)message;
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)message,(MethodInfo *)0x0);
      return 0;
    }
    pDVar3 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)(pLVar1->fields).links;
    if (((pDVar3 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)0x0) &&
        (link = (MVWorldObjectClient *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                          (pDVar3,key,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__get_Item_int_
                          ), link != (MVWorldObjectClient *)0x0)) &&
       (pDVar3 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)(pLVar1->fields).links,
       pDVar3 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)0x0)) {
      linkID = (int32_t)
               MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__Remove_int_
      ;
      this = (Links *)(link->fields)._.id;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
      Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                (pDVar3,(int32_t)this,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__Remove_int_
                );
      if (outputWo != (MVWorldObjectClient *)0x0) {
        method = (MethodInfo *)0x0;
        linkID = (int32_t)&UNK_?;
        inputWo = link;
        MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_RemoveOutputLink
                  ((MVWorldObject *)outputWo,(Link_1 *)link,(MethodInfo *)0x0);
        if (inputWo != (MVWorldObjectClient *)0x0) {
          method = (MethodInfo *)&UNK_?;
          MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_RemoveInputLink
                    ((MVWorldObject *)inputWo,(Link_1 *)link,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          MVar4 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
          if (MVar4 != MVGameMode__Enum_Edit) {
            return 1;
          }
          pDVar3 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)(pLVar1->fields).linkObjects;
          if ((pDVar3 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                          *)0x0) &&
             (this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                  (pDVar3,(link->fields)._.id,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_LinkObjectScript>__get_Item_int_
                                  ), this_01 != (TerrainUtility_TerrainMap *)0x0)) {
            obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)this_01,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                      ((Object_1 *)obj,(MethodInfo *)0x0);
            pDVar3 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      *)(pLVar1->fields).linkObjects;
            if (pDVar3 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                           *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
              Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                        (pDVar3,(link->fields)._.id,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_LinkObjectScript>__Remove_int_
                        );
              return 1;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar2 = (*pcVar5)();
  return bVar2;
}


/* Void Update() */

void Assembly-CSharp.dll::Links::Links_Update(Links *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  MVar4 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar4 == MVGameMode__Enum_Edit) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_02 = (MVBuildModeAvatarLocal_EditMode *)
              MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (this_02 == (MVBuildModeAvatarLocal_EditMode *)0x0) {
code_?:
      func_?();
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar6 = MVBuildModeAvatarLocal+EditMode::MVBuildModeAvatarLocal_EditMode_get_MovementConstrained
                      (this_02,(MethodInfo *)0x0);
    if (bVar6 != 0) {
      this_00 = (this->fields).links;
      if ((this_00 == (Dictionary_2_System_Int32_MV_WorldObject_Link_ *)0x0) ||
         (method_00 = (MethodInfo *)
                      mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[WinningConditionType,System::Object]::
                      Dictionary_2_WinningConditionType_System_Object__get_Values
                                ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__get_Values__
                                ), method_00 == (MethodInfo *)0x0)) goto code_?;
      mscorlib.dll::System::Collections::Generic::
      Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
      Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                  *)&stack0xffffffbc,
                 (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)
                 method_00,
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MV::WorldObject::Link>__GetEnumerator__
                );
      uStack_1 = 0;
      while (cVar7 = func_?(), cVar7 != '\0') {
        link = (Link_1 *)func_?();
        this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)(this->fields).linkObjects;
        if (((link == (Link_1 *)0x0) ||
            (this_01 ==
             (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)0x0)) ||
           (this_03 = (LinkObjectScript *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                (this_01,(link->fields).id,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_LinkObjectScript>__get_Item_int_
                                ), this_03 == (LinkObjectScript *)0x0)) goto code_?;
        LinkObjectScript::LinkObjectScript_UpdateLinkVisual(this_03,link,method_00);
      }
      uStack_1 = 0xffffffff;
      func_?();
    }
  }
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* Links() */

void Assembly-CSharp.dll::Links::Links__ctor(Links *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_MV_WorldObject_Link_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__Dictionary__
            );
  (this->fields).links = this_00;
  method_00 = TypeInfo__System__Collections__Generic__Dictionary<int,_LinkObjectScript>;
  this_01 = (Dictionary_2_System_Int32_LinkObjectScript_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_LinkObjectScript>__Dictionary__
            );
  (this->fields).linkObjects = this_01;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  return;
}

