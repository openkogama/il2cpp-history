
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::TriggerCubeSettings::TriggerCubeSettings_Initialize
               (TriggerCubeSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_scaleX);
    func_?(&StringLiteral_scaleY);
    func_?(&StringLiteral_scaleZ);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_Initialize
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_TriggerCube,(MethodInfo *)0x0)
    ;
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_02 != (MVWorldObjectClientManager *)0x0) {
      pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_02,woID,(MethodInfo *)0x0);
      if (pMVar1 != (MVWorldObject *)0x0) {
        this_01 = (pMVar1->fields).data;
        pSVar2 = (this->fields).ScaleX;
        if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             (this_01,(Object *)StringLiteral_scaleX,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          if ((pSVar2 != (SettingsSlider *)0x0) && (pOVar3 != (Object *)0x0)) {
            if ((pOVar3->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
            goto code_?;
            pfVar4 = (float *)func_?();
            SettingsSlider::SettingsSlider_Initialize
                      (pSVar2,StringLiteral_scaleX,*pfVar4,0.5,20.0,(MethodInfo *)0x0);
            pSVar5 = (this->fields).ScaleXInput;
            pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                     ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                               (this_01,(Object *)StringLiteral_scaleX,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
            if ((pSVar5 != (SettingsInputFieldSlider *)0x0) && (pOVar3 != (Object *)0x0)) {
              if ((pOVar3->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
              goto code_?;
              pfVar4 = (float *)func_?();
              SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                        (pSVar5,StringLiteral_scaleX,*pfVar4,(MethodInfo *)0x0);
              pSVar2 = (this->fields).ScaleY;
              pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                 (this_01,(Object *)StringLiteral_scaleY,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              if ((pSVar2 != (SettingsSlider *)0x0) && (pOVar3 != (Object *)0x0)) {
                if ((pOVar3->klass->_0).element_class !=
                    (TypeInfo__System__Single->_0).element_class) goto code_?;
                pfVar4 = (float *)func_?();
                SettingsSlider::SettingsSlider_Initialize
                          (pSVar2,StringLiteral_scaleY,*pfVar4,0.5,20.0,(MethodInfo *)0x0);
                pSVar5 = (this->fields).ScaleYInput;
                pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                   (this_01,(Object *)StringLiteral_scaleY,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                   );
                if ((pSVar5 != (SettingsInputFieldSlider *)0x0) && (pOVar3 != (Object *)0x0)) {
                  if ((pOVar3->klass->_0).element_class !=
                      (TypeInfo__System__Single->_0).element_class) goto code_?;
                  pfVar4 = (float *)func_?();
                  SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                            (pSVar5,StringLiteral_scaleY,*pfVar4,(MethodInfo *)0x0);
                  pSVar2 = (this->fields).ScaleZ;
                  pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Object,System::Object]::
                           Dictionary_2_System_Object_System_Object__get_Item
                                     (this_01,(Object *)StringLiteral_scaleZ,
                                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                     );
                  if ((pSVar2 != (SettingsSlider *)0x0) && (pOVar3 != (Object *)0x0)) {
                    if ((pOVar3->klass->_0).element_class !=
                        (TypeInfo__System__Single->_0).element_class) goto code_?;
                    pfVar4 = (float *)func_?();
                    SettingsSlider::SettingsSlider_Initialize
                              (pSVar2,StringLiteral_scaleZ,*pfVar4,0.5,20.0,(MethodInfo *)0x0);
                    pSVar5 = (this->fields).ScaleZInput;
                    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Object,System::Object]::
                             Dictionary_2_System_Object_System_Object__get_Item
                                       (this_01,(Object *)StringLiteral_scaleZ,
                                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                       );
                    if ((pSVar5 != (SettingsInputFieldSlider *)0x0) && (pOVar3 != (Object *)0x0)) {
                      if ((pOVar3->klass->_0).element_class ==
                          (TypeInfo__System__Single->_0).element_class) {
                        pfVar4 = (float *)func_?();
                        SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                                  (pSVar5,StringLiteral_scaleZ,*pfVar4,(MethodInfo *)0x0);
                        return;
                      }
                      goto code_?;
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
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

