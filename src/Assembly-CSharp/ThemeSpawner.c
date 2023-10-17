
/* Void Start() */

void Assembly-CSharp.dll::ThemeSpawner::ThemeSpawner_Start(ThemeSpawner *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&Theme_MethodInfo__UnityEngine__Object__Instantiate<Theme>_Theme_);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Animals);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ThemeRepository);
    cRam_? = '\x01';
  }
  this_00 = TypeInfo__ThemeRepository->static_fields->_Instance_k__BackingField;
  if (this_00 != (ThemeRepository *)0x0) {
    pTVar1 = ThemeRepository::ThemeRepository_GetThemePrefab
                       (this_00,StringLiteral_Animals,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar1 = (Theme *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                ((Object *)pTVar1,
                                 Theme_MethodInfo__UnityEngine__Object__Instantiate<Theme>_Theme_);
    if (pTVar1 != (Theme *)0x0) {
      Theme::Theme_InitializeForPreview(pTVar1,(MethodInfo *)0x0);
      Theme::Theme_Activate(pTVar1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

