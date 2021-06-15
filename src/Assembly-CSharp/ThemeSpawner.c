
/* Void Start() */

void Assembly-CSharp.dll::ThemeSpawner::ThemeSpawner_Start(ThemeSpawner *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = TypeInfo__ThemeRepository->static_fields->_Instance_k__BackingField;
  if (this_00 != (ThemeRepository *)0x0) {
    pXVar1 = (XpBoostParticlePreviewer *)
             ThemeRepository::ThemeRepository_GetThemePrefab
                       (this_00,StringLiteral_Animals,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       (pXVar1,Theme_MethodInfo__UnityEngine__Object__Instantiate<Theme>_Theme_);
    if (pXVar1 != (XpBoostParticlePreviewer *)0x0) {
      Theme::Theme_InitializeForPreview((Theme *)pXVar1,(MethodInfo *)0x0);
      Theme::Theme_Activate((Theme *)pXVar1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

