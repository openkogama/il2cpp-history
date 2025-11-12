
/* DesktopPlayMode() */

void Assembly-CSharp.dll::DesktopPlayMode::DesktopPlayMode__ctor
               (DesktopPlayMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__KeyCode);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  DesktopDefaultKeyboardMapping::DesktopDefaultKeyboardMapping__ctor
            ((DesktopDefaultKeyboardMapping *)this,(MethodInfo *)0x0);
  pDVar1 = (this->fields)._.keyMapping;
  pOVar2 = (Object *)FUN_?(TypeInfo__UnityEngine__KeyCode,2);
  if (pOVar2 != (Object *)0x0) {
    if ((*(int *)&pOVar2[1].monitor == 0) ||
       (*(undefined4 *)&pOVar2[2].klass = 0x77, *(uint *)&pOVar2[1].monitor < 2)) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(undefined4 *)((longlong)&pOVar2[2].klass + 4) = 0x111;
    if (pDVar1 != (Dictionary_2_KogamaControls_UnityEngine_KeyCode__1 *)0x0) {
      uVar4 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__TryInsert
                ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0,pOVar2,
                 (InsertionBehavior__Enum)uVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                 ->klass->rgctx_data[0x22].method);
      pDVar1 = (this->fields)._.keyMapping;
      pOVar2 = (Object *)FUN_?(TypeInfo__UnityEngine__KeyCode,2);
      if (pOVar2 != (Object *)0x0) {
        if ((*(int *)&pOVar2[1].monitor == 0) ||
           (*(undefined4 *)&pOVar2[2].klass = 0x73, *(uint *)&pOVar2[1].monitor < 2))
        goto code_?;
        *(undefined4 *)((longlong)&pOVar2[2].klass + 4) = 0x112;
        if (pDVar1 != (Dictionary_2_KogamaControls_UnityEngine_KeyCode__1 *)0x0) {
          uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]
          ::Dictionary_2_System_Int32Enum_System_Object__TryInsert
                    ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,3,pOVar2,
                     (InsertionBehavior__Enum)uVar4,
                     MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                     ->klass->rgctx_data[0x22].method);
          pDVar1 = (this->fields)._.keyMapping;
          pOVar2 = (Object *)FUN_?(TypeInfo__UnityEngine__KeyCode,2);
          if (pOVar2 != (Object *)0x0) {
            if ((*(int *)&pOVar2[1].monitor == 0) ||
               (*(undefined4 *)&pOVar2[2].klass = 0x61, *(uint *)&pOVar2[1].monitor < 2))
            goto code_?;
            *(undefined4 *)((longlong)&pOVar2[2].klass + 4) = 0x114;
            if (pDVar1 != (Dictionary_2_KogamaControls_UnityEngine_KeyCode__1 *)0x0) {
              uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__TryInsert
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,1,pOVar2,
                         (InsertionBehavior__Enum)uVar4,
                         MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                         ->klass->rgctx_data[0x22].method);
              pDVar1 = (this->fields)._.keyMapping;
              pOVar2 = (Object *)FUN_?(TypeInfo__UnityEngine__KeyCode,2);
              if (pOVar2 != (Object *)0x0) {
                if ((*(int *)&pOVar2[1].monitor == 0) ||
                   (*(undefined4 *)&pOVar2[2].klass = 100, *(uint *)&pOVar2[1].monitor < 2))
                goto code_?;
                *(undefined4 *)((longlong)&pOVar2[2].klass + 4) = 0x113;
                if (pDVar1 != (Dictionary_2_KogamaControls_UnityEngine_KeyCode__1 *)0x0) {
                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__TryInsert
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,2,pOVar2,
                             (InsertionBehavior__Enum)uVar4,
                             MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                             ->klass->rgctx_data[0x22].method);
                  pDVar1 = (this->fields)._.keyMapping;
                  pOVar2 = (Object *)FUN_?(TypeInfo__UnityEngine__KeyCode,2);
                  if (pOVar2 != (Object *)0x0) {
                    if ((*(int *)&pOVar2[1].monitor == 0) ||
                       (*(undefined4 *)&pOVar2[2].klass = 0x20, *(uint *)&pOVar2[1].monitor < 2))
                    goto code_?;
                    *(undefined4 *)((longlong)&pOVar2[2].klass + 4) = 0x100;
                    if (pDVar1 != (Dictionary_2_KogamaControls_UnityEngine_KeyCode__1 *)0x0) {
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::
                      Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0x21,pOVar2,
                                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar4 >> 8),2),
                                 MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                 ->klass->rgctx_data[0x22].method);
                      pDVar1 = (this->fields)._.keyMapping;
                      pOVar2 = (Object *)FUN_?(TypeInfo__UnityEngine__KeyCode,1);
                      if (pOVar2 != (Object *)0x0) {
                        if (*(int *)&pOVar2[1].monitor == 0) goto code_?;
                        *(undefined4 *)&pOVar2[2].klass = 0x143;
                        if (pDVar1 != (Dictionary_2_KogamaControls_UnityEngine_KeyCode__1 *)0x0) {
                          method_00 = MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                      ->klass->rgctx_data[0x22].method;
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32Enum,System::Object]::
                          Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                    ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0x20,
                                     pOVar2,(InsertionBehavior__Enum)
                                            CONCAT71((int7)((ulonglong)method_00 >> 8),2),method_00)
                          ;
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

