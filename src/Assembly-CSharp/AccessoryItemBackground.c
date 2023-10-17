
/* Void Initialize(AccessoryDataClient) */

void Assembly-CSharp.dll::AccessoryItemBackground::AccessoryItemBackground_Initialize
               (AccessoryItemBackground *this,AccessoryDataClient *accessoryData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__get_Item_int_
                   );
    func_?(&TypeInfo__Styles);
    cRam_? = '\x01';
  }
  if (accessoryData != (AccessoryDataClient *)0x0) {
    if (((accessoryData->fields)._.lvl == 0) || ((accessoryData->fields)._.cost != 0)) {
      iVar1 = (accessoryData->fields)._.cost;
      if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Styles);
      }
      pRVar2 = Styles::Styles_GetAccessoryColorsFromPrice(iVar1,(MethodInfo *)0x0);
    }
    else {
      iVar1 = (accessoryData->fields)._.lvl;
      if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Styles);
      }
      pRVar2 = Styles::Styles_GetAccessoryColorsFromLevel(iVar1,(MethodInfo *)0x0);
    }
    if ((pRVar2 != (RarityStylesDef *)0x0) &&
       (pIVar3 = (this->fields).rarityImage, pIVar3 != (Image *)0x0)) {
      (*(pIVar3->klass->vtable).set_color.methodPtr)
                (pIVar3,(pRVar2->fields).backgroundColor.r,(pRVar2->fields).backgroundColor.g,
                 (pRVar2->fields).backgroundColor.b,(pRVar2->fields).backgroundColor.a,
                 (pIVar3->klass->vtable).set_color.method);
      pIVar3 = (this->fields).glowImage;
      if (pIVar3 != (Image *)0x0) {
        (*(pIVar3->klass->vtable).set_color.methodPtr)
                  (pIVar3,(pRVar2->fields).glowColor.r,(pRVar2->fields).glowColor.g,
                   (pRVar2->fields).glowColor.b,(pRVar2->fields).glowColor.a,
                   (pIVar3->klass->vtable).set_color.method);
        pIVar3 = (this->fields).backgroundRay;
        if ((pIVar3 != (Image *)0x0) &&
           (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pIVar3,(MethodInfo *)0x0), pGVar4 != (GameObject *)0x0)
           ) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar4,0,(MethodInfo *)0x0);
          if ((accessoryData->fields)._.owns != 0) {
            return;
          }
          pIVar3 = (this->fields).backgroundRay;
          if ((pIVar3 != (Image *)0x0) &&
             (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pIVar3,(MethodInfo *)0x0),
             pGVar4 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar4,(accessoryData->fields)._.iFtr,(MethodInfo *)0x0);
            pAVar5 = AccessoryDataManager::AccessoryDataManager_get_AccessoryBundleClient
                               ((MethodInfo *)0x0);
            if (pAVar5 != (AccessoryBundleClient *)0x0) {
              this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        (pAVar5->fields)._.accessoryBundleItems;
              index = 0;
              if (this_00 !=
                  (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
                while( true ) {
                  if ((this_00->fields)._size <= index) {
                    return;
                  }
                  RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                          RegularExpressions::RegexCharClass+SingleRange]::
                          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                    (this_00,index,
                                     MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__get_Item_int_
                                    );
                  if (RVar6 == (RegexCharClass_SingleRange)0x0) goto code_?;
                  if (*(int *)((int)RVar6 + 0xc) == (accessoryData->fields)._.aMDID) break;
                  index = index + 1;
                }
                pIVar3 = (this->fields).backgroundRay;
                if ((pIVar3 != (Image *)0x0) &&
                   (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_gameObject((Component *)pIVar3,(MethodInfo *)0x0),
                   pGVar4 != (GameObject *)0x0)) {
                  if (pcRam_? == (code *)0x0) {
                    pcRam_? = (code *)func_?(&UNK_?,unaff_EBP);
                  }
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
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

