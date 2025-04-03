
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
  pDVar1 = (Delegate *)&(this->fields).cubeModelButton;
  original = *(UnityAction_1_System_Byte___Class **)pDVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pCVar2 = (CreateNewCubeModel *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      CreateNewCubeModel_MethodInfo__UnityEngine__Object__Instantiate<CreateNewCubeModel>_CreateNewCubeModel_
                     );
  *(CreateNewCubeModel **)pDVar1 = pCVar2;
  func_?(pDVar1,pCVar2);
  if (*(CreateNewCubeModel **)pDVar1 == (CreateNewCubeModel *)0x0) {
code_?:
    func_?();
  }
  else {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)*(CreateNewCubeModel **)pDVar1,(MethodInfo *)0x0);
    if (this_00 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (this_00,parent,0,(MethodInfo *)0x0);
    if (*(CreateNewCubeModel **)pDVar1 == (CreateNewCubeModel *)0x0) goto code_?;
    ((*(CreateNewCubeModel **)pDVar1)->fields).currentByteMaterial = materialId;
    if (materialsController == (MaterialsController *)0x0) goto code_?;
    a = (materialsController->fields).materialChange;
    pCVar2 = *(CreateNewCubeModel **)pDVar1;
    this_01 = (UnityAction_1_System_Int32Enum_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_01,(Object *)pCVar2,
               MethodInfo__CreateNewCubeModel__UpdateButtonTextures_unsigned_char_,(MethodInfo *)0x0
              );
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)this_01,(MethodInfo *)0x0);
    original = TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>;
    if (pDVar1 == (Delegate *)0x0) {
      pUStack3 = (UnityAction_1_System_Byte___Class *)0x20;
      iRam_? = 0;
      pUStack4 = (UnityAction_1_System_Byte___Class *)pDVar1;
      func_?();
      return;
    }
    pUStack4 = TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>;
    pUStack3 = (UnityAction_1_System_Byte___Class *)pDVar1;
    iVar5 = func_?();
    unaff_EBX = TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>;
    if (iVar5 == 0) goto code_?;
    original = (UnityAction_1_System_Byte___Class *)0x20;
    pUStack4 = TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>;
    pUStack3 = (UnityAction_1_System_Byte___Class *)pDVar1;
    iRam_? = iVar5;
    pUStack4 = (UnityAction_1_System_Byte___Class *)func_?();
    if (pUStack4 != (UnityAction_1_System_Byte___Class *)0x0) {
      pUStack3 = original;
      func_?();
      return;
    }
  }
  pUStack3 = (UnityAction_1_System_Byte___Class *)pDVar1;
  pUStack4 = unaff_EBX;
  func_?();
code_?:
  pUStack3 = (UnityAction_1_System_Byte___Class *)pDVar1;
  pUStack4 = original;
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

