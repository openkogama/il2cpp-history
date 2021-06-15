
/* Boolean AddObjectLink(ObjectLink, MVWorldObjectClient, MVWorldObjectClient) */

bool Assembly-CSharp.dll::ObjectLinks::ObjectLinks_AddObjectLink
               (ObjectLinks *this,ObjectLink *objectLink,MVWorldObjectClient *objectConnectorWo,
               MVWorldObjectClient *objectWo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((objectLink != (ObjectLink *)0x0) &&
       (this_00 = (this->fields).objectLinks,
       this_00 != (Dictionary_2_System_Int32_MV_WorldObject_ObjectLink_ *)0x0)) &&
      (mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
       Dictionary_2_System_Int32_System_Object__Add
                 ((Dictionary_2_System_Int32_System_Object_ *)this_00,(objectLink->fields).id,
                  (Object *)objectLink,
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Add_int__MV__WorldObject__ObjectLink_
                 ), objectConnectorWo != (MVWorldObjectClient *)0x0)) &&
     (MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_AddObjectLink
                ((MVWorldObject *)objectConnectorWo,objectLink,(MethodInfo *)0x0),
     objectWo != (MVWorldObjectClient *)0x0)) {
    MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_AddObjectLink
              ((MVWorldObject *)objectWo,objectLink,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (MVar1 != MVGameMode__Enum_Edit) {
      return 1;
    }
    if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
      func_?(TypeInfo__PrefabPool);
    }
    this_03 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
    if (this_03 != (PrefabPool *)0x0) {
      pOVar2 = PrefabPool::PrefabPool_get_ObjectLinkObject(this_03,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pOVar2 = (ObjectLinkObjectScript *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                         ((XpBoostParticlePreviewer *)pOVar2,
                          ObjectLinkObjectScript_MethodInfo__UnityEngine__Object__Instantiate<ObjectLinkObjectScript>_ObjectLinkObjectScript_
                         );
      if (pOVar2 != (ObjectLinkObjectScript *)0x0) {
        (pOVar2->fields)._.isObjectLink = 1;
        (pOVar2->fields)._.linkID = (objectLink->fields).id;
        ObjectLinkObjectScript::ObjectLinkObjectScript_UpdateLinkVisual
                  (pOVar2,objectLink,(MethodInfo *)0x0);
        this_01 = (pOVar2->fields).lineRenderer;
        if (this_01 != (LineRenderer *)0x0) {
          this_04 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                              ((Renderer *)this_01,(MethodInfo *)0x0);
          pCVar3 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_yellow
                             ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
          if (this_04 != (Material *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                      (this_04,*pCVar3,(MethodInfo *)0x0);
            this_02 = (this->fields).objectLinkObjects;
            if (this_02 != (Dictionary_2_System_Int32_ObjectLinkObjectScript_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__Add
                        ((Dictionary_2_System_Int32_System_Object_ *)this_02,(objectLink->fields).id
                         ,(Object *)pOVar2,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>__Add_int__ObjectLinkObjectScript_
                        );
              return 1;
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Boolean Contains(Int32) */

bool Assembly-CSharp.dll::ObjectLinks::ObjectLinks_Contains
               (ObjectLinks *this,int32_t objectLinkID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).objectLinks;
  if (this_00 != (Dictionary_2_System_Int32_MV_WorldObject_ObjectLink_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,objectLinkID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__ContainsKey_int_
                      );
    return bVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* ObjectLink GetObjectLink(Int32) */

ObjectLink *
Assembly-CSharp.dll::ObjectLinks::ObjectLinks_GetObjectLink
          (ObjectLinks *this,int32_t objectLinkID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).objectLinks;
  if (this_00 != (Dictionary_2_System_Int32_MV_WorldObject_ObjectLink_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,objectLinkID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_objectLinkID_not_found,(MethodInfo *)0x0);
      return (ObjectLink *)0x0;
    }
    this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)(this->fields).objectLinks;
    if (this_01 !=
        (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
        0x0) {
      pTVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
               Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
               Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                         (this_01,objectLinkID,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__get_Item_int_
                         );
      return (ObjectLink *)pTVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pOVar4 = (ObjectLink *)(*pcVar3)();
  return pOVar4;
}


/* Boolean RemoveObjectLink(ObjectLink, MVWorldObjectClient, MVWorldObjectClient) */

bool Assembly-CSharp.dll::ObjectLinks::ObjectLinks_RemoveObjectLink
               (ObjectLinks *this,ObjectLink *link,MVWorldObjectClient *objectConnectorWo,
               MVWorldObjectClient *objectWo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((link != (ObjectLink *)0x0) &&
     (this_00 = (this->fields).objectLinks,
     this_00 != (Dictionary_2_System_Int32_MV_WorldObject_ObjectLink_ *)0x0)) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,(link->fields).id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Attempt_to_remove_ObjectLink__bu,(MethodInfo *)0x0);
      return 0;
    }
    pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)(this->fields).objectLinks;
    if (((pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)0x0) &&
        (mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
         Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
         Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                   (pDVar2,(link->fields).id,
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Remove_int_
                   ), objectConnectorWo != (MVWorldObjectClient *)0x0)) &&
       (MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_RemoveObjectLink
                  ((MVWorldObject *)objectConnectorWo,link,(MethodInfo *)0x0),
       objectWo != (MVWorldObjectClient *)0x0)) {
      MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_RemoveObjectLink
                ((MVWorldObject *)objectWo,link,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      MVar3 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
      if (MVar3 != MVGameMode__Enum_Edit) {
        return 1;
      }
      pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(this->fields).objectLinkObjects;
      if ((pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      *)0x0) &&
         (this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                              (pDVar2,(link->fields).id,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>__get_Item_int_
                              ), this_01 != (TerrainUtility_TerrainMap *)0x0)) {
        obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this_01,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)obj,(MethodInfo *)0x0);
        pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)(this->fields).objectLinkObjects;
        if (pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                    (pDVar2,(link->fields).id,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>__Remove_int_
                    );
          return 1;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar1 = (*pcVar4)();
  return bVar1;
}


/* Void Update() */

void Assembly-CSharp.dll::ObjectLinks::ObjectLinks_Update(ObjectLinks *this,MethodInfo *method)

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
      this_00 = (this->fields).objectLinks;
      if ((this_00 == (Dictionary_2_System_Int32_MV_WorldObject_ObjectLink_ *)0x0) ||
         (method_00 = (MethodInfo *)
                      mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[WinningConditionType,System::Object]::
                      Dictionary_2_WinningConditionType_System_Object__get_Values
                                ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__get_Values__
                                ), method_00 == (MethodInfo *)0x0)) goto code_?;
      mscorlib.dll::System::Collections::Generic::
      Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
      Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                  *)&stack0xffffffbc,
                 (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)
                 method_00,
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MV::WorldObject::ObjectLink>__GetEnumerator__
                );
      uStack_1 = 0;
      while (cVar7 = func_?(), cVar7 != '\0') {
        link = (ObjectLink *)func_?();
        this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)(this->fields).objectLinkObjects;
        if (((link == (ObjectLink *)0x0) ||
            (this_01 ==
             (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)0x0)) ||
           (this_03 = (ObjectLinkObjectScript *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                (this_01,(link->fields).id,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>__get_Item_int_
                                ), this_03 == (ObjectLinkObjectScript *)0x0)) goto code_?;
        ObjectLinkObjectScript::ObjectLinkObjectScript_UpdateLinkVisual(this_03,link,method_00);
      }
      uStack_1 = 0xffffffff;
      func_?();
    }
  }
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* ObjectLinks() */

void Assembly-CSharp.dll::ObjectLinks::ObjectLinks__ctor(ObjectLinks *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_MV_WorldObject_ObjectLink_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Dictionary__
            );
  (this->fields).objectLinks = this_00;
  method_00 = TypeInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>;
  this_01 = (Dictionary_2_System_Int32_ObjectLinkObjectScript_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>__Dictionary__
            );
  (this->fields).objectLinkObjects = this_01;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  return;
}

