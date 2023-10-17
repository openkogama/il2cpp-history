
/* Void Register() */

void Assembly-CSharp.dll::OverrideMaterial::OverrideMaterial_Register
               (OverrideMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    this_00 = (pMVar1->fields)._MaterialRepository_k__BackingField;
    name = (this->fields).materialName;
    path = (this->fields).path;
    materialSound = (this->fields).materialSound;
    modifierPackageType = (this->fields).modifierPackageType;
    priceGold = (this->fields).priceGold;
    isUnlocked = (this->fields).isUnlocked;
    physicalProperties = (Single__Array *)func_?(TypeInfo__System__Single,5);
    if (physicalProperties != (Single__Array *)0x0) {
      if (physicalProperties->max_length == 0) goto code_?;
      physicalProperties->vector[0] = (this->fields).friction;
      if (physicalProperties->max_length < 2) goto code_?;
      physicalProperties->vector[1] = (this->fields).bouncyness;
      if (physicalProperties->max_length < 3) goto code_?;
      physicalProperties->vector[2] = (this->fields).softness;
      if (physicalProperties->max_length < 4) goto code_?;
      physicalProperties->vector[3] = (this->fields).staticFriction;
      if (physicalProperties->max_length < 5) goto code_?;
      physicalProperties->vector[4] = (this->fields).toughness;
      if (this_00 != (MVMaterialRepository *)0x0) {
        MVMaterialRepository::MVMaterialRepository_AddMaterial
                  (this_00,name,(String *)0x0,path,materialSound,modifierPackageType,priceGold,
                   isUnlocked,physicalProperties,(MaterialButtonTextureGenerator *)0x0,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* String ToString() */

String * Assembly-CSharp.dll::OverrideMaterial::OverrideMaterial_ToString
                   (OverrideMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Object);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_INSERT_INTO__Material____Name___);
    cRam_? = '\x01';
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,0xb);
  pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                     ((Object_1 *)this,(MethodInfo *)0x0);
  if (args == (Object__Array *)0x0) {
    func_?();
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
  }
  else {
    if (pSVar1 != (String *)0x0) {
      iVar3 = func_?(pSVar1,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)pSVar1;
    func_?(args->vector,pSVar1);
    pSVar1 = (this->fields).description;
    if (pSVar1 != (String *)0x0) {
      iVar3 = func_?(pSVar1,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (args->max_length < 2) goto code_?;
    args->vector[1] = (Object *)pSVar1;
    func_?(args->vector + 1,pSVar1);
    pSVar1 = (this->fields).path;
    if (pSVar1 != (String *)0x0) {
      iVar3 = func_?(pSVar1,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (args->max_length < 3) goto code_?;
    args->vector[2] = (Object *)pSVar1;
    func_?(args->vector + 2,pSVar1);
    iStack_4 = (this->fields).materialSound;
    pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&iStack_4);
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (args->max_length < 4) goto code_?;
    args->vector[3] = pOVar5;
    func_?(args->vector + 3,pOVar5);
    iStack_6 = (this->fields).modifierPackageType;
    pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&iStack_6);
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (args->max_length < 5) goto code_?;
    args->vector[4] = pOVar5;
    func_?(args->vector + 4,pOVar5);
    iStack_7 = (this->fields).priceGold;
    pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&iStack_7);
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (args->max_length < 6) goto code_?;
    args->vector[5] = pOVar5;
    func_?(args->vector + 5,pOVar5);
    fStack_8 = (this->fields).friction;
    pOVar5 = (Object *)func_?(TypeInfo__System__Single,&fStack_8);
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (args->max_length < 7) goto code_?;
    args->vector[6] = pOVar5;
    func_?(args->vector + 6,pOVar5);
    fStack_9 = (this->fields).bouncyness;
    pOVar5 = (Object *)func_?(TypeInfo__System__Single,&fStack_9);
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (args->max_length < 8) goto code_?;
    args->vector[7] = pOVar5;
    func_?(args->vector + 7,pOVar5);
    fStack_10 = (this->fields).softness;
    pOVar5 = (Object *)func_?(TypeInfo__System__Single,&fStack_10);
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (args->max_length < 9) goto code_?;
    args->vector[8] = pOVar5;
    func_?(args->vector + 8,pOVar5);
    fStack_11 = (this->fields).staticFriction;
    pOVar5 = (Object *)func_?(TypeInfo__System__Single,&fStack_11);
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (args->max_length < 10) goto code_?;
    args->vector[9] = pOVar5;
    func_?(args->vector + 9,pOVar5);
    fStack_12 = (this->fields).toughness;
    pOVar5 = (Object *)func_?(TypeInfo__System__Single,&fStack_12);
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (10 < args->max_length) {
      args->vector[10] = pOVar5;
      func_?(args->vector + 10,pOVar5);
      pSVar1 = mscorlib.dll::System::String::String_Format_3
                         (StringLiteral_INSERT_INTO__Material____Name___,args,(MethodInfo *)0x0);
      return pSVar1;
    }
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar13)();
  return pSVar1;
}


/* OverrideMaterial() */

void Assembly-CSharp.dll::OverrideMaterial::OverrideMaterial__ctor
               (OverrideMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Cube_Materials_scarletred00);
    func_?(&StringLiteral_Light_Red);
    func_?(&StringLiteral_A_basic_building_material_u000AHint_);
    cRam_? = '\x01';
  }
  (this->fields).friction = 0.43;
  (this->fields).softness = 1.0;
  (this->fields).staticFriction = 20.0;
  (this->fields).materialName = StringLiteral_Light_Red;
  func_?(&(this->fields).materialName,StringLiteral_Light_Red);
  (this->fields).description = StringLiteral_A_basic_building_material_u000AHint_;
  func_?(&(this->fields).description,StringLiteral_A_basic_building_material_u000AHint_);
  (this->fields).path = StringLiteral_Cube_Materials_scarletred00;
  func_?(&(this->fields).path,StringLiteral_Cube_Materials_scarletred00);
  (this->fields).isUnlocked = 1;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
            ((Transform *)this,(MethodInfo *)0x0);
  return;
}

