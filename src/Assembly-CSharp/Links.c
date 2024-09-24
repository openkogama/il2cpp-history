
/* Void AddLink(Link, MVWorldObjectClient, MVWorldObjectClient) */

void Assembly-CSharp.dll::Links::Links_AddLink
               (Links *this,Link *link,MVWorldObjectClient *outputWo,MVWorldObjectClient *inputWo,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__Add_int__MV__WorldObject__Link_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_LinkObjectScript>__Add_int__LinkObjectScript_
                   );
    func_?(&
                    LinkObjectScript_MethodInfo__UnityEngine__Object__Instantiate<LinkObjectScript>_LinkObjectScript_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((((link != (Link *)0x0) &&
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
    MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (MVar1 != MVGameMode__Enum_Edit) {
      return;
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar2 != (PrefabPool *)0x0) {
      pLVar3 = (pPVar2->fields).linkObject;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pLVar3 = (LinkObjectScript *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)pLVar3,
                          LinkObjectScript_MethodInfo__UnityEngine__Object__Instantiate<LinkObjectScript>_LinkObjectScript_
                         );
      if (pLVar3 != (LinkObjectScript *)0x0) {
        LinkObjectScript::LinkObjectScript_Initialize(pLVar3,link,(MethodInfo *)0x0);
        this_01 = (this->fields).linkObjects;
        if (this_01 != (Dictionary_2_System_Int32_LinkObjectScript_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__Add
                    ((Dictionary_2_System_Int32_System_Object_ *)this_01,(link->fields).id,
                     (Object *)pLVar3,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_LinkObjectScript>__Add_int__LinkObjectScript_
                    );
          return;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean Contains(Int32) */

bool Assembly-CSharp.dll::Links::Links_Contains(Links *this,int32_t linkID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).links;
  if (this_00 != (Dictionary_2_System_Int32_MV_WorldObject_Link_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)this_00,linkID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__ContainsKey_int_
                      );
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Link GetLink(Int32) */

Link * Assembly-CSharp.dll::Links::Links_GetLink(Links *this,int32_t linkID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__get_Item_int_
                   );
    func_?(&StringLiteral_Link_not_found);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).links;
  if (pDVar1 != (Dictionary_2_System_Int32_MV_WorldObject_Link_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,linkID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__ContainsKey_int_
                      );
    if (bVar2 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_Link_not_found,(MethodInfo *)0x0);
      return (Link *)0x0;
    }
    pDVar1 = (this->fields).links;
    if (pDVar1 != (Dictionary_2_System_Int32_MV_WorldObject_Link_ *)0x0) {
      pLVar3 = (Link *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                       ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                 ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,linkID,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__get_Item_int_
                                 );
      return pLVar3;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pLVar3 = (Link *)(*pcVar4)();
  return pLVar3;
}


/* Boolean RemoveLink(Int32, MVWorldObjectClient, MVWorldObjectClient) */

bool Assembly-CSharp.dll::Links::Links_RemoveLink
               (Links *this,int32_t linkID,MVWorldObjectClient *outputWo,
               MVWorldObjectClient *inputWo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__Remove_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_LinkObjectScript>__Remove_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_LinkObjectScript>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__get_Item_int_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Attempt_to_remove_link_with_id__);
    func_?(&StringLiteral___but_link_not_registered_);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).links;
  if (pDVar1 != (Dictionary_2_System_Int32_MV_WorldObject_Link_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,linkID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__ContainsKey_int_
                      );
    if (bVar2 == 0) {
      str1 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&linkID,(MethodInfo *)0x0);
      message = (MethodInfo *)
                mscorlib.dll::System::String::String_Concat_4
                          (StringLiteral_Attempt_to_remove_link_with_id__,str1,
                           StringLiteral___but_link_not_registered_,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        method = (MethodInfo *)&UNK_?;
        func_?();
      }
      inputWo = (MVWorldObjectClient *)&UNK_?;
      method = message;
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)message,(MethodInfo *)0x0);
      return 0;
    }
    pDVar1 = (this->fields).links;
    if (((pDVar1 != (Dictionary_2_System_Int32_MV_WorldObject_Link_ *)0x0) &&
        (link = (MVWorldObjectClient *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__get_Item
                          ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,linkID,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__get_Item_int_
                          ), link != (MVWorldObjectClient *)0x0)) &&
       (pDVar1 = (this->fields).links,
       pDVar1 != (Dictionary_2_System_Int32_MV_WorldObject_Link_ *)0x0)) {
      linkID = (int32_t)
               MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__Remove_int_
      ;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__Remove
                ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,(link->fields)._.id,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__Remove_int_
                );
      if (outputWo != (MVWorldObjectClient *)0x0) {
        method = (MethodInfo *)0x0;
        linkID = (int32_t)&UNK_?;
        inputWo = link;
        MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_RemoveOutputLink
                  ((MVWorldObject *)outputWo,(Link *)link,(MethodInfo *)0x0);
        if (inputWo != (MVWorldObjectClient *)0x0) {
          method = (MethodInfo *)&UNK_?;
          MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_RemoveInputLink
                    ((MVWorldObject *)inputWo,(Link *)link,(MethodInfo *)0x0);
          MVar3 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
          if (MVar3 != MVGameMode__Enum_Edit) {
            return 1;
          }
          pDVar4 = (this->fields).linkObjects;
          if ((pDVar4 != (Dictionary_2_System_Int32_LinkObjectScript_ *)0x0) &&
             (this_00 = (Component *)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar4,
                                   (link->fields)._.id,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_LinkObjectScript>__get_Item_int_
                                  ), this_00 != (Component *)0x0)) {
            obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (this_00,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                      ((Object_1 *)obj,(MethodInfo *)0x0);
            pDVar4 = (this->fields).linkObjects;
            if (pDVar4 != (Dictionary_2_System_Int32_LinkObjectScript_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__Remove
                        ((Dictionary_2_System_Int32_System_Object_ *)pDVar4,(link->fields)._.id,
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_LinkObjectScript>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__get_Values__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MV::WorldObject::Link>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MV::WorldObject::Link>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MV::WorldObject::Link>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MV::WorldObject::Link>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  MVar4 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar4 == MVGameMode__Enum_Edit) {
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (pMVar5 != (MainCameraManager *)0x0) {
      if ((pMVar5->fields).isLogicRendered == 0) goto code_?;
      this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 *)(this->fields).links;
      if (this_00 !=
          (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
           *)0x0) {
        this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                            (this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__get_Values__
                            );
        if (this_02 !=
            (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          mscorlib.dll::System::Collections::Generic::
          Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
          StyleSheetCache+SheetHandleKey,System::Object]::
          Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                    ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                      *)&stack0xffffffd8,this_02,
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MV::WorldObject::Link>__GetEnumerator__
                    );
          this_03 = (LinkObjectScript *)0x0;
          uStack_1 = 1;
          while( true ) {
            link = 
            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MV::WorldObject::Link>__MoveNext__
            ;
            bVar6 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                    UInt32,System::Object]::
                    Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                *)&stack0xffffffc8,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MV::WorldObject::Link>__MoveNext__
                              );
            if (bVar6 == 0) break;
            this_01 = (this->fields).linkObjects;
            if ((link == (MethodInfo *)0x0) ||
               (this_01 == (Dictionary_2_System_Int32_LinkObjectScript_ *)0x0))
            goto code_?;
            this_03 = (LinkObjectScript *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                ((Dictionary_2_System_Int32_System_Object_ *)this_01,
                                 (int32_t)link->invoker_method,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_LinkObjectScript>__get_Item_int_
                                );
            if (this_03 == (LinkObjectScript *)0x0) goto code_?;
            LinkObjectScript::LinkObjectScript_UpdateLinkVisual
                      (this_03,(Link *)link,(MethodInfo *)0x0);
          }
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&stack0xffffffc8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MV::WorldObject::Link>__Dispose__
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


/* Links() */

void Assembly-CSharp.dll::Links::Links__ctor(Links *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_LinkObjectScript>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_LinkObjectScript>);
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>)
    ;
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__Dictionary__
            );
  (this->fields).links = (Dictionary_2_System_Int32_MV_WorldObject_Link_ *)pDVar1;
  func_?(&this->fields,pDVar1);
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_LinkObjectScript>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_LinkObjectScript>__Dictionary__
            );
  method_00 = (MethodInfo *)&(this->fields).linkObjects;
  (this->fields).linkObjects = (Dictionary_2_System_Int32_LinkObjectScript_ *)pDVar1;
  func_?(method_00,pDVar1);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}

