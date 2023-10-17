
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
      (*(pTVar1->klass->vtable).set_text.methodPtr)
                (pTVar1,pSVar2,(pTVar1->klass->vtable).set_text.method);
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
  if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
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
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
    uVar2 = 0;
    uVar3 = (x->klass->_1).interface_offsets_count;
    if (uVar3 != 0) {
      do {
        if (x->klass->interfaceOffsets[uVar2].interfaceType ==
            (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IPurchaseAvatar) {
          pIVar4 = &x->klass->vtable + x->klass->interfaceOffsets[uVar2].offset;
          (*(pIVar4->PurchaseAvatar).methodPtr)(x,pAVar1,(pIVar4->PurchaseAvatar).method);
          return;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
    puVar5 = (undefined4 *)func_?(x,TypeInfo__UnityEngine__EventSystems__IPurchaseAvatar,0)
    ;
    (*(code *)*puVar5)(x,pAVar1,puVar5[1]);
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

