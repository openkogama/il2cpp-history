
/* Void HideLimit() */

void Assembly-CSharp.dll::WinningConditionAndroid::WinningConditionAndroid_HideLimit
               (WinningConditionAndroid *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).limit;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,TypeInfo__System__String->static_fields->Empty,
               (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetAdditionalInformation(String) */

void Assembly-CSharp.dll::WinningConditionAndroid::WinningConditionAndroid_SetAdditionalInformation
               (WinningConditionAndroid *this,String *info,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar1 = mscorlib.dll::System::String::String_op_Equality
                    (info,TypeInfo__System__String->static_fields->Empty,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return;
  }
  if (*(GameObject **)(unaff_ESI + 0x14) != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (*(GameObject **)(unaff_ESI + 0x14),1,(MethodInfo *)0x0);
    if (*(int **)(unaff_ESI + 0x10) != (int *)0x0) {
      iVar2 = **(int **)(unaff_ESI + 0x10);
      uStack3 = *(undefined4 *)(iVar2 + 0x30c);
      (**(code **)(iVar2 + 0x308))();
      return;
    }
  }
  uStack3 = 0;
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetLimit(Int32) */

void Assembly-CSharp.dll::WinningConditionAndroid::WinningConditionAndroid_SetLimit
               (WinningConditionAndroid *this,int32_t limit,MethodInfo *method)

{
  pTVar1 = (this->fields).limit;
  uVar2 = func_?(&limit,0);
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,uVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetSprite(Sprite) */

void Assembly-CSharp.dll::WinningConditionAndroid::WinningConditionAndroid_SetSprite
               (WinningConditionAndroid *this,Sprite *sprite,MethodInfo *method)

{
  this_00 = (this->fields).image;
  if (this_00 != (Image *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    bVar1 = UnityEngine.UI.dll::UnityEngine::UI::SetPropertyUtility::SetPropertyUtility_SetClass_8
                      ((AnimationTriggers **)&(this_00->fields).m_Sprite,(AnimationTriggers *)sprite
                       ,
                       bool_MethodInfo__UnityEngine__UI__SetPropertyUtility__SetClass<UnityEngine::Sprite>_UnityEngine__Sprite___UnityEngine__Sprite_
                      );
    if (bVar1 != 0) {
      (*(code *)(this_00->klass->vtable).SetAllDirty.method)(this_00);
      UnityEngine.UI.dll::UnityEngine::UI::Image::Image_TrackSprite(this_00,(MethodInfo *)0x0);
    }
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

