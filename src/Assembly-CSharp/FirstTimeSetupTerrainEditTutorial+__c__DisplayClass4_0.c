
/* Void <OnShow>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeSetupTerrainEditTutorial+<>c__DisplayClass4_0::
     FirstTimeSetupTerrainEditTutorial_c_DisplayClass4_0__OnShow_b__0
               (FirstTimeSetupTerrainEditTutorial_c_DisplayClass4_0 *this,IUIStack *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).terrainCubeModelingControllerTutorial;
  if (this_00 != (TerrainCubeModelingControllerTutorial *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,pGVar1,
                      (this->fields).options,0,1);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

