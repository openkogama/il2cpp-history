
/* Void Initialize(RawImage, AvatarRepositoryItem) */

void Assembly-CSharp.dll::AvatarPurchasePopup::AvatarPurchasePopup_Initialize
               (AvatarPurchasePopup *this,RawImage *image,AvatarRepositoryItem *item,
               MethodInfo *method)

{
  pTVar1 = (this->fields).avatarGoldCost;
  (this->fields).item = item;
  if (item != (AvatarRepositoryItem *)0x0) {
    uVar2 = func_?(&(item->fields).priceGold,0);
    if (pTVar1 != (Text *)0x0) {
      (*(code *)(pTVar1->klass->vtable).set_text.method)
                (pTVar1,uVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      this_00 = (this->fields).avatarImage;
      if (image != (RawImage *)0x0) {
        value = PrefabPool::PrefabPool_get_MVCheckpointPrefab((PrefabPool *)image,(MethodInfo *)0x0)
        ;
        if (this_00 != (RawImage *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                    (this_00,(Texture *)value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnPurchaseClicked() */

void Assembly-CSharp.dll::AvatarPurchasePopup::AvatarPurchasePopup_OnPurchaseClicked
               (AvatarPurchasePopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPurchaseAvatar>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__AvatarPurchasePopup___OnPurchaseClicked_m__0_UnityEngine__EventSystems__IPurchaseAvatar__UnityEngine__EventSystems__BaseEventData_
             ,
             MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPurchaseAvatar>__EventFunction_System__Object__void__
            );
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPurchaseAvatar>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPurchaseAvatar>_
            );
  return;
}


/* Void <OnPurchaseClicked>m__0(IPurchaseAvatar, BaseEventData) */

void Assembly-CSharp.dll::AvatarPurchasePopup::AvatarPurchasePopup__OnPurchaseClicked_m__0
               (AvatarPurchasePopup *this,IPurchaseAvatar *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
          iVar5 = pIVar2->interfaceOffsets[uVar3].offset;
          (*(code *)(&x->klass->vtable)[iVar5].PurchaseAvatar.method)
                    (x,pAVar1,(&x->klass[1]._0.image)[iVar5 * 2]);
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
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

