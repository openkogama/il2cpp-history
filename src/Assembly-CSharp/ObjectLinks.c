
/* Boolean AddObjectLink(ObjectLink, MVWorldObjectClient, MVWorldObjectClient) */

bool Assembly-CSharp.dll::ObjectLinks::ObjectLinks_AddObjectLink
               (ObjectLinks *this,ObjectLink *objectLink,MVWorldObjectClient *objectConnectorWo,
               MVWorldObjectClient *objectWo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Add_int__MV__WorldObject__ObjectLink_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>__Add_int__ObjectLinkObjectScript_
                   );
    func_?(&
                    ObjectLinkObjectScript_MethodInfo__UnityEngine__Object__Instantiate<ObjectLinkObjectScript>_ObjectLinkObjectScript_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((((objectLink != (ObjectLink *)0x0) &&
       (pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).objectLinks,
       pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0)) &&
      (mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
       Dictionary_2_System_Object_System_Object__Add
                 (pDVar1,(Object *)(objectLink->fields).id,(Object *)objectLink,
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Add_int__MV__WorldObject__ObjectLink_
                 ), objectConnectorWo != (MVWorldObjectClient *)0x0)) &&
     (MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_AddObjectLink
                ((MVWorldObject *)objectConnectorWo,objectLink,(MethodInfo *)0x0),
     objectWo != (MVWorldObjectClient *)0x0)) {
    MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_AddObjectLink
              ((MVWorldObject *)objectWo,objectLink,(MethodInfo *)0x0);
    MVar2 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (MVar2 != MVGameMode__Enum_Edit) {
      return 1;
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pPVar3 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar3 != (PrefabPool *)0x0) {
      pOVar4 = (pPVar3->fields).objectLinkObject;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar4 = (ObjectLinkObjectScript *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)pOVar4,
                          ObjectLinkObjectScript_MethodInfo__UnityEngine__Object__Instantiate<ObjectLinkObjectScript>_ObjectLinkObjectScript_
                         );
      if (pOVar4 != (ObjectLinkObjectScript *)0x0) {
        ObjectLinkObjectScript::ObjectLinkObjectScript_Initialize
                  (pOVar4,objectLink,(MethodInfo *)0x0);
        pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).objectLinkObjects;
        if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (pDVar1,(Object *)(objectLink->fields).id,(Object *)pOVar4,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>__Add_int__ObjectLinkObjectScript_
                    );
          return 1;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean Contains(Int32) */

bool Assembly-CSharp.dll::ObjectLinks::ObjectLinks_Contains
               (ObjectLinks *this,int32_t objectLinkID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).objectLinks;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)objectLinkID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__ContainsKey_int_
                      );
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* ObjectLink GetObjectLink(Int32) */

ObjectLink *
Assembly-CSharp.dll::ObjectLinks::ObjectLinks_GetObjectLink
          (ObjectLinks *this,int32_t objectLinkID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__get_Item_int_
                   );
    func_?(&StringLiteral_objectLinkID_not_found);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).objectLinks;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)objectLinkID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_objectLinkID_not_found,(MethodInfo *)0x0);
      return (ObjectLink *)0x0;
    }
    this_01 = (this->fields).objectLinks;
    if (this_01 != (Dictionary_2_System_Int32_MV_WorldObject_ObjectLink_ *)0x0) {
      pOVar2 = (ObjectLink *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,objectLinkID,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__get_Item_int_
                         );
      return pOVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pOVar2 = (ObjectLink *)(*pcVar3)();
  return pOVar2;
}


/* Boolean RemoveObjectLink(ObjectLink, MVWorldObjectClient, MVWorldObjectClient) */

