
/* Void Initialize(MaterialsController, Transform, Byte) */

void Assembly-CSharp.dll::CreateCubeModelController::CreateCubeModelController_Initialize
               (CreateCubeModelController *this,MaterialsController *materialsController,
               Transform *parent,uint8_t materialId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__CreateNewCubeModel__UpdateButtonTextures_unsigned_char_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  CreateNewCubeModel_MethodInfo__UnityEngine__Object__Instantiate<CreateNewCubeModel>_CreateNewCubeModel_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).cubeModelButton;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pCVar1 = (CreateNewCubeModel *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pCVar1,
                      CreateNewCubeModel_MethodInfo__UnityEngine__Object__Instantiate<CreateNewCubeModel>_CreateNewCubeModel_
                     );
  bVar2 = iRam_? != 0;
  (this->fields).cubeModelButton = pCVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).cubeModelButton >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pCVar1 = (this->fields).cubeModelButton;
  if ((pCVar1 != (CreateNewCubeModel *)0x0) &&
     (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pCVar1,(MethodInfo *)0x0), this_00 != (Transform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (this_00,parent,0,(MethodInfo *)0x0);
    pCVar1 = (this->fields).cubeModelButton;
    if ((pCVar1 != (CreateNewCubeModel *)0x0) &&
       ((pCVar1->fields).currentByteMaterial = materialId,
       materialsController != (MaterialsController *)0x0)) {
      pUVar7 = (materialsController->fields).materialChange;
      pCVar1 = (this->fields).cubeModelButton;
      pDVar8 = (Delegate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
      FUN_?(pDVar8,pCVar1);
      pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pUVar7,pDVar8,(MethodInfo *)0x0);
      pUVar9 = TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>;
      if (pDVar8 == (Delegate *)0x0) {
        (materialsController->fields).materialChange = (UnityAction_1_System_Byte_ *)0x0;
      }
      else {
        pUVar7 = (UnityAction_1_System_Byte_ *)
                 FUN_?(pDVar8,TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
        if (pUVar7 == (UnityAction_1_System_Byte_ *)0x0) {
          FUN_?(pDVar8,pUVar9);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        (materialsController->fields).materialChange = pUVar7;
        pUVar9 = TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>;
        lVar4 = FUN_?(pDVar8,TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
        if (lVar4 == 0) {
          FUN_?(pDVar8,pUVar9);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&(materialsController->fields).materialChange >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      return;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

