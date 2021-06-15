
/* Void Initialize(MaterialsController, Transform, Byte) */

void Assembly-CSharp.dll::CreateCubeModelController::CreateCubeModelController_Initialize
               (CreateCubeModelController *this,MaterialsController *materialsController,
               Transform *parent,uint8_t materialId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pXVar1 = (XpBoostParticlePreviewer *)(this->fields).cubeModelButton;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (pXVar1,
                      CreateNewCubeModel_MethodInfo__UnityEngine__Object__Instantiate<CreateNewCubeModel>_CreateNewCubeModel_
                     );
  (this->fields).cubeModelButton = (CreateNewCubeModel *)pXVar1;
  if ((pXVar1 != (XpBoostParticlePreviewer *)0x0) &&
     (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)pXVar1,(MethodInfo *)0x0), this_00 != (Transform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (this_00,parent,0,(MethodInfo *)0x0);
    pCVar2 = (this->fields).cubeModelButton;
    if ((pCVar2 != (CreateNewCubeModel *)0x0) &&
       ((pCVar2->fields).currentByteMaterial = materialId,
       materialsController != (MaterialsController *)0x0)) {
      a = (materialsController->fields).materialChange;
      pCVar2 = (this->fields).cubeModelButton;
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)pCVar2,
                 MethodInfo__CreateNewCubeModel__UpdateButtonTextures_unsigned_char_,
                 MethodInfo__UnityEngine__Events__UnityAction<unsigned_char>__UnityAction_System__Object__void__
                );
      pDStack3 =
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)a,(Delegate *)this_01,(MethodInfo *)0x0);
      if (pDStack3 == (Delegate *)0x0) {
        pDRam0000002c = (Delegate *)0x0;
        return;
      }
      pDVar4 = (Delegate *)0x0;
      if ((UnityAction_1_System_Byte___Class *)pDStack3->klass ==
          TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>) {
        pDVar4 = pDStack3;
      }
      pUStack5 = TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>;
      if (pDVar4 != (Delegate *)0x0) {
        pDRam0000002c = pDVar4;
        return;
      }
      goto code_?;
    }
  }
  func_?();
  pDStack3 = extraout_ECX;
  pUStack5 = extraout_EDX;
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

