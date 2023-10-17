
/* Void <ShowHighScore>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::GamePassesShopDetails+<>c__DisplayClass16_0::
     GamePassesShopDetails_c_DisplayClass16_0__ShowHighScore_b__0
               (GamePassesShopDetails_c_DisplayClass16_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).highScoreList;
  if (this_00 != (GamePassesHighScoreList *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
              ((Component *)this_00,(MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      pIStack_1 = x;
      func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack);
      return;
    }
  }
  uVar2 = func_?(&pIStack_1);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

