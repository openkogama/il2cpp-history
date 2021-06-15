
/* Void PageTurned(Int32) */

void Assembly-CSharp.dll::PopupSlideshowController::PopupSlideshowController_PageTurned
               (PopupSlideshowController *this,int32_t dir,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).currentPage;
  iVar2 = dir + iVar1;
  pLVar3 = (this->fields).pages;
  index = (undefined1 *)(iVar2 + -1);
  if (pLVar3 != (List_1_UnityEngine_GameObject_ *)0x0) {
    pGVar4 = (GameObject *)
             mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
             IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                       ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar3,iVar1 + -1,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Item_int_
                       );
    if (pGVar4 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar4,0,(MethodInfo *)0x0);
      pLVar3 = (this->fields).pages;
      if (pLVar3 != (List_1_UnityEngine_GameObject_ *)0x0) {
        pGVar4 = (GameObject *)
                 mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar3,
                            (int32_t)index,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Item_int_
                           );
        if (pGVar4 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar4,1,(MethodInfo *)0x0);
          (this->fields).currentPage = iVar2;
          pTVar5 = (this->fields).currentPageText;
          pOVar6 = (Object *)func_?();
          pLVar3 = (this->fields).pages;
          if (pLVar3 != (List_1_UnityEngine_GameObject_ *)0x0) {
            mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
            Serialization::JsonProperty]::
            Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                      ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar3,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                      );
            arg2 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff8);
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__String);
            }
            pSVar7 = mscorlib.dll::System::String::String_Concat_1
                               (pOVar6,(Object *)::StringLiteral__,arg2,(MethodInfo *)0x0);
            if (pTVar5 != (Text *)0x0) {
              (*(code *)(pTVar5->klass->vtable).set_text.method)
                        (pTVar5,pSVar7,
                         (pTVar5->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
              if ((this->fields).lastPageHasPageControls == 0) {
                pLVar3 = (this->fields).pages;
                pGVar4 = (this->fields).pageControls;
                if (pLVar3 == (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
                pOVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                         Json::Serialization::JsonProperty]::
                         Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                   ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                    pLVar3,
                                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                                   );
                if (pGVar4 == (GameObject *)0x0) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar4,index != (undefined1 *)((int)&pOVar6[-1].monitor + 3),
                           (MethodInfo *)0x0);
              }
              pDVar8 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                        *)(this->fields).pageLeft;
              if (pDVar8 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                             *)0x0) {
                pGVar4 = (GameObject *)
                         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                         Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                                   (pDVar8,(MethodInfo *)0x0);
                if (pGVar4 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar4,0 < (int)index,(MethodInfo *)0x0);
                  pDVar8 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                            *)(this->fields).pageRight;
                  if (pDVar8 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                 *)0x0) {
                    pGVar4 = (GameObject *)
                             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]
                             ::
                             Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                                       (pDVar8,(MethodInfo *)0x0);
                    pLVar3 = (this->fields).pages;
                    if (pLVar3 != (List_1_UnityEngine_GameObject_ *)0x0) {
                      pOVar6 = mscorlib.dll::System::Collections::ObjectModel::
                               Collection`1[Newtonsoft::Json::Serialization::JsonProperty]::
                               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_
                                           *)pLVar3,
                                          MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                                         );
                      if (pGVar4 != (GameObject *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                  (pGVar4,(int)pLVar3 <= (int)((int)&pOVar6[-1].monitor + 3),
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
  }
code_?:
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::PopupSlideshowController::PopupSlideshowController_Start
               (PopupSlideshowController *this,MethodInfo *method)

{
  (this->fields).currentPage = 1;
  PopupSlideshowController_PageTurned(this,0,(MethodInfo *)0x0);
  return;
}


/* PopupSlideshowController() */

void Assembly-CSharp.dll::PopupSlideshowController::PopupSlideshowController__ctor
               (PopupSlideshowController *this,MethodInfo *method)

{
  (this->fields).lastPageHasPageControls = 1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

