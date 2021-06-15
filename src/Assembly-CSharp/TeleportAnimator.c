
/* Void Awake() */

void Assembly-CSharp.dll::TeleportAnimator::TeleportAnimator_Awake
               (TeleportAnimator *this,MethodInfo *method)

{
  this_00 = (this->fields).teleportRenderer;
  if (this_00 != (Renderer *)0x0) {
    pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                       (this_00,(MethodInfo *)0x0);
    (this->fields)._material = pMVar1;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::TeleportAnimator::TeleportAnimator_Update
               (TeleportAnimator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._material;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  VStack_2.x = 0.0;
  VStack_2.y = 0.0;
  func_?(&VStack_2,fVar1 * _UNK_?,0,0);
  if (this_00 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureOffset
              (this_00,StringLiteral__MainTex,VStack_2,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

