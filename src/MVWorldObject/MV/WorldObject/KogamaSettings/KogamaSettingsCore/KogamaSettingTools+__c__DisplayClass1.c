
/* Void <RootDestinationContains>b__0(KeyValuePair`2[System.Object,System.Object]) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
     KogamaSettingTools+<>c__DisplayClass1::
     KogamaSettingTools_c_DisplayClass1__RootDestinationContains_b__0
               (KogamaSettingTools_c_DisplayClass1 *this,
               KeyValuePair_2_System_Object_System_Object_ deltaSettingNode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__ContainsKey_System__String_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                   );
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  if ((this->fields).contains == 0) {
    return;
  }
  pKVar1 = (this->fields).destinationNode;
  if (pKVar1 == (KogamaSettingWrapperBase *)0x0) {
code_?:
    func_?();
    pSVar2 = extraout_ECX;
    deltaSettingNode.key = unaff_ESI;
  }
  else {
    b = (String *)0x0;
    if (deltaSettingNode.key == (Object *)0x0) {
code_?:
      bVar3 = mscorlib.dll::System::String::String_op_Inequality
                        ((pKVar1->fields).key,b,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        return;
      }
      unaff_EBX = (this->fields).destinationNode;
      unaff_ESI = deltaSettingNode.key;
      if (unaff_EBX != (KogamaSettingWrapperBase *)0x0) {
        pKVar4 = 
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
        ;
        if (((unaff_EBX->klass->_1).typeHierarchyDepth <
             (
             TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
             ->_1).typeHierarchyDepth) ||
           ((unaff_EBX->klass->_1).typeHierarchy
            [(
             TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
             ->_1).typeHierarchyDepth - 1] !=
            (Il2CppClass *)
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
           )) goto code_?;
        if (unaff_EBX[1].klass != (KogamaSettingWrapperBase__Class *)0x0) {
          pOVar5 = (Object *)0x0;
          if (deltaSettingNode.key != (Object *)0x0) {
            if ((String__Class *)(deltaSettingNode.key)->klass == TypeInfo__System__String) {
              pOVar5 = deltaSettingNode.key;
            }
            pSVar2 = TypeInfo__System__String;
            if (pOVar5 == (Object *)0x0) goto code_?;
          }
          bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,GUILoginHandler+PlanetData]::
                  Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                            ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                             unaff_EBX[1].klass,pOVar5,
                             MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__ContainsKey_System__String_
                            );
          if (bVar3 == 0) {
            (this->fields).contains = 0;
            return;
          }
          if (unaff_EBX[1].klass != (KogamaSettingWrapperBase__Class *)0x0) {
            pOVar5 = (Object *)0x0;
            if (deltaSettingNode.key == (Object *)0x0) {
code_?:
              pKVar1 = (KogamaSettingWrapperBase *)
                       mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                 ((Dictionary_2_System_Object_System_Object_ *)unaff_EBX[1].klass,
                                  pOVar5,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                                 );
              (this->fields).destinationNode = pKVar1;
              func_?();
              return;
            }
            if ((String__Class *)(deltaSettingNode.key)->klass == TypeInfo__System__String) {
              pOVar5 = deltaSettingNode.key;
            }
            pSVar2 = TypeInfo__System__String;
            if (pOVar5 != (Object *)0x0) goto code_?;
            goto code_?;
          }
        }
      }
      goto code_?;
    }
    if ((String__Class *)(deltaSettingNode.key)->klass == TypeInfo__System__String) {
      b = (String *)deltaSettingNode.key;
    }
    pSVar2 = TypeInfo__System__String;
    if (b != (String *)0x0) goto code_?;
  }
code_?:
  func_?(deltaSettingNode.key,pSVar2);
  pKVar4 = extraout_EDX;
code_?:
  func_?(unaff_EBX,pKVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

