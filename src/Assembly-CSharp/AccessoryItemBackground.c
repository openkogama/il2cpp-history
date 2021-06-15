
/* Void Initialize(AccessoryDataClient) */

void Assembly-CSharp.dll::AccessoryItemBackground::AccessoryItemBackground_Initialize
               (AccessoryItemBackground *this,AccessoryDataClient *accessoryData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (accessoryData != (AccessoryDataClient *)0x0) {
    iVar1 = (accessoryData->fields)._.lvl;
    if ((iVar1 == 0) || ((accessoryData->fields)._.cost != 0)) {
      price = (accessoryData->fields)._.cost;
      if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Styles->_1).cctor_started == 0)) {
        func_?(TypeInfo__Styles);
      }
      pRVar2 = Styles::Styles_GetAccessoryColorsFromPrice(price,(MethodInfo *)0x0);
    }
    else {
      if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Styles->_1).cctor_started == 0)) {
        func_?(TypeInfo__Styles);
      }
      pRVar2 = Styles::Styles_GetAccessoryColorsFromLevel(iVar1,(MethodInfo *)0x0);
    }
    if ((pRVar2 != (RarityStylesDef *)0x0) &&
       (pIVar3 = (this->fields).rarityImage, pIVar3 != (Image *)0x0)) {
      (*(code *)(pIVar3->klass->vtable).set_color.method)
                (pIVar3,(pRVar2->fields).backgroundColor.r,(pRVar2->fields).backgroundColor.g,
                 (pRVar2->fields).backgroundColor.b,(pRVar2->fields).backgroundColor.a,
                 (pIVar3->klass->vtable).get_raycastTarget.methodPtr);
      pIVar3 = (this->fields).glowImage;
      if (pIVar3 != (Image *)0x0) {
        (*(code *)(pIVar3->klass->vtable).set_color.method)
                  (pIVar3,(pRVar2->fields).glowColor.r,(pRVar2->fields).glowColor.g,
                   (pRVar2->fields).glowColor.b,(pRVar2->fields).glowColor.a,
                   (pIVar3->klass->vtable).get_raycastTarget.methodPtr);
        pIVar3 = (this->fields).backgroundRay;
        if ((pIVar3 != (Image *)0x0) &&
           (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)pIVar3,(MethodInfo *)0x0),
           pGVar4 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar4,0,(MethodInfo *)0x0);
          if ((accessoryData->fields)._.owns != 0) {
            return;
          }
          pIVar3 = (this->fields).backgroundRay;
          if ((pIVar3 != (Image *)0x0) &&
             (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)pIVar3,(MethodInfo *)0x0),
             pGVar4 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar4,(accessoryData->fields)._.iFtr,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
              func_?(TypeInfo__AccessoryDataManager);
            }
            pAVar5 = AccessoryDataManager::AccessoryDataManager_get_AccessoryBundleClient
                               ((MethodInfo *)0x0);
            if (pAVar5 != (AccessoryBundleClient *)0x0) {
              this_00 = (pAVar5->fields)._.accessoryBundleItems;
              iVar1 = 0;
              if (this_00 != (List_1_MV_WorldObject_Accessories_AccessoryBundleItem_ *)0x0) {
                while( true ) {
                  pOVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                           Json::Serialization::JsonProperty]::
                           Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                     ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                      this_00,
                                      MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__get_Count__
                                     );
                  if ((int)pOVar6 <= iVar1) {
                    return;
                  }
                  pIVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                           EventSystems::IEventSystemHandler]::
                           List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                     ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                      this_00,iVar1,
                                      MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__get_Item_int_
                                     );
                  if (pIVar7 == (IEventSystemHandler *)0x0) goto code_?;
                  if (pIVar7[1].monitor == (MonitorData *)(accessoryData->fields)._.aMDID) break;
                  iVar1 = iVar1 + 1;
                }
                pIVar3 = (this->fields).backgroundRay;
                if ((pIVar3 != (Image *)0x0) &&
                   (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_1_get_gameObject((Component_1 *)pIVar3,(MethodInfo *)0x0),
                   pGVar4 != (GameObject *)0x0)) {
                  pcVar8 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar8 = (code *)func_?(&UNK_?,unaff_EBP),
                     pcVar8 == (code *)0x0)) {
                    uVar9 = func_?(&UNK_?,0,0);
                    func_?(uVar9);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pcRam_? = pcVar8;
                  (*pcRam_?)(pGVar4,1);
                  return;
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
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

