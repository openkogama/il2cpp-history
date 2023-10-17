
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
  a = (UnityAction_1_System_Byte___Class *)(this->fields).cubeModelButton;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pCVar1 = (CreateNewCubeModel *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)a,
                      CreateNewCubeModel_MethodInfo__UnityEngine__Object__Instantiate<CreateNewCubeModel>_CreateNewCubeModel_
                     );
  (this->fields).cubeModelButton = pCVar1;
  func_?(&(this->fields).cubeModelButton,pCVar1);
  pCVar1 = (this->fields).cubeModelButton;
  if (pCVar1 != (CreateNewCubeModel *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pCVar1,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (this_00,parent,0,(MethodInfo *)0x0);
      pCVar1 = (this->fields).cubeModelButton;
      if ((pCVar1 != (CreateNewCubeModel *)0x0) &&
         ((pCVar1->fields).currentByteMaterial = materialId,
         materialsController != (MaterialsController *)0x0)) {
        pCVar1 = (this->fields).cubeModelButton;
        a = (UnityAction_1_System_Byte___Class *)(materialsController->fields).materialChange;
        this_01 = (UnityAction_1_System_ByteEnum_ *)func_?();
        this = (CreateCubeModelController *)0x0;
        if (this_01 != (UnityAction_1_System_ByteEnum_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
          UnityAction_1_System_ByteEnum___ctor
                    (this_01,(Object *)pCVar1,
                     MethodInfo__CreateNewCubeModel__UpdateButtonTextures_unsigned_char_,
                     (MethodInfo *)0x0);
          this = (CreateCubeModelController *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)a,(Delegate *)this_01,(MethodInfo *)0x0);
          a = TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>;
          if ((Delegate *)this == (Delegate *)0x0) {
            (materialsController->fields).materialChange = (UnityAction_1_System_Byte_ *)0x0;
            pDStack2 = (Delegate *)&(materialsController->fields).materialChange;
            pUStack3 = (UnityAction_1_System_Byte___Class *)this;
            func_?();
            return;
          }
          pUStack3 = TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>;
          pDStack2 = (Delegate *)this;
          pUVar4 = (UnityAction_1_System_Byte_ *)func_?();
          if (pUVar4 != (UnityAction_1_System_Byte_ *)0x0) {
            (materialsController->fields).materialChange = pUVar4;
            a = TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>;
            pUStack3 = TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>;
            pDStack2 = (Delegate *)this;
            pUStack3 = (UnityAction_1_System_Byte___Class *)func_?();
            if (pUStack3 != (UnityAction_1_System_Byte___Class *)0x0) {
              pDStack2 = (Delegate *)&(materialsController->fields).materialChange;
              func_?();
              return;
            }
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  pDStack2 = (Delegate *)this;
  pUStack3 = a;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