bool Assembly-CSharp.dll::ObjectLinks::ObjectLinks_RemoveObjectLink
               (ObjectLinks *this,ObjectLink *link,MVWorldObjectClient *objectConnectorWo,
               MVWorldObjectClient *objectWo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Remove_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>__Remove_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>__get_Item_int_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Attempt_to_remove_ObjectLink__bu);
    cRam_? = '\x01';
  }
  if ((link != (ObjectLink *)0x0) &&
     (this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).objectLinks
     , this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)(link->fields).id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Attempt_to_remove_ObjectLink__bu,(MethodInfo *)0x0);
      return 0;
    }
    this_01 = (this->fields).objectLinks;
    if (((this_01 != (Dictionary_2_System_Int32_MV_WorldObject_ObjectLink_ *)0x0) &&
        (mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
         Dictionary_2_System_Int32_System_Object__Remove
                   ((Dictionary_2_System_Int32_System_Object_ *)this_01,(link->fields).id,
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Remove_int_
                   ), objectConnectorWo != (MVWorldObjectClient *)0x0)) &&
       (MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_RemoveObjectLink
                  ((MVWorldObject *)objectConnectorWo,link,(MethodInfo *)0x0),
       objectWo != (MVWorldObjectClient *)0x0)) {
      MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_RemoveObjectLink
                ((MVWorldObject *)objectWo,link,(MethodInfo *)0x0);
      MVar2 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
      if (MVar2 != MVGameMode__Enum_Edit) {
        return 1;
      }
      pDVar3 = (this->fields).objectLinkObjects;
      if ((pDVar3 != (Dictionary_2_System_Int32_ObjectLinkObjectScript_ *)0x0) &&
         (this_02 = (Component *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar3,
                               (link->fields).id,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>__get_Item_int_
                              ), this_02 != (Component *)0x0)) {
        obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_02,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)obj,(MethodInfo *)0x0);
        pDVar3 = (this->fields).objectLinkObjects;
        if (pDVar3 != (Dictionary_2_System_Int32_ObjectLinkObjectScript_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__Remove
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,(link->fields).id,
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__get_Values__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MV::WorldObject::ObjectLink>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MV::WorldObject::ObjectLink>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MV::WorldObject::ObjectLink>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MV::WorldObject::ObjectLink>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  MVar4 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar4 == MVGameMode__Enum_Edit) {
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (pMVar5 != (MainCameraManager *)0x0) {
      if ((pMVar5->fields).isLogicRendered == 0) goto code_?;
      this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                 *)(this->fields).objectLinks;
      if (this_00 !=
          (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0
         ) {
        this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                  RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                  Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
                            (this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__get_Values__
                            );
        if (this_02 !=
            (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
             *)0x0) {
          mscorlib.dll::System::Collections::Generic::
          Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
          Regex+CachedCodeEntryKey,System::Object]::
          Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                    ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                      *)&stack0xffffffd8,this_02,
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MV::WorldObject::ObjectLink>__GetEnumerator__
                    );
          this_03 = (ObjectLinkObjectScript *)0x0;
          uStack_1 = 1;
          while( true ) {
            link = 
            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MV::WorldObject::ObjectLink>__MoveNext__
            ;
            bVar6 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                    Object,System::Object]::
                    Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object_
                                *)&stack0xffffffc8,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MV::WorldObject::ObjectLink>__MoveNext__
                              );
            if (bVar6 == 0) break;
            this_01 = (this->fields).objectLinkObjects;
            if ((link == (MethodInfo *)0x0) ||
               (this_01 == (Dictionary_2_System_Int32_ObjectLinkObjectScript_ *)0x0))
            goto code_?;
            this_03 = (ObjectLinkObjectScript *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::
                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,
                                 (Int32Enum__Enum)link->invoker_method,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>__get_Item_int_
                                );
            if (this_03 == (ObjectLinkObjectScript *)0x0) goto code_?;
            ObjectLinkObjectScript::ObjectLinkObjectScript_UpdateLinkVisual
                      (this_03,(ObjectLink *)link,(MethodInfo *)0x0);
          }
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&stack0xffffffc8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MV::WorldObject::ObjectLink>__Dispose__
                     ,(MethodInfo *)this_03);
          goto code_?;
        }
      }
    }
code_?:
    func_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
code_?:
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* ObjectLinks() */

void Assembly-CSharp.dll::ObjectLinks::ObjectLinks__ctor(ObjectLinks *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_MV_WorldObject_ObjectLink_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>
                           );
  if (this_00 != (Dictionary_2_System_Int32_MV_WorldObject_ObjectLink_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Dictionary__
              );
    (this->fields).objectLinks = this_00;
    func_?(&this->fields,this_00);
    this_01 = (Dictionary_2_System_Int32_ObjectLinkObjectScript_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>
                             );
    if (this_01 != (Dictionary_2_System_Int32_ObjectLinkObjectScript_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>__Dictionary__
                );
      method_00 = (MethodInfo *)&(this->fields).objectLinkObjects;
      (this->fields).objectLinkObjects = this_01;
      func_?(method_00,this_01);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)this,ExceptionArgument__Enum_obj,method_00);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

