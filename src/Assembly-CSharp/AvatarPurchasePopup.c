
/* Void Initialize(RawImage, AvatarRepositoryItem) */

void Assembly-CSharp.dll::AvatarPurchasePopup::AvatarPurchasePopup_Initialize
               (AvatarPurchasePopup *this,RawImage *image,AvatarRepositoryItem *item,
               MethodInfo *method)

{
  (this->fields).item = item;
  func_?(&(this->fields).item,item);
  pTVar1 = (this->fields).avatarGoldCost;
  if (item != (AvatarRepositoryItem *)0x0) {
    pSVar2 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&(item->fields).priceGold,(MethodInfo *)0x0);
    if (pTVar1 != (Text *)0x0) {
      (*(code *)(pTVar1->klass->vtable).set_text.method)
                (pTVar1,pSVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      if ((image != (RawImage *)0x0) &&
         (this_00 = (this->fields).avatarImage, this_00 != (RawImage *)0x0)) {
        UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                  (this_00,(image->fields).m_Texture,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnPurchaseClicked() */

void Assembly-CSharp.dll::AvatarPurchasePopup::AvatarPurchasePopup_OnPurchaseClicked
               (AvatarPurchasePopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__AvatarPurchasePopup___OnPurchaseClicked_b__4_0_UnityEngine__EventSystems__IPurchaseAvatar__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPurchaseAvatar>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPurchaseAvatar>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPurchaseAvatar>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  callbackFunction =
       (ExecuteEvents_EventFunction_1_System_Object_ *)
       func_?(
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPurchaseAvatar>
                      );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
             MethodInfo__AvatarPurchasePopup___OnPurchaseClicked_b__4_0_UnityEngine__EventSystems__IPurchaseAvatar__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPurchaseAvatar>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPurchaseAvatar>_
            );
  return;
}


/* Void <OnPurchaseClicked>b__4_0(IPurchaseAvatar, BaseEventData) */

void Assembly-CSharp.dll::AvatarPurchasePopup::AvatarPurchasePopup__OnPurchaseClicked_b__4_0
               (AvatarPurchasePopup *this,IPurchaseAvatar *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IPurchaseAvatar);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).item;
  if (x != (IPurchaseAvatar *)0x0) {
    pIVar2 = x->klass;
    uVar3 = 0;
    uVar4._0_1_ = (pIVar2->_1).rank;
    uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IPurchaseAvatar) {
          pIVar2 = x->klass;
          iVar5 = pIVar2->interfaceOffsets[uVar3].offset;
          (*(code *)(&pIVar2->vtable)[iVar5].PurchaseAvatar.method)
                    (x,pAVar1,(&pIVar2[1]._0.image)[iVar5 * 2]);
          return;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    puVar6 = (undefined4 *)func_?(x,TypeInfo__UnityEngine__EventSystems__IPurchaseAvatar,0)
    ;
    (*(code *)*puVar6)(x,pAVar1,puVar6[1]);
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

