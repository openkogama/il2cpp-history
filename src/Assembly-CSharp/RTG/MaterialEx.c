
/* Void SetColor(Material, Color) */

void Assembly-CSharp.dll::RTG::MaterialEx::MaterialEx_SetColor
               (Material *material,Color color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (material != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
              (material,StringLiteral__Color,(Vector4)color,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetCullModeBack(Material) */

void Assembly-CSharp.dll::RTG::MaterialEx::MaterialEx_SetCullModeBack
               (Material *material,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (material != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetInt
              (material,StringLiteral__CullMode,2,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetCullModeFront(Material) */

void Assembly-CSharp.dll::RTG::MaterialEx::MaterialEx_SetCullModeFront
               (Material *material,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (material != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetInt
              (material,StringLiteral__CullMode,1,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetCullModeOff(Material) */

void Assembly-CSharp.dll::RTG::MaterialEx::MaterialEx_SetCullModeOff
               (Material *material,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (material != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetInt
              (material,StringLiteral__CullMode,0,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetStencilCmpAlways(Material) */

void Assembly-CSharp.dll::RTG::MaterialEx::MaterialEx_SetStencilCmpAlways
               (Material *material,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (material != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetInt
              (material,StringLiteral__StencilComp,8,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetStencilCmpNotEqual(Material) */

void Assembly-CSharp.dll::RTG::MaterialEx::MaterialEx_SetStencilCmpNotEqual
               (Material *material,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (material != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetInt
              (material,StringLiteral__StencilComp,6,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetZTestAlways(Material) */

void Assembly-CSharp.dll::RTG::MaterialEx::MaterialEx_SetZTestAlways
               (Material *material,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (material != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetInt
              (material,StringLiteral__ZTest,8,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetZTestEnabled(Material, Boolean) */

void Assembly-CSharp.dll::RTG::MaterialEx::MaterialEx_SetZTestEnabled
               (Material *material,bool enabled,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (material != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetInt
              (material,StringLiteral__ZTest,(enabled ^ 1) * 4 + 4,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetZTestLess(Material) */

void Assembly-CSharp.dll::RTG::MaterialEx::MaterialEx_SetZTestLess
               (Material *material,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (material != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetInt
              (material,StringLiteral__ZTest,2,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetZWriteEnabled(Material, Boolean) */

void Assembly-CSharp.dll::RTG::MaterialEx::MaterialEx_SetZWriteEnabled
               (Material *material,bool enabled,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (material != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetInt
              (material,StringLiteral__ZWrite,(uint)enabled,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

