
/* Void Initialize(MaterialsController, Transform, Byte) */

void Assembly-CSharp.dll::CreateCubeModelController::CreateCubeModelController_Initialize
               (CreateCubeModelController *this,MaterialsController *materialsController,
               Transform *parent,uint8_t materialId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__CreateNewCubeModel__UpdateButtonTextures_unsigned_char_);
    func_?(&
                    CreateNewCubeModel_MethodInfo__UnityEngine__Object__Instantiate<CreateNewCubeModel>_CreateNewCubeModel_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
    cRam_? = '\x01';
  }
  original = (Delegate *)(this->fields).cubeModelButton;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pCVar1 = (CreateNewCubeModel *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      CreateNewCubeModel_MethodInfo__UnityEngine__Object__Instantiate<CreateNewCubeModel>_CreateNewCubeModel_
                     );
  (this->fields).cubeModelButton = pCVar1;
  func_?(&(this->fields).cubeModelButton,pCVar1);
  pCVar1 = (this->fields).cubeModelButton;
  if (pCVar1 == (CreateNewCubeModel *)0x0) {
code_?:
    func_?();
  }
  else {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pCVar1,(MethodInfo *)0x0);
    if (this_00 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (this_00,parent,0,(MethodInfo *)0x0);
    pCVar1 = (this->fields).cubeModelButton;
    if (pCVar1 == (CreateNewCubeModel *)0x0) goto code_?;
    (pCVar1->fields).currentByteMaterial = materialId;
    if (materialsController == (MaterialsController *)0x0) goto code_?;
    a = (materialsController->fields).materialChange;
    pCVar1 = (this->fields).cubeModelButton;
    this_01 = (UnityAction_1_System_Int32Enum_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_01,(Object *)pCVar1,
               MethodInfo__CreateNewCubeModel__UpdateButtonTextures_unsigned_char_,(MethodInfo *)0x0
              );
    original = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)a,(Delegate *)this_01,(MethodInfo *)0x0);
    this = (CreateCubeModelController *)TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>;
    if (original == (Delegate *)0x0) {
      iRam_? = 0;
      pDStack2 = (Delegate *)0x20;
      pUStack3 = (UnityAction_1_System_Byte___Class *)original;
      func_?();
      return;
    }
    pUStack3 = TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>;
    pDStack2 = original;
    iVar4 = func_?();
    unaff_EBX = TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>;
    if (iVar4 == 0) goto code_?;
    this = (CreateCubeModelController *)0x0;
    pUStack3 = TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>;
    pDStack2 = original;
    iRam_? = iVar4;
    pUStack3 = (UnityAction_1_System_Byte___Class *)func_?();
    if (pUStack3 != (UnityAction_1_System_Byte___Class *)0x0) {
      pDStack2 = (Delegate *)0x20;
      func_?();
      return;
    }
  }
  pDStack2 = original;
  pUStack3 = unaff_EBX;
  func_?();
code_?:
  pDStack2 = original;
  pUStack3 = (UnityAction_1_System_Byte___Class *)this;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

